#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockTrails* CGameCtnMediaBlockTrails::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockTrails* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
