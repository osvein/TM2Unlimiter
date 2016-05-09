#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneListener* CSceneListener::CreateInstance ()
    {
        return static_cast < CSceneListener* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
