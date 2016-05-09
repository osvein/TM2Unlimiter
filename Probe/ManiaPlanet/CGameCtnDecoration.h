#pragma once

namespace ManiaPlanet
{

    class CGameCtnDecoration : public CGameCtnCollector
    {
    public:
        #include "Generated/CGameCtnDecoration.Generated.h"

    private:
        uint                        m_field70;
        uint                        m_field74;
        CGameCtnDecorationSize*     m_pDecoSize;
        void*                       m_pDecoAudio;
        void*                       m_pDecoMood;
        void*                       m_pDecoratorSolidWarp;
        void*                       m_pTerrainModifierBase;
        void*                       m_pTerrainModifierCovered;
    };

}
