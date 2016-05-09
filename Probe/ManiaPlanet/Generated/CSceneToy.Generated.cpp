#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneToy* CSceneToy::CreateInstance ()
    {
        return static_cast < CSceneToy* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
