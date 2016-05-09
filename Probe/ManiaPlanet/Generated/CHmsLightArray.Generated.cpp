#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsLightArray* CHmsLightArray::CreateInstance ()
    {
        return static_cast < CHmsLightArray* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
