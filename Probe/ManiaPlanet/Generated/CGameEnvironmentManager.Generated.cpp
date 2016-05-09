#include "StdInc.h"

namespace ManiaPlanet
{

    CGameEnvironmentManager* CGameEnvironmentManager::CreateInstance ()
    {
        return static_cast < CGameEnvironmentManager* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
