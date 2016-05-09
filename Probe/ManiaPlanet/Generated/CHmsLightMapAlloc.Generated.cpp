#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsLightMapAlloc* CHmsLightMapAlloc::CreateInstance ()
    {
        return static_cast < CHmsLightMapAlloc* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
