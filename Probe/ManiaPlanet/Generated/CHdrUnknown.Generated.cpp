#include "StdInc.h"

namespace ManiaPlanet
{

    CHdrUnknown* CHdrUnknown::CreateInstance ()
    {
        return static_cast < CHdrUnknown* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
