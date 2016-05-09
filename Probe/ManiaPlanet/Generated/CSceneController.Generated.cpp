#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneController* CSceneController::CreateInstance ()
    {
        return static_cast < CSceneController* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
