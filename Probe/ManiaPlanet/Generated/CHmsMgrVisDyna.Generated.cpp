#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsMgrVisDyna* CHmsMgrVisDyna::CreateInstance ()
    {
        return static_cast < CHmsMgrVisDyna* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
