#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockEvent_deprecated* CGameCtnMediaBlockEvent_deprecated::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockEvent_deprecated* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
