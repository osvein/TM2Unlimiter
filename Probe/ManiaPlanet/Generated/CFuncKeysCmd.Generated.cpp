#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncKeysCmd* CFuncKeysCmd::CreateInstance ()
    {
        return static_cast < CFuncKeysCmd* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
