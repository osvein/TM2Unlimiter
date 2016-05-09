#include "StdInc.h"

namespace ManiaPlanet
{

    CGameNetFormPlaygroundSync* CGameNetFormPlaygroundSync::CreateInstance ()
    {
        return static_cast < CGameNetFormPlaygroundSync* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
