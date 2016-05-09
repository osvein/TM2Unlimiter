#include "StdInc.h"

namespace ManiaPlanet
{

    CGameNetFormTimeSync* CGameNetFormTimeSync::CreateInstance ()
    {
        return static_cast < CGameNetFormTimeSync* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
