#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamStruct* CMwParamStruct::CreateInstance ()
    {
        return static_cast < CMwParamStruct* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
