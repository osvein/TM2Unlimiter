#pragma once

namespace ManiaPlanet
{

    class CHmsItem;

    class CSceneMobil : public CSceneObject
    {
    public:
        #include "Generated/CSceneMobil.Generated.h"

    private:
        CHmsItem*       m_pHmsItem;
        void*           m_pModel;
        void*           m_pMotionSolid;
        List < void* >  m_Links;
    };

}
