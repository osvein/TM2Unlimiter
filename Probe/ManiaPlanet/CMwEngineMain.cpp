#include "StdInc.h"

namespace ManiaPlanet
{

    CMwEngineMain* CMwEngineMain::GetInstance ()
    {
        return *reinterpret_cast < CMwEngineMain** > ( Address::Inst.ppEngineMain );
    }

    CMwEngine* CMwEngineMain::GetEngine ( eEngine engine )
    {
        return m_Engines [ engine ];
    }

}
