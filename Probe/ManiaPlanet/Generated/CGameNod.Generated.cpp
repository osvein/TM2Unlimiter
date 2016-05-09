#include "StdInc.h"

namespace ManiaPlanet
{

    CGameNod* CGameNod::CreateInstance ()
    {
        return static_cast < CGameNod* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
