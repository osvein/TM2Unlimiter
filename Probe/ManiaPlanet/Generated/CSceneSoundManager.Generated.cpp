#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneSoundManager* CSceneSoundManager::CreateInstance ()
    {
        return static_cast < CSceneSoundManager* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
