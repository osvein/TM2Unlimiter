#include "StdInc.h"

namespace ManiaPlanet
{

    CGameNetFormPlayground* CGameNetFormPlayground::CreateInstance ()
    {
        return static_cast < CGameNetFormPlayground* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
