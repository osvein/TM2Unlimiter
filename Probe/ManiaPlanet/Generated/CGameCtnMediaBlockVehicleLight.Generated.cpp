#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockVehicleLight* CGameCtnMediaBlockVehicleLight::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockVehicleLight* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
