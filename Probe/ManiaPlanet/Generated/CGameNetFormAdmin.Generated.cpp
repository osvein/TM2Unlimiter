#include "StdInc.h"

namespace ManiaPlanet
{

    CGameNetFormAdmin* CGameNetFormAdmin::CreateInstance ()
    {
        return static_cast < CGameNetFormAdmin* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
