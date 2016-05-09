#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisualCelEdge* CPlugVisualCelEdge::CreateInstance ()
    {
        return static_cast < CPlugVisualCelEdge* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
