#pragma once

namespace ManiaPlanet
{

    class CSystemEngine;

    class CMwEngineMain : public CMwEngine
    {
    public:
        static CMwEngineMain*   GetInstance             ();

        CMwEngine*              GetEngine               ( eEngine engine );

        CSystemEngine*          GetSystemEngine         ()      { return (CSystemEngine *)m_Engines [ ENGINE_SYSTEM ]; }

    private:
        uint                    m_field14;
        Array < CMwEngine* >    m_Engines;
        List < void* >          m_field20;
    };

}
