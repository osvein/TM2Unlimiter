#include "StdInc.h"

namespace ManiaPlanet
{

    CMwParamAction* CMwParamAction::CreateInstance ()
    {
        return static_cast < CMwParamAction* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
