#include "StdInc.h"

namespace ManiaPlanet
{

    CGameNetFormTunnel* CGameNetFormTunnel::CreateInstance ()
    {
        return static_cast < CGameNetFormTunnel* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
