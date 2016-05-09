#include "StdInc.h"

namespace ManiaPlanet
{

    CGameProcess* CGameProcess::CreateInstance ()
    {
        return static_cast < CGameProcess* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
