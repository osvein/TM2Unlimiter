#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlaygroundSpectating* CGamePlaygroundSpectating::CreateInstance ()
    {
        return static_cast < CGamePlaygroundSpectating* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
