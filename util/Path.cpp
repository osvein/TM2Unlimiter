#include "StdInc.h"

std::wstring Path::GetWorkingDirectory ()
{
    wchar_t wszResult[MAX_PATH];
    GetCurrentDirectory ( sizeof(wszResult), wszResult );
    return wszResult;
}

std::wstring Path::GetMainModuleDirectory ()
{
    wchar_t wszPath[MAX_PATH];
    GetModuleFileName ( NULL, wszPath, sizeof(wszPath) );
    return GetDirectoryName ( wszPath );
}

std::wstring Path::GetMainModuleFileName ()
{
    wchar_t wszPath[MAX_PATH];
    GetModuleFileName ( NULL, wszPath, sizeof(wszPath) );
    return GetFileName ( wszPath );
}

std::wstring Path::GetDirectoryName ( const std::wstring& wstrPath )
{
    std::wstring wstrResult ( wstrPath );
    if ( wstrResult.empty () )
        return wstrResult;

    if ( wstrResult.back () == L'\\' )
        wstrResult.resize ( wstrResult.size () - 1 );

    int iBackslashPos = wstrResult.find_last_of ( L'\\' );
    if ( iBackslashPos == std::wstring::npos )
        return std::wstring ();

    wstrResult.resize ( iBackslashPos );
    return wstrResult;
}

std::wstring Path::GetAbsolutePath ( const std::wstring& wstrPath )
{
    wchar_t wszResult[MAX_PATH];
    GetFullPathName ( wstrPath.c_str (), sizeof(wszResult) / sizeof(wchar_t), wszResult, NULL );
    return std::wstring ( wszResult );
}

std::wstring Path::GetRelativePath ( const std::wstring& wstrPath, const std::wstring& wstrBasePath )
{
    int iCmpLength = wstrBasePath.size ();
    if ( wstrBasePath.back () == L'\\' )
        iCmpLength--;

    if ( wstrPath.size () < iCmpLength + 1 ||
         wcsnicmp ( wstrPath.c_str (), wstrBasePath.c_str (), iCmpLength ) ||
         wstrPath[iCmpLength] != L'\\' )
    {
        return std::wstring ();
    }

    std::wstring wstrResult ( wstrPath.begin () + iCmpLength + 1, wstrPath.end () );
    return wstrResult;
}

std::wstring Path::GetFileName ( const std::wstring& wstrPath )
{
    int iBackslashPos = wstrPath.find_last_of ( L'\\' );
    if ( iBackslashPos == std::wstring::npos )
        return wstrPath;

    std::wstring wstrResult ( wstrPath.begin () + iBackslashPos + 1, wstrPath.end () );
    return wstrResult;
}

std::wstring Path::GetFileExtension ( const std::wstring& wstrPath )
{
    int iBackslashPos = wstrPath.find_last_of ( L'\\' );
    int iDotPos = wstrPath.find_last_of ( L'.' );
    if ( iDotPos > iBackslashPos )
        return std::wstring ( wstrPath.begin () + iDotPos + 1, wstrPath.end () );

    return std::wstring ();
}

std::wstring Path::GetFileNameWithoutExtension ( const std::wstring& wstrPath )
{
    std::wstring wstrResult = GetFileName ( wstrPath );
    int iDotPos = wstrResult.find_last_of ( L'.' );
    if ( iDotPos == std::wstring::npos )
        return wstrResult;

    wstrResult.resize ( iDotPos );
    return wstrResult;
}

std::wstring Path::ChangeExtension ( const std::wstring& wstrPath, const wchar_t* pwszExtension )
{
    std::wstring wstrResult ( wstrPath );

    int iBackslashPos = wstrPath.find_last_of ( L'\\' );
    int iDotPos = wstrPath.find_last_of ( L'.' );
    if ( iDotPos > iBackslashPos )
        wstrResult.resize ( iDotPos );

    if ( pwszExtension[0] != L'.' )
        wstrResult += L'.';

    wstrResult += pwszExtension;
    return wstrResult;
}

std::wstring Path::Combine ( const std::wstring& wstrPath1, const std::wstring& wstrPath2 )
{
    std::wstring wstrResult ( wstrPath1 );
    if ( !wstrResult.empty () && wstrResult.back () != L'\\' )
        wstrResult += L'\\';

    wstrResult += wstrPath2;
    return wstrResult;
}
