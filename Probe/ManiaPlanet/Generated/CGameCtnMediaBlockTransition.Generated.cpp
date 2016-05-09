#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockTransition* CGameCtnMediaBlockTransition::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockTransition* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
