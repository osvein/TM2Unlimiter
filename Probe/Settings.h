#pragma once

class Settings
{
public:
    static std::wstring             GetString           ( const wchar_t* pwszSection, const wchar_t* pwszKey );
    static int                      GetInt              ( const wchar_t* pwszSection, const wchar_t* pwszKey, int iDefault );

private:
    static const wchar_t*           GetIniPath          ();
};
