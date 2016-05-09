#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsLightMapMood* CHmsLightMapMood::CreateInstance ()
    {
        return static_cast < CHmsLightMapMood* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
