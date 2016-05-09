#include "StdInc.h"

namespace ManiaPlanet
{

    GxLightNotAmbient* GxLightNotAmbient::CreateInstance ()
    {
        return static_cast < GxLightNotAmbient* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
