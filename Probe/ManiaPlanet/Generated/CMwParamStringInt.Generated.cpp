#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamStringInt* CMwParamStringInt::CreateInstance ()
    {
        return static_cast < CMwParamStringInt* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
