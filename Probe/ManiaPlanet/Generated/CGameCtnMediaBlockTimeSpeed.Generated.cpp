#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockTimeSpeed* CGameCtnMediaBlockTimeSpeed::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockTimeSpeed* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
