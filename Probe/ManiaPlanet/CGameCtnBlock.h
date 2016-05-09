#pragma once

namespace ManiaPlanet
{

    class CGameCtnBlock : public CMwNod
    {
    public:
        #include "Generated/CGameCtnBlock.Generated.h"

        uint                            GetFlags            () const            { return m_Flags.m_uiValue; }
        void                            SetFlags            ( uint uiFlags )    { m_Flags.m_uiValue = uiFlags; }

        uint                            NumBlockUnits       () const            { return m_BlockUnits.Size (); }
        CGameCtnBlockUnit*              GetBlockUnit        ( uint i )          { return m_BlockUnits [ i ]; }

        bool                            IsOnGround          () const            { return m_Flags.m_bOnGround != 0; }
        bool                            IsPillar            () const            { return m_Flags.m_bIsPillar != 0; }
        int                             GetVariant          () const            { return m_Flags.m_uiVariant; }
        int                             GetSubVariant       () const            { return m_Flags.m_uiSubVariant; }
        bool                            HasFixedVariant     () const            { return m_Flags.m_bFixedVariant != 0; }

        void                            SetFixedVariant     ( bool bFixed )     { m_Flags.m_bFixedVariant = bFixed ? 1 : 0; }

    private:
        NodMeta                         m_Meta;
        void*                           m_pSkin;
        CGameCtnBlockInfo*              m_pBlockInfo;
        void*                           m_pPhyCharSpecialProperty;
        void*                           m_pWaypointSpecialProperty;
        uint                            m_field34;
        uint                            m_field38;
        uint                            m_field3C;
        Array < CGameCtnBlockUnit* >    m_BlockUnits;
        uint                            m_field48;
        void*                           m_pSceneMobil;
        void*                           m_pTriggerMobil;
        List < void* >                  m_ExtraSceneMobils;
        void*                           m_pHelperMobil;
        uint                            m_field64;
        uint                            m_field68;
        uint                            m_field6C;
        uint3                           m_Position;
        uint                            m_uiDir;
        uint                            m_field80;
        uint                            m_field84;
        uint                            m_field88;
        uint                            m_field8C;
        uint                            m_field90;
        uint                            m_field94;
        union
        {
            uint                        m_uiValue;
            struct 
            {
                uint                    m_uiSubVariant : 6;
                uint                    m_uiUnknownIndex : 6;
                uint                    m_bOnGround : 1;
                uint                    m_bUnknownFlag : 1;
                uint                    m_bIsPillar : 1;
                uint                    m_bHasSkin : 1;
                uint                    m_bHasReplacementBlockInfo : 1;
                uint                    m_uiUnknownFlags2 : 4;
                uint                    m_uiVariant : 6;
                uint                    m_uiUnusedFlags : 4;
                uint                    m_bFixedVariant : 1;
            };
        } m_Flags;
    };

}
