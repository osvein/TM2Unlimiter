#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneMgrMapColoring* CSceneMgrMapColoring::CreateInstance ()
    {
        return static_cast < CSceneMgrMapColoring* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
