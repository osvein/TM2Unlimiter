#include "StdInc.h"

namespace ManiaPlanet
{

    CGameNetFormBuddy* CGameNetFormBuddy::CreateInstance ()
    {
        return static_cast < CGameNetFormBuddy* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
