#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneFxCompo* CSceneFxCompo::CreateInstance ()
    {
        return static_cast < CSceneFxCompo* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
