#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsFogPlane* CHmsFogPlane::CreateInstance ()
    {
        return static_cast < CHmsFogPlane* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
