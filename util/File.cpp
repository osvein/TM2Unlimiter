#include "StdInc.h"

bool File::Exists ( const std::wstring& wstrPath )
{
    dword dwAttributes = GetFileAttributes ( wstrPath.c_str () );
    return dwAttributes != INVALID_FILE_ATTRIBUTES && !(dwAttributes & FILE_ATTRIBUTE_DIRECTORY);
}

void File::Move ( const std::wstring& wstrFromPath, const std::wstring& wstrToPath )
{
    if ( !Exists ( wstrFromPath ) )
        return;

    MoveFile ( wstrFromPath.c_str (), wstrToPath.c_str () );
}
