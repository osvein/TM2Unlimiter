#include "StdInc.h"

namespace ManiaPlanet
{

    GxFog* GxFog::CreateInstance ()
    {
        return static_cast < GxFog* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
