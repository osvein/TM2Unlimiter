#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsLightMap* CHmsLightMap::CreateInstance ()
    {
        return static_cast < CHmsLightMap* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
