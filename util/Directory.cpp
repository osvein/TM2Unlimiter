#include "StdInc.h"

void Directory::Create ( const std::wstring& wstrPath )
{
    std::wstring wstrTemp ( wstrPath );

    int iSlash = wstrTemp.find ( L'\\' );
    while ( iSlash != std::wstring::npos )
    {
        wstrTemp [ iSlash ] = L'\0';
        if ( GetFileAttributes ( wstrTemp.c_str () ) == INVALID_FILE_ATTRIBUTES )
            CreateDirectory ( wstrTemp.c_str (), NULL );

        wstrTemp [ iSlash ] = L'\\';
        iSlash = wstrTemp.find ( L'\\', iSlash + 1 );
    }
    if ( GetFileAttributes ( wstrTemp.c_str () ) == INVALID_FILE_ATTRIBUTES )
        CreateDirectory ( wstrTemp.c_str (), NULL );
}

void Directory::Move ( const std::wstring& wstrFromPath, const std::wstring& wstrToPath )
{
    if ( !Exists ( wstrFromPath ) )
        return;

    MoveFile ( wstrFromPath.c_str (), wstrToPath.c_str () );
}

void Directory::Rename ( const std::wstring& wstrPath, const std::wstring& wstrNewName )
{
    Move ( wstrPath, Path::Combine ( Path::GetDirectoryName(wstrPath), wstrNewName ) + L"\\" );
}

void Directory::Delete ( const std::wstring& wstrPath )
{
    std::wstring wstrDirsToDelete = wstrPath + L'\0';

    SHFILEOPSTRUCT op;
    memset ( &op, 0, sizeof(op) );
    op.wFunc = FO_DELETE;
    op.pFrom = wstrDirsToDelete.c_str ();
    op.fFlags = FOF_NOCONFIRMATION | FOF_NOERRORUI | FOF_SILENT;
    SHFileOperation ( &op );
}

bool Directory::Exists ( const std::wstring& wstrPath )
{
    dword dwAttributes = GetFileAttributes ( wstrPath.c_str () );
    return dwAttributes != INVALID_FILE_ATTRIBUTES && ( dwAttributes & FILE_ATTRIBUTE_DIRECTORY ) != 0;
}

std::wstring Directory::GetTempDir ( const wchar_t* pwszPrefix )
{
    wchar_t wszTempPath[MAX_PATH];
    GetTempPath ( sizeof(wszTempPath) / sizeof(wchar_t), wszTempPath );
    
    std::wstring wstrResult;
    do
    {
        wstrResult = Path::Combine (
            wszTempPath,
            StringUtil::Format ( L"%s%d", pwszPrefix, rand() )
        );
    } while ( Exists ( wstrResult ) );
    Create ( wstrResult );
    return wstrResult;
}

std::wstring Directory::GetTempFile ( const wchar_t* pwszPrefix )
{
    wchar_t wszTempPath[MAX_PATH];
    GetTempPath ( sizeof(wszTempPath) / sizeof(wchar_t), wszTempPath );
    return GetTempFile ( wszTempPath, pwszPrefix );
}

std::wstring Directory::GetTempFile ( const std::wstring& wstrPath, const wchar_t* pwszPrefix )
{
    return GetTempFile ( wstrPath, pwszPrefix, NULL );
}

std::wstring Directory::GetTempFile ( const std::wstring& wstrPath, const wchar_t* pwszPrefix, const wchar_t* pwszExtension )
{
    wchar_t wszTempFilePath[MAX_PATH];
    GetTempFileName ( wstrPath.c_str (), pwszPrefix, 0, wszTempFilePath );
    std::wstring wstrTempFile ( wszTempFilePath );
    if ( pwszExtension )
    {
         std::wstring wstrTempFileWithExtension = Path::ChangeExtension ( wstrTempFile, pwszExtension );
         MoveFile ( wstrTempFile.c_str (), wstrTempFileWithExtension.c_str () );
         wstrTempFile = wstrTempFileWithExtension;
    }

    return wstrTempFile;
}
