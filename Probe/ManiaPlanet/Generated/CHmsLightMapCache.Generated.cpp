#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsLightMapCache* CHmsLightMapCache::CreateInstance ()
    {
        return static_cast < CHmsLightMapCache* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
