#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneMobilSolid* CSceneMobilSolid::CreateInstance ()
    {
        return static_cast < CSceneMobilSolid* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
