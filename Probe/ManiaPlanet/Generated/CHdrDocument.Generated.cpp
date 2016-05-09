#include "StdInc.h"

namespace ManiaPlanet
{

    CHdrDocument* CHdrDocument::CreateInstance ()
    {
        return static_cast < CHdrDocument* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
