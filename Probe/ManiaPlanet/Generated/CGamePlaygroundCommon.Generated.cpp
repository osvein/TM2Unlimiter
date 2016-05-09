#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlaygroundCommon* CGamePlaygroundCommon::CreateInstance ()
    {
        return static_cast < CGamePlaygroundCommon* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
