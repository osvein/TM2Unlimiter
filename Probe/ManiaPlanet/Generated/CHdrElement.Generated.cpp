#include "StdInc.h"

namespace ManiaPlanet
{

    CHdrElement* CHdrElement::CreateInstance ()
    {
        return static_cast < CHdrElement* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
