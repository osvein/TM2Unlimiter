#include "StdInc.h"

#define TARGET_NAME L"ManiaPlanet"
#define TARGET_EXE L"ManiaPlanet.exe"
#define TARGET_DATE L"2013/02/12"
#define TARGET_CRC32  0x298E8F9A

#define PRODUCT_NAME L"TM2Unlimiter"
#define PRODUCT_EXE L"TM2Unlimiter.exe"
#define PROBE_DLL "TM2UnlimiterProbe.dll"

int __stdcall wWinMain ( HINSTANCE hInstance, HINSTANCE hPrevInstance, wchar_t* pwszCmdLine, int iCmdShow )
{
    PROCESS_INFORMATION procInfo;
    STARTUPINFO startInfo;
    memset ( &startInfo, 0, sizeof(startInfo) );
    startInfo.cb = sizeof(startInfo);

    Updater updater ( PRODUCT_NAME, TARGET_CRC32 );
    updater.DeleteOldFiles ();
    Updater::eStatus status = updater.UpdateIfNeeded ( TARGET_EXE );
    switch ( status )
    {
        case Updater::STATUS_UPDATED:
            // Start the new launcher .exe and quit
            CreateProcess ( PRODUCT_EXE, pwszCmdLine, NULL, NULL, FALSE, 0, NULL, NULL, &startInfo, &procInfo );
            return 0;

        case Updater::ERROR_TARGET_MISSING:
            MessageBox (
                NULL,
                L"Can't find " TARGET_EXE L", make sure " PRODUCT_NAME L" is placed next to it.",
                L"Error",
                MB_ICONEXCLAMATION
                );
            return 1;

        case Updater::ERROR_GET_VERSIONS:
            MessageBox (
                NULL,

                L"This version of " PRODUCT_NAME L" only works with the "
                TARGET_DATE L" update of " TARGET_EXE L", but you have a different version.\n\n"
                L"Checking for updates failed. " TARGET_NAME L" will be started without " PRODUCT_NAME L".",

                L"Updating failed",
                MB_ICONEXCLAMATION
                );
            CreateProcess ( TARGET_EXE, pwszCmdLine, NULL, NULL, FALSE, 0, NULL, NULL, &startInfo, &procInfo );
            return 1;

        case Updater::ERROR_NO_MATCHING_VERSION:
            MessageBox (
                NULL,

                L"This version of " PRODUCT_NAME L" only works with the "
                TARGET_DATE L" update of " TARGET_EXE L", but you have a different version.\n\n"
                L"There is also no update of " PRODUCT_NAME L" available yet. "
                TARGET_NAME L" will be started without " PRODUCT_NAME L".",

                L"Out of date",
                MB_ICONINFORMATION
                );

            CreateProcess ( TARGET_EXE, pwszCmdLine, NULL, NULL, FALSE, 0, NULL, NULL, &startInfo, &procInfo );
            return 1;

        case Updater::ERROR_UPDATE_FAILED:
            MessageBox (
                NULL,

                L"This version of " PRODUCT_NAME L" only works with the "
                TARGET_DATE L" update of " TARGET_EXE L", but you have a different version.\n\n"
                L"Automatic updating failed. " TARGET_NAME L" will be started without " PRODUCT_NAME L".",

                L"Updating failed",
                MB_ICONEXCLAMATION
                );
            CreateProcess ( TARGET_EXE, pwszCmdLine, NULL, NULL, FALSE, 0, NULL, NULL, &startInfo, &procInfo );
            return 1;
    }

    if ( !DetourCreateProcessWithDll ( TARGET_EXE, pwszCmdLine, NULL, NULL, FALSE, 0, NULL, NULL,
        &startInfo, &procInfo, PROBE_DLL, NULL ) )
    {
        MessageBox ( NULL, L"Failed to start " TARGET_EXE, L"Error", MB_ICONEXCLAMATION );
        return 1;
    }

    return 0;
}
