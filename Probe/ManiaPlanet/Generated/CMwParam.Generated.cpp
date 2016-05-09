#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParam* CMwParam::CreateInstance ()
    {
        return static_cast < CMwParam* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
