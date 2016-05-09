#include "StdInc.h"

namespace ManiaPlanet
{

    CCurveInterface* CCurveInterface::CreateInstance ()
    {
        return static_cast < CCurveInterface* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
