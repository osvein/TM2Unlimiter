#include "StdInc.h"

namespace ManiaPlanet
{

    CNetFormTimed* CNetFormTimed::CreateInstance ()
    {
        return static_cast < CNetFormTimed* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
