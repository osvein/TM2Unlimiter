#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugPointsInSphereOpt* CPlugPointsInSphereOpt::CreateInstance ()
    {
        return static_cast < CPlugPointsInSphereOpt* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
