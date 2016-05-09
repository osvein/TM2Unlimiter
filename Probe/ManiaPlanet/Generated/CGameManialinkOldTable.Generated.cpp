#include "StdInc.h"

namespace ManiaPlanet
{

    CGameManialinkOldTable* CGameManialinkOldTable::CreateInstance ()
    {
        return static_cast < CGameManialinkOldTable* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
