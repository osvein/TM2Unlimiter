#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnEdControlCamPath* CGameCtnEdControlCamPath::CreateInstance ()
    {
        return static_cast < CGameCtnEdControlCamPath* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
