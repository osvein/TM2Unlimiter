#include "StdInc.h"

namespace ManiaPlanet
{

    CNodSystem* CNodSystem::CreateInstance ()
    {
        return static_cast < CNodSystem* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
