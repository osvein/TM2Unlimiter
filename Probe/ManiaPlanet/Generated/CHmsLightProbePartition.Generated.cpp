#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsLightProbePartition* CHmsLightProbePartition::CreateInstance ()
    {
        return static_cast < CHmsLightProbePartition* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
