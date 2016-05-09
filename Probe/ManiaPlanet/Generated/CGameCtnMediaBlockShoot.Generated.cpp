#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockShoot* CGameCtnMediaBlockShoot::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockShoot* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
