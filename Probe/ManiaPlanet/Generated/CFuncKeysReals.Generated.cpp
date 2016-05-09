#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncKeysReals* CFuncKeysReals::CreateInstance ()
    {
        return static_cast < CFuncKeysReals* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
