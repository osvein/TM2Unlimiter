#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamBool* CMwParamBool::CreateInstance ()
    {
        return static_cast < CMwParamBool* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
