#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamIntegerRange* CMwParamIntegerRange::CreateInstance ()
    {
        return static_cast < CMwParamIntegerRange* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
