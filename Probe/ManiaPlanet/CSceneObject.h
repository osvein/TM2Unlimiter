#pragma once

namespace ManiaPlanet
{

    class CSceneObject : public CMwNod
    {
    public:
        #include "Generated/CSceneObject.Generated.h"

    private:
        void*           m_pScene;
        Id              m_Id;
        void*           m_pParentCollector;
        void*           m_pMotion;
        uint            m_field28;
        uint            m_field2C;
    };

}
