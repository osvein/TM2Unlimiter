#include "StdInc.h"

namespace ManiaPlanet
{

    CHdrText* CHdrText::CreateInstance ()
    {
        return static_cast < CHdrText* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
