#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncKeysVisual* CFuncKeysVisual::CreateInstance ()
    {
        return static_cast < CFuncKeysVisual* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
