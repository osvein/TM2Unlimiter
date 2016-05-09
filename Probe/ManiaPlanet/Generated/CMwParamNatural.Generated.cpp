#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamNatural* CMwParamNatural::CreateInstance ()
    {
        return static_cast < CMwParamNatural* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
