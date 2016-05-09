#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisualIndexedTriangles* CPlugVisualIndexedTriangles::CreateInstance ()
    {
        return static_cast < CPlugVisualIndexedTriangles* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
