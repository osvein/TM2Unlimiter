#include "StdInc.h"

namespace ManiaPlanet
{

    _0A010000* _0A010000::CreateInstance ()
    {
        return static_cast < _0A010000* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
