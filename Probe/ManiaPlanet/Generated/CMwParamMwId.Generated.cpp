#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamMwId* CMwParamMwId::CreateInstance ()
    {
        return static_cast < CMwParamMwId* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
