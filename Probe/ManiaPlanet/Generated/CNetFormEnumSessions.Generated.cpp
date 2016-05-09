#include "StdInc.h"

namespace ManiaPlanet
{

    CNetFormEnumSessions* CNetFormEnumSessions::CreateInstance ()
    {
        return static_cast < CNetFormEnumSessions* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
