#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsLightMapParam* CHmsLightMapParam::CreateInstance ()
    {
        return static_cast < CHmsLightMapParam* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
