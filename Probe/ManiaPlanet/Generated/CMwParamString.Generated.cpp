#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamString* CMwParamString::CreateInstance ()
    {
        return static_cast < CMwParamString* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
