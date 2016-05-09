#include "StdInc.h"

std::wstring StringUtil::ToUTF16 ( const char* psz )
{
    return ToUTF16 ( std::string ( psz ) );
}

std::wstring StringUtil::ToUTF16 ( std::string str )
{
    std::wstring wstrResult;
    int iSize = MultiByteToWideChar ( CP_UTF8, 0, str.c_str (), str.size (), NULL, 0 );
    wstrResult.resize ( iSize );
    MultiByteToWideChar ( CP_UTF8, 0, str.c_str (), str.size (), &wstrResult[0], wstrResult.size () );
    return wstrResult;
}

std::wstring StringUtil::ToUTF16 ( ManiaPlanet::StringA str )
{
    return ToUTF16 ( str.CStr () );
}

std::string StringUtil::ToUTF8 ( const wchar_t* pwsz )
{
    return ToUTF8 ( std::wstring ( pwsz ) );
}

std::string StringUtil::ToUTF8 ( std::wstring wstr )
{
    std::string strResult;
    int iSize = WideCharToMultiByte ( CP_UTF8, 0, wstr.c_str (), wstr.size (), NULL, 0, NULL, NULL );
    strResult.resize ( iSize );
    WideCharToMultiByte ( CP_UTF8, 0, wstr.c_str (), wstr.size (), &strResult[0], strResult.size (), NULL, NULL );
    return strResult;
}

std::string StringUtil::ToUTF8 ( ManiaPlanet::StringW wstr )
{
    return ToUTF8 ( wstr.CStr () );
}

std::string StringUtil::Format ( const char* psz, ... )
{
    va_list va;
    va_start ( va, psz );
    std::string strResult = FormatV ( psz, va );
    va_end ( va );
    return strResult;
}

std::string StringUtil::FormatV ( const char* psz, va_list va )
{
    std::string strResult;
    strResult.resize ( _vscprintf ( psz, va ) );
    _vsnprintf ( const_cast < char* > ( strResult.data () ), strResult.size (), psz, va );
    return strResult;
}

std::wstring StringUtil::Format ( const wchar_t* pwsz, ... )
{
    va_list va;
    va_start ( va, pwsz );
    std::wstring wstrResult = FormatV ( pwsz, va );
    va_end ( va );
    return wstrResult;
}

std::wstring StringUtil::FormatV ( const wchar_t* pwsz, va_list va )
{
    std::wstring wstrResult;
    wstrResult.resize ( _vscwprintf ( pwsz, va ) );
    _vsnwprintf ( const_cast < wchar_t* > ( wstrResult.data () ), wstrResult.size (), pwsz, va );
    return wstrResult;
}

std::vector < std::wstring > StringUtil::Split ( std::wstring wstr, wchar_t wcDelim )
{
    std::wstringstream stream ( wstr );

    std::vector < std::wstring > result;
    std::wstring wstrItem;
    while ( std::getline ( stream, wstrItem, wcDelim ) )
    {
        result.push_back ( wstrItem );
    }
    return result;
}
