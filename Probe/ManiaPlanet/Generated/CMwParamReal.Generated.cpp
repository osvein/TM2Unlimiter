#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamReal* CMwParamReal::CreateInstance ()
    {
        return static_cast < CMwParamReal* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
