#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockCameraEffect* CGameCtnMediaBlockCameraEffect::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockCameraEffect* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
