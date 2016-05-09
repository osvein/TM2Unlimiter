#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnBlockInfoTransition* CGameCtnBlockInfoTransition::CreateInstance ()
    {
        return static_cast < CGameCtnBlockInfoTransition* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
