#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncKeysSound* CFuncKeysSound::CreateInstance ()
    {
        return static_cast < CFuncKeysSound* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
