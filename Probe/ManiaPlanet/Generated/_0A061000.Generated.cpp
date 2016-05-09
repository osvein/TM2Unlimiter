#include "StdInc.h"

namespace ManiaPlanet
{

    _0A061000* _0A061000::CreateInstance ()
    {
        return static_cast < _0A061000* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
