#pragma once

namespace ManiaPlanet
{

    class CGameCtnCursor : public CMwNod
    {
    public:
        #include "Generated/CGameCtnCursor.Generated.h"

        bool                HasBlockModelChanged        () const            { return m_bBlockModelChanged != 0; }
        void                SetBlockModelChanged        ( bool bChanged )   { m_bBlockModelChanged = bChanged ? 1 : 0; }

    private:
        uint3               m_Pos;
        uint                m_field24;
        uint                m_field28;
        uint                m_field2C;
        uint3               m_Subdiv;
        uint                m_field3C;
        uint                m_field40;
        uint                m_field44;
        uint                m_field48;
        uint                m_uiDir;
        uint                m_field50;
        CSceneMobil*        m_pBlockMobil;
        CSceneMobil*        m_pBlockHelperMobil;
        CSceneMobil*        m_pPickerMobil;
        CSceneMobil*        m_pPickerHelperMobil;
        CGameOutlineBox*    m_pCursorBox;
        CPlugTree*          m_pCursorBoxShadow;
        CPlugTree*          m_pDirectionalArrow;
        void*               m_pPlugTree;
        uint                m_field74;
        uint                m_field78;
        uint                m_field7C;
        uint                m_field80;
        uint                m_field84;
        uint                m_field88;
        uint                m_field8C;
        uint                m_field90;
        uint                m_field94;
        color               m_CanPlaceColor;
        color               m_CanJoinColor;
        color               m_CannotPlaceNorJoinColor;
        color               m_NothingToDoColor;
        uint                m_fieldD8;
        uint                m_fieldDC;
        uint                m_fieldE0;
        uint                m_fieldE4;
        uint                m_fieldE8;
        uint                m_fieldEC;
        uint                m_fieldF0;
        uint                m_fieldF4;
        uint                m_fieldF8;
        uint                m_fieldFC;
        uint                m_field100;
        uint                m_field104;
        uint                m_field108;
        uint                m_field10C;
        uint                m_field110;
        uint                m_field114;
        uint                m_field118;
        uint                m_field11C;
        uint                m_field120;
        uint                m_field124;
        void*               m_pBlockInfo1;
        void*               m_pBlockInfo2;
        uint                m_field130;
        uint3               m_SubdivFactors;
        uint                m_field140;
        uint                m_field144;
        uint                m_field148;
        uint                m_field14C;
        uint                m_field150;
        uint                m_field154;
        uint                m_field158;
        uint                m_field15C;
        uint                m_field160;
        uint                m_field164;
        uint                m_field168;
        uint                m_field16C;
        uint                m_Y;
        uint                m_bBlockModelChanged;
    };

}
