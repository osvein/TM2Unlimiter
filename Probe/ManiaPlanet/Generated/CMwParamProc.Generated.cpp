#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamProc* CMwParamProc::CreateInstance ()
    {
        return static_cast < CMwParamProc* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
