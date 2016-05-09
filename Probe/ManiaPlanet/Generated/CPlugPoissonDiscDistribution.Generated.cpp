#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugPoissonDiscDistribution* CPlugPoissonDiscDistribution::CreateInstance ()
    {
        return static_cast < CPlugPoissonDiscDistribution* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
