#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsMgrVisEnvMap* CHmsMgrVisEnvMap::CreateInstance ()
    {
        return static_cast < CHmsMgrVisEnvMap* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
