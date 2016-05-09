#include "StdInc.h"

namespace ManiaPlanet
{

    CAudioPortNull* CAudioPortNull::CreateInstance ()
    {
        return static_cast < CAudioPortNull* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
