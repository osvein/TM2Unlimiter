#pragma once

class File
{
public:
    static bool         Exists              ( const std::wstring& wstrPath );
    static void         Move                ( const std::wstring& wstrFromPath, const std::wstring& wstrToPath );
};
