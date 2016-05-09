#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugBodyGraph* CPlugBodyGraph::CreateInstance ()
    {
        return static_cast < CPlugBodyGraph* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
