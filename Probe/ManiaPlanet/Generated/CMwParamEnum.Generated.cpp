#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamEnum* CMwParamEnum::CreateInstance ()
    {
        return static_cast < CMwParamEnum* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
