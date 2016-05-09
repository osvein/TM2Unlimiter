#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamInteger* CMwParamInteger::CreateInstance ()
    {
        return static_cast < CMwParamInteger* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
