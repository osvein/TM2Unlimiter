#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneMood* CSceneMood::CreateInstance ()
    {
        return static_cast < CSceneMood* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
