#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsMgrVisDynaDecal2d* CHmsMgrVisDynaDecal2d::CreateInstance ()
    {
        return static_cast < CHmsMgrVisDynaDecal2d* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
