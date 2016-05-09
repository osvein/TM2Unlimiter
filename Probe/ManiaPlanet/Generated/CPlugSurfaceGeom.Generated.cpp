#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugSurfaceGeom* CPlugSurfaceGeom::CreateInstance ()
    {
        return static_cast < CPlugSurfaceGeom* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
