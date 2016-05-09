#include "StdInc.h"

namespace ManiaPlanet
{

    CNetNod* CNetNod::CreateInstance ()
    {
        return static_cast < CNetNod* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
