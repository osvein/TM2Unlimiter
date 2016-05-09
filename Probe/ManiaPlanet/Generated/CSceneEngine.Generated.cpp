#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneEngine* CSceneEngine::CreateInstance ()
    {
        return static_cast < CSceneEngine* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
