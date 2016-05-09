#pragma once

namespace ManiaPlanet
{

    class CGameCtnBlockUnitInfo : public CMwNod
    {
    public:
        #include "Generated/CGameCtnBlockUnitInfo.Generated.h"

    private:
        uint            m_uiAcceptPylons;
        uint            m_uiPlacePylons;
        uint            m_bUnderground;
        Array < void* > m_Clips;
        void*           m_pTopClip;
        void*           m_pBottomClip;
        Array < void* > m_Pylons;
        uint3           m_Offset;
        Id              m_idName;
        uint            m_field4C;
        uint            m_field50;
        void*           m_pReplacementBlockInfo;
        uint            m_uiMultiDir;
        uint            m_uiReplacementIndex;
        Id              m_idTerrainModifier;
    };

}
