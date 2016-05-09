#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamClass* CMwParamClass::CreateInstance ()
    {
        return static_cast < CMwParamClass* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
