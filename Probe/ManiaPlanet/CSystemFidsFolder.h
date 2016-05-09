#pragma once

namespace ManiaPlanet
{

    class CSystemFidFile;

    class CSystemFidsFolder : public CSystemFids
    {
    public:
        #include "Generated/CSystemFidsFolder.Generated.h"

        int                 NumFolders                  () const    { return m_Folders.Size (); }
        int                 NumFiles                    () const    { return m_Files.Size (); }

        CSystemFidsFolder*  GetFolder                   ( const wchar_t* pwszPath );
        CSystemFidsFolder*  GetFolder                   ( int i );

        CSystemFidFile*     GetFile                     ( const wchar_t* pwszPath );
        CSystemFidFile*     GetFile                     ( int i );

        bool                IsAncestorOf                ( CSystemFidsFolder* pFolder );

    private:
        uint                m_field38;
        uint                m_field3C;
        StringW             m_wstrName;
    };

}
