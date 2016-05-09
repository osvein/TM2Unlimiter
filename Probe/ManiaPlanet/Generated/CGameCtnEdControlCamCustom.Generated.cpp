#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnEdControlCamCustom* CGameCtnEdControlCamCustom::CreateInstance ()
    {
        return static_cast < CGameCtnEdControlCamCustom* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
