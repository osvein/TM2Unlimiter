#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamNaturalRange* CMwParamNaturalRange::CreateInstance ()
    {
        return static_cast < CMwParamNaturalRange* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
