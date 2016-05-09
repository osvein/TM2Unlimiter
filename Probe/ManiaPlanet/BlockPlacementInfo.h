#pragma once

namespace ManiaPlanet
{

    struct BlockPlacementInfo
    {
    public:
        CGameCtnBlockInfo*      m_pBlockInfo;
        uint3                   m_Pos;
        int                     m_iDir;
        int                     m_iSubVariant;
    };

}
