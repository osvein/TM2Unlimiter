#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamRealRange* CMwParamRealRange::CreateInstance ()
    {
        return static_cast < CMwParamRealRange* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
