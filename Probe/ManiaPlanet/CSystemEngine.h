#pragma once

namespace ManiaPlanet
{

    class CSystemEngine : public CMwEngine
    {
    public:
        #include "Generated/CSystemEngine.Generated.h"

        CSystemFidsDrive*       GetResourceDrive        () const    { return m_pResourceDrive; }
        CSystemFidsDrive*       GetPersonalDrive        () const    { return m_pPersonalDrive; }
        CSystemFidsDrive*       GetManiaPlanetDrive     () const    { return m_pManiaPlanetDrive; }
        CSystemFidsDrive*       GetCommonDrive          () const    { return m_pCommonDrive; }
        CSystemFidsDrive*       GetTempDrive            () const    { return m_pTempDrive; }
        CSystemFidsFolder*      GetGameDataFolder       () const    { return m_pGameDataFolder; }

    private:
        uint                    m_field14;
        void*                   m_pSystemManagerFile;
        StringW                 m_field1C;
        CSystemFidsDrive*       m_pResourceDrive;
        CSystemFidsDrive*       m_pPersonalDrive;
        CSystemFidsDrive*       m_pManiaPlanetDrive;
        CSystemFidsDrive*       m_pCommonDrive;
        CSystemFidsDrive*       m_pTempDrive;
        List < void* >          m_field38;
        Array < CSystemFid* >   m_ResourceNameFids;
        uint                    m_field4C;
        CSystemFidsFolder*      m_pGameDataFolder;
        uint                    m_field54;
        uint                    m_field58;
        uint                    m_field5C;
        uint                    m_bAnalyzerHasReadDuringPreviousFrame;
        uint                    m_bAnalyzerHasWrittenDuringPreviousFrame;
        StringW                 m_field68;
        uint                    m_field70;
    };

}
