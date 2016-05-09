#include "StdInc.h"

namespace ManiaPlanet
{

    CGameManialinkPlayerList* CGameManialinkPlayerList::CreateInstance ()
    {
        return static_cast < CGameManialinkPlayerList* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
