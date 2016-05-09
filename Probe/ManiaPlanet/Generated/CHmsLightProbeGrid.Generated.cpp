#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsLightProbeGrid* CHmsLightProbeGrid::CreateInstance ()
    {
        return static_cast < CHmsLightProbeGrid* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
