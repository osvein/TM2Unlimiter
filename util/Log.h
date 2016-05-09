#pragma once

class Log
{
public:
    static void         Info            ( const wchar_t* pwszMsg, ... );
    static void         Error           ( const wchar_t* pwszMsg, ... );

private:
    static void         Write           ( const std::wstring& wstr );
    static void         WriteLine       ( const std::wstring& wstr );
};
