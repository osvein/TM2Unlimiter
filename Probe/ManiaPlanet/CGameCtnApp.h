#pragma once

namespace ManiaPlanet
{

    class CGameCtnApp : public CGameApp
    {
    public:
        #include "Generated/CGameCtnApp.Generated.h"

    private:
        uint                m_field1C8;
        uint                m_field1CC;
        CGameCtnEditor*     m_pEditor;
        void*               m_pSwitcher;
        CGameCtnChallenge*  m_pChallenge;
    };

}
