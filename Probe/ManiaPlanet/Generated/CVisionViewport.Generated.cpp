#include "StdInc.h"

namespace ManiaPlanet
{

    CVisionViewport* CVisionViewport::CreateInstance ()
    {
        return static_cast < CVisionViewport* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
