#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneToyDisplayGraph* CSceneToyDisplayGraph::CreateInstance ()
    {
        return static_cast < CSceneToyDisplayGraph* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
