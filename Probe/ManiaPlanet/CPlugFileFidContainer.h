#pragma once

namespace ManiaPlanet
{

    class CPlugFileFidContainer : public CPlugFile
    {
    public:
        #include "Generated/CPlugFileFidContainer.Generated.h"

        struct FileEntry
        {
        public:
            uint                    m_uiFolderIndex;
            StringW                 m_wstrName;
            uint                    m_fieldC;
            uint                    m_uiUncompressedSize;
            uint                    m_uiCompressedSize;
            uint                    m_uiOffset;
            uint                    m_uiClassID;
            uint                    m_uiFlags1;
            uint                    m_uiFlags2;
            CSystemFid*             m_pFid;
            uint                    m_field2C;
            uint                    m_field30;
            uint                    m_field34;
        };

        struct FolderEntry
        {
            uint                    m_uiParentFolderIndex;
            StringW                 m_wstrName;
            CSystemFids*            m_pFidFolder;
            uint                    m_uiFlags;
        };

        virtual void            m50                     ()      {}
        virtual void            m54                     ()      {}
        virtual void            m58                     ()      {}
        virtual void            m5C                     ()      {}
        virtual void            m60                     ()      {}
        virtual void            m64                     ()      {}
        virtual void            m68                     ()      {}
        virtual void            m6C                     ()      {}
        virtual void            m70                     ()      {}
        virtual void            m74                     ()      {}
        virtual void            m78                     ()      {}
        virtual void            m7C                     ()      {}
        virtual void            m80                     ()      {}
        virtual void            m84                     ()      {}
        virtual void            m88                     ()      {}
        virtual void            m8C                     ()      {}
        virtual void            m90                     ()      {}
        virtual void            m94                     ()      {}
        virtual void            m98                     ()      {}
        virtual void            m9C                     ()      {}
        virtual void            mA0                     ()      {}
        virtual void            CreateFidStructure      ( CSystemFids* pRootFolder, bool bUsePackNameAsSubFolder )      {}
        virtual void            mA8                     ()      {}
        virtual void            AttachFid               ( FileEntry* pFileEntry, uint uiIndex, CSystemFid* pFid )       {}
        virtual void            DetachFid               ( FileEntry* pFileEntry, uint uiIndex, CSystemFid* pFid )       {}

    private:
        List < FolderEntry >    m_Folders;
        List < FileEntry >      m_Files;
        CSystemFidsDrive*       m_pDrive;
        uint                    m_field30;
        uint                    m_field34;
        CSystemFid::CLoader*    m_pLoader;
        uint                    m_bFidStructureCreated;
    };

}
