#include "StdInc.h"

using namespace pugi;

#define URL_BASE L"http://dl.dropbox.com/u/60681258/tm2"
#define VERSIONS_URL (URL_BASE L"/versions.xml")

Updater::Updater ( const wchar_t* pwszProductName, uint uiThisVersionCrc )
{
    m_wstrProductName = pwszProductName;
    m_uiThisVersionCrc = uiThisVersionCrc;
}

void Updater::DeleteOldFiles ()
{
    WIN32_FIND_DATA findData;
    HANDLE hFind = FindFirstFile ( Path::Combine ( Path::GetMainModuleDirectory (), L"*.old" ).c_str (), &findData );
    if ( hFind == INVALID_HANDLE_VALUE )
        return;

    std::vector < std::wstring > oldFiles;
    do
    {
        oldFiles.push_back ( findData.cFileName );
    } while ( FindNextFile ( hFind, &findData ) );
    FindClose ( hFind );

    if ( oldFiles.empty () )
        return;

    // Wait for the old .exe to quit
    Sleep ( 1000 );

    for ( auto it = oldFiles.begin (); it != oldFiles.end (); it++ )
    {
        DeleteFile ( it->c_str () );
    }
}

Updater::eStatus Updater::UpdateIfNeeded ( const wchar_t* pwszCrcSourceFilePath )
{
    CCRC32 crc;
    dword dwCrc32;
    if ( !crc.FileCRC ( pwszCrcSourceFilePath, &dwCrc32 ) )
        return ERROR_TARGET_MISSING;

    if ( dwCrc32 == m_uiThisVersionCrc )
        return STATUS_OK;

    std::wstring wstrVersion;
    eStatus status = GetVersionForCrc ( dwCrc32, wstrVersion );
    if ( status != STATUS_OK )
        return status;

    status = UpdateToVersion ( wstrVersion );
    return status == STATUS_OK ? STATUS_UPDATED : status;
}

Updater::eStatus Updater::GetVersionForCrc ( uint uiCrc, std::wstring& wstrVersion )
{
    std::string strVersionsXml = DownloadString ( VERSIONS_URL );
    if ( strVersionsXml.empty () )
        return ERROR_GET_VERSIONS;

    xml_document doc;
    doc.load_buffer ( strVersionsXml.c_str (), strVersionsXml.size () );
    xml_node versionNode = doc.select_single_node ( StringUtil::Format ( L"/versions/maniaplanet[@crc32='%08X']/%s",
        uiCrc, StringUtil::ToLower ( m_wstrProductName ).c_str () ).c_str () ).node ();
    if ( !versionNode )
        return ERROR_NO_MATCHING_VERSION;

    wstrVersion = versionNode.child_value ();
    return STATUS_OK;
}

Updater::eStatus Updater::UpdateToVersion ( const std::wstring& wstrVersion )
{
    std::string zip = DownloadString ( StringUtil::Format ( L"%s/%s-v%s.zip", URL_BASE, m_wstrProductName.c_str (),
        wstrVersion.c_str () ).c_str () );
    if ( zip.empty () )
        return ERROR_UPDATE_FAILED;

    std::wstring wstrZipFilePath = Directory::GetTempFile ( Path::GetMainModuleDirectory (), L"", L"zip" );
    std::ofstream file ( wstrZipFilePath.c_str (), std::ios::out | std::ios::binary | std::ios::trunc );
    file.write ( zip.data (), zip.size () );
    file.close ();

    unzFile pZipFile = unzOpen ( StringUtil::ToUTF8 ( wstrZipFilePath ).c_str () );
    if ( !pZipFile )
    {
        DeleteFile ( wstrZipFilePath.c_str () );
        return ERROR_UPDATE_FAILED;
    }

    do
    {
        char szFileName[MAX_PATH];
        unz_file_info fileInfo;
        unzGetCurrentFileInfo ( pZipFile, &fileInfo, szFileName, sizeof(szFileName), NULL, 0, NULL, 0 );
        std::wstring wstrFile = StringUtil::ToUTF16 ( szFileName );
        if ( Path::GetFileExtension ( wstrFile ) == L"exe" ||
             Path::GetFileExtension ( wstrFile ) == L"dll" )
        {
            ExtractFile ( pZipFile );
        }
    } while ( unzGoToNextFile ( pZipFile ) == UNZ_OK );

    unzClose ( pZipFile );
    DeleteFile ( wstrZipFilePath.c_str () );
    return STATUS_OK;
}

void Updater::ExtractFile ( unzFile pZipFile )
{
    char szFileName[MAX_PATH];
    unz_file_info fileInfo;
    unzGetCurrentFileInfo ( pZipFile, &fileInfo, szFileName, sizeof(szFileName), NULL, 0, NULL, 0 );

    std::wstring wstrFilePath = Path::Combine ( Path::GetMainModuleDirectory (), StringUtil::ToUTF16(szFileName) );
    if ( File::Exists ( wstrFilePath ) )
        File::Move ( wstrFilePath, wstrFilePath + L".old" );

    std::ofstream file ( wstrFilePath.c_str (), std::ios::out | std::ios::trunc | std::ios::binary );
    static char cBuffer[0x1000];
    int iChunkSize;
    unzOpenCurrentFile ( pZipFile );
    while ( iChunkSize = unzReadCurrentFile ( pZipFile, cBuffer, sizeof(cBuffer) ) )
    {
        file.write ( cBuffer, iChunkSize );
    }
    unzCloseCurrentFile ( pZipFile );
    file.close ();
}

std::string Updater::DownloadString ( const wchar_t* pwszUrl )
{
    HINTERNET hInternet = InternetOpen ( L"TM2Unlimiter", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0 );
    if ( !hInternet )
        return std::string ();

    HINTERNET hFile = InternetOpenUrl ( hInternet, pwszUrl, NULL, 0, INTERNET_FLAG_RELOAD | INTERNET_FLAG_NO_CACHE_WRITE, NULL );
    if ( !hFile )
    {
        InternetCloseHandle ( hInternet );
        return std::string ();
    }

    dword dwStatusCode;
    dword dwStatusCodeSize = sizeof(dwStatusCode);
    HttpQueryInfo ( hFile, HTTP_QUERY_STATUS_CODE | HTTP_QUERY_FLAG_NUMBER, &dwStatusCode, &dwStatusCodeSize, NULL );
    if ( dwStatusCode != 200 )
    {
        InternetCloseHandle ( hFile );
        InternetCloseHandle ( hInternet );
        return std::string ();
    }

    std::string strResult;
    static char cBuffer[0x1000];
    dword dwBytesRead;
    do
    {
        InternetReadFile ( hFile, cBuffer, sizeof(cBuffer), &dwBytesRead );
        strResult.append ( cBuffer, dwBytesRead );
    } while ( dwBytesRead > 0 );

    InternetCloseHandle ( hFile );
    InternetCloseHandle ( hInternet );
    return strResult;
}
