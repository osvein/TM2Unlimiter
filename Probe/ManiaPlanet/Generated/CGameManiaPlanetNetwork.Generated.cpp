#include "StdInc.h"

namespace ManiaPlanet
{

    CGameManiaPlanetNetwork* CGameManiaPlanetNetwork::CreateInstance ()
    {
        return static_cast < CGameManiaPlanetNetwork* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
