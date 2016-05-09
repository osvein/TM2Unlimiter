#pragma once

namespace ManiaPlanet
{

    class CGameApp : public CGameProcess
    {
    public:
        #include "Generated/CGameApp.Generated.h"

    private:
        void*               m_pCatalog;
        uint                m_field2C;
        void*               m_pMenuContext;
        List < void* >      m_field34;
        uint                m_field40;
        void*               m_pViewport;
        void*               m_pAudioPort;
        void*               m_pInputPort;
        void*               m_pLoadProgress;
        uint                m_field54;
        uint                m_field58;
        uint                m_field5C;
        uint                m_field60;
        uint                m_field64;
        uint                m_field68;
        uint                m_field6C;
        uint                m_field70;
        uint                m_field74;
        uint                m_field78;
        uint                m_field7C;
        uint                m_field80;
        uint                m_field84;
        uint                m_field88;
        uint                m_field8C;
        StringW             m_field90;
        StringW             m_field98;
        StringW             m_wstrBenchLoadingFolderName;
        StringA             m_fieldA8;
        StringW             m_fieldB0;
        StringW             m_fieldB8;
        StringW             m_fieldC0;
        StringW             m_fieldC8;
        StringW             m_fieldD0;
        uint                m_fieldD8;
        uint                m_fieldDC;
        void*               m_pScriptHandlerAppMainLoop;
        List < void* >      m_ActiveMenus;
        uint                m_fieldF0;
        uint                m_fieldF4;
        uint                m_fieldF8;
        uint                m_fieldFC;
        uint                m_field100;
        StringW             m_field104;
        uint                m_field10C;
        uint                m_field110;
        StringW             m_field114;
        uint                m_field11C;
        uint                m_field120;
        uint                m_field124;
        void*               m_pSystemOverlay;
        void*               m_pBasicDialogs;
        uint                m_field130;
        uint                m_field134;
        StringA             m_pstrCmdLineUrlMptp;
        StringW             m_field140;
        uint                m_field148;
        uint                m_field14C;
        uint                m_field150;
        uint                m_field154;
        uint                m_field158;
        void*               m_pGameDataFolder;
        void*               m_pPersonalFolder;
        Array < void* >     m_GameDataFolders;
        Array < void* >     m_PersonalFolders;
        Array < void* >     m_field174;
        Array < void* >     m_field17C;
        uint                m_field184;
        uint                m_field188;
        uint                m_field18C;
        uint                m_field190;
        uint                m_field194;
        uint                m_field198;
        uint                m_field19C;
        List < void* >      m_field1A0;
        List < void* >      m_field1AC;
        uint                m_field1B8;
        uint                m_field1BC;
        uint                m_field1C0;
        void*               m_pAnticheat;
    };

}
