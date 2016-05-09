#include "StdInc.h"

namespace ManiaPlanet
{

    CGameEngine* CGameEngine::CreateInstance ()
    {
        return static_cast < CGameEngine* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
