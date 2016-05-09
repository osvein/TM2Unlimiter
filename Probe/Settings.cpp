#include "StdInc.h"

#define INI_FILENAME L"TM2Unlimiter.ini"

std::wstring Settings::GetString ( const wchar_t* pwszSection, const wchar_t* pwszKey )
{
	static wchar_t wszBuffer[0x400];
	GetPrivateProfileString ( pwszSection, pwszKey, L"", wszBuffer, sizeof(wszBuffer) / sizeof(wszBuffer[0]), GetIniPath () );
	return std::regex_replace ( std::wstring ( wszBuffer ), std::wregex ( L"\\s*;.*" ), std::wstring ( L"" ) );
}

int Settings::GetInt ( const wchar_t* pwszSection, const wchar_t* pwszKey, int iDefault )
{
	return GetPrivateProfileInt ( pwszSection, pwszKey, iDefault, GetIniPath () );
}

const wchar_t* Settings::GetIniPath ()
{
	static std::wstring wstrIniPath;
	if ( wstrIniPath.empty () )
	{
		wchar_t wszCurrentPath[MAX_PATH];
		GetCurrentDirectory ( sizeof(wszCurrentPath) / sizeof(wszCurrentPath[0]), wszCurrentPath );

		wstrIniPath += wszCurrentPath;
		if (wstrIniPath[wstrIniPath.size () - 1] != L'\\' )
		{
			wstrIniPath += L"\\";
		}
		wstrIniPath += INI_FILENAME;
	}
	return wstrIniPath.c_str ();
}
