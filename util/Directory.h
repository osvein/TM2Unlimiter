#pragma once

class Directory
{
public:
    static void         Create      ( const std::wstring& wstrPath );
    static void         Move        ( const std::wstring& wstrFromPath, const std::wstring& wstrToPath );
    static void         Rename      ( const std::wstring& wstrPath, const std::wstring& wstrNewName );
    static void         Delete      ( const std::wstring& wstrPath );
    static bool         Exists      ( const std::wstring& wstrPath );

    static std::wstring GetTempDir  ( const wchar_t* pwszPrefix );
    static std::wstring GetTempFile ( const wchar_t* pwszPrefix );
    static std::wstring GetTempFile ( const std::wstring& wstrPath, const wchar_t* pwszPrefix );
    static std::wstring GetTempFile ( const std::wstring& wstrPath, const wchar_t* pwszPrefix, const wchar_t* pwszExtension );
};
