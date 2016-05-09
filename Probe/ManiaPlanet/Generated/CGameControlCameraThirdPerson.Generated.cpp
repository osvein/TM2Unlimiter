#include "StdInc.h"

namespace ManiaPlanet
{

    CGameControlCameraThirdPerson* CGameControlCameraThirdPerson::CreateInstance ()
    {
        return static_cast < CGameControlCameraThirdPerson* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
