#pragma once

namespace ManiaPlanet
{

    class CGameCtnBlock;

    class CGameCtnBlockUnit : public CMwNod
    {
    public:
        #include "Generated/CGameCtnBlockUnit.Generated.h"

        CGameCtnBlockUnitInfo*  GetUnitInfo         () const    { return m_pBlockUnitInfo; }

        uint3                   GetPosition         () const;

    private:
        CGameCtnBlock*          m_pBlock;
        CGameCtnBlockUnitInfo*  m_pBlockUnitInfo;
        Array < void* >         m_ClipInfos;
        void*                   m_pTopClipInfo;
        void*                   m_pBottomClipInfo;
        uint3                   m_Offset;
        uint                    m_uiPlacePylons;
        uint                    m_uiAcceptPylons;
    };

}
