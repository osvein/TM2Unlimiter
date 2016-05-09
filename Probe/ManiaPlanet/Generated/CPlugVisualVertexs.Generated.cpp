#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisualVertexs* CPlugVisualVertexs::CreateInstance ()
    {
        return static_cast < CPlugVisualVertexs* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
