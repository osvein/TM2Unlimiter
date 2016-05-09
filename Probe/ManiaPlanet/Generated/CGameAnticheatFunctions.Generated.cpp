#include "StdInc.h"

namespace ManiaPlanet
{

    CGameAnticheatFunctions* CGameAnticheatFunctions::CreateInstance ()
    {
        return static_cast < CGameAnticheatFunctions* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
