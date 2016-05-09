#pragma once

class Path
{
public:
    static std::wstring         GetWorkingDirectory         ();
    static std::wstring         GetMainModuleDirectory      ();
    static std::wstring         GetMainModuleFileName       ();
    
    static std::wstring         GetDirectoryName            ( const std::wstring& wstrPath );
    static std::wstring         GetAbsolutePath             ( const std::wstring& wstrPath );
    static std::wstring         GetRelativePath             ( const std::wstring& wstrPath, const std::wstring& wstrBasePath );
    static std::wstring         GetFileName                 ( const std::wstring& wstrPath );

    static std::wstring         GetFileExtension            ( const std::wstring& wstrPath );
    static std::wstring         GetFileNameWithoutExtension ( const std::wstring& wstrPath );
    static std::wstring         ChangeExtension             ( const std::wstring& wstrPath, const wchar_t* pwszExtension );

    static std::wstring         Combine                     ( const std::wstring& wstrPath1, const std::wstring& wstrPath2 );
};
