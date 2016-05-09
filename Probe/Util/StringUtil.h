#pragma once

class StringUtil
{
public:
    static std::wstring         ToUTF16         ( const char* psz );
    static std::wstring         ToUTF16         ( std::string str );
    static std::wstring         ToUTF16         ( ManiaPlanet::StringA str );

    static std::string          ToUTF8          ( const wchar_t* pwsz );
    static std::string          ToUTF8          ( std::wstring wstr );
    static std::string          ToUTF8          ( ManiaPlanet::StringW wstr );

    static std::string          Format          ( const char* psz, ... );
    static std::string          FormatV         ( const char* psz, va_list va );

    static std::wstring         Format          ( const wchar_t* pwsz, ... );
    static std::wstring         FormatV         ( const wchar_t* pwsz, va_list va );

    static std::vector < std::wstring > Split   ( std::wstring wstr, wchar_t wcDelim );
};
