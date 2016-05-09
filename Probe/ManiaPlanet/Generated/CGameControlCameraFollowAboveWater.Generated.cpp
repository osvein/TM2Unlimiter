#include "StdInc.h"

namespace ManiaPlanet
{

    CGameControlCameraFollowAboveWater* CGameControlCameraFollowAboveWater::CreateInstance ()
    {
        return static_cast < CGameControlCameraFollowAboveWater* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
