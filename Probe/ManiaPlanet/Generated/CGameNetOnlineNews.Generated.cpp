#include "StdInc.h"

namespace ManiaPlanet
{

    CGameNetOnlineNews* CGameNetOnlineNews::CreateInstance ()
    {
        return static_cast < CGameNetOnlineNews* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
