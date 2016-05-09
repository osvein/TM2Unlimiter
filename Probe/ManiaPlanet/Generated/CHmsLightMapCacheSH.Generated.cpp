#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsLightMapCacheSH* CHmsLightMapCacheSH::CreateInstance ()
    {
        return static_cast < CHmsLightMapCacheSH* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
