#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnEdControlCam* CGameCtnEdControlCam::CreateInstance ()
    {
        return static_cast < CGameCtnEdControlCam* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
