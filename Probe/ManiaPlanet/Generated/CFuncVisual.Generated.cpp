#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncVisual* CFuncVisual::CreateInstance ()
    {
        return static_cast < CFuncVisual* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
