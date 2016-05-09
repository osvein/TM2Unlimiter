#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlaygroundBasic* CGamePlaygroundBasic::CreateInstance ()
    {
        return static_cast < CGamePlaygroundBasic* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
