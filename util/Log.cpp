#include "StdInc.h"

void Log::Info ( const wchar_t* pwszMsg, ... )
{

    va_list va;
    va_start ( va, pwszMsg );
    std::wstring wstrMsg = StringUtil::FormatV ( pwszMsg, va );
    va_end ( va );

    WriteLine ( wstrMsg );
}

void Log::Error ( const wchar_t* pwszMsg, ... )
{
    va_list va;
    va_start ( va, pwszMsg );
    std::wstring wstrMsg = StringUtil::FormatV ( pwszMsg, va );
    va_end ( va );

    Write ( L"ERROR: " );
    WriteLine ( wstrMsg );
}

void Log::Write ( const std::wstring& wstr )
{
    static HANDLE hStdOut = NULL;
    if ( !hStdOut )
    {
        STARTUPINFO startInfo;
        GetStartupInfo ( &startInfo );
        if ( startInfo.dwFlags & STARTF_USESTDHANDLES )
            hStdOut = startInfo.hStdOutput;
    }

    if ( hStdOut )
    {
        dword dwBytesWritten;
        WriteFile ( hStdOut, wstr.data (), wstr.size () * sizeof(wchar_t), &dwBytesWritten, NULL );
    }
    else
    {
        wprintf ( L"%s", wstr.c_str () );
    }
}

void Log::WriteLine ( const std::wstring& wstr )
{
    Write ( wstr + L"\n" );
}
