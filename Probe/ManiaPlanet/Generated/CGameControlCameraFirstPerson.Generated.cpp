#include "StdInc.h"

namespace ManiaPlanet
{

    CGameControlCameraFirstPerson* CGameControlCameraFirstPerson::CreateInstance ()
    {
        return static_cast < CGameControlCameraFirstPerson* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
