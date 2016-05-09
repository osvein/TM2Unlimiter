#include "StdInc.h"

namespace ManiaPlanet
{

    GxFogBlender* GxFogBlender::CreateInstance ()
    {
        return static_cast < GxFogBlender* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
