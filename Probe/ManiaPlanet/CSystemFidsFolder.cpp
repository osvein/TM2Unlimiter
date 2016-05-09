#include "StdInc.h"

namespace ManiaPlanet
{

    CSystemFidsFolder* CSystemFidsFolder::GetFolder ( const wchar_t* pwszPath )
    {
        std::vector < std::wstring > pathParts = StringUtil::Split ( pwszPath, L'/' );
        CSystemFidsFolder* pCurrentFolder = this;
        
        for ( auto it = pathParts.begin (); it != pathParts.end (); ++it )
        {
            CSystemFidsFolder* pNextFolder = NULL;
            for ( auto it2 = pCurrentFolder->m_Folders.Begin (); it2 != pCurrentFolder->m_Folders.End (); it2++ )
            {
                CSystemFidsFolder* pFolder = nod_cast < CSystemFidsFolder* > ( *it2 );
                if ( pFolder && pFolder->m_wstrName == it->c_str () )
                {
                    pNextFolder = pFolder;
                    break;
                }
            }
            pCurrentFolder = pNextFolder;
            if ( !pCurrentFolder )
                return NULL;
        }
        return pCurrentFolder;
    }

    CSystemFidsFolder* CSystemFidsFolder::GetFolder ( int i )
    {
        return nod_cast < CSystemFidsFolder* > ( m_Folders[i] );
    }

    CSystemFidFile* CSystemFidsFolder::GetFile ( const wchar_t* pwszPath )
    {
        CSystemFidsFolder* pFolder = this;

        const wchar_t* pwszLastSlash = wcsrchr ( pwszPath, L'/' );
        const wchar_t* pwszFileName = pwszPath;
        if ( pwszLastSlash )
        {
            std::wstring wstrPath ( pwszPath, pwszLastSlash );
            pFolder = GetFolder ( wstrPath.c_str () );
            if ( !pFolder )
                return NULL;

            pwszFileName = pwszLastSlash + 1;
        }

        for ( auto it = pFolder->m_Files.Begin (); it != pFolder->m_Files.End (); it++ )
        {
            CSystemFidFile* pFile = nod_cast < CSystemFidFile* > ( *it );
            if ( pFile && pFile->GetFileName () == pwszFileName )
                return pFile;
        }
        return NULL;
    }

    CSystemFidFile* CSystemFidsFolder::GetFile ( int i )
    {
        return nod_cast < CSystemFidFile* > ( m_Files[i] );
    }

    bool CSystemFidsFolder::IsAncestorOf ( CSystemFidsFolder* pFolder )
    {
        while ( pFolder )
        {
            if ( pFolder == this )
                return true;

            pFolder = (CSystemFidsFolder *)pFolder->GetParentFolder ();
        }
        return false;
    }

}
