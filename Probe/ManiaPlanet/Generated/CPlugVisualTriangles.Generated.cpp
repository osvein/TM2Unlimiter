#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisualTriangles* CPlugVisualTriangles::CreateInstance ()
    {
        return static_cast < CPlugVisualTriangles* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
