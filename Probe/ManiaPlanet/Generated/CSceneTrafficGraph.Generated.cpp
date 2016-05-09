#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneTrafficGraph* CSceneTrafficGraph::CreateInstance ()
    {
        return static_cast < CSceneTrafficGraph* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
