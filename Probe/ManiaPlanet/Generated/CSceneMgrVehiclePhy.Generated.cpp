#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneMgrVehiclePhy* CSceneMgrVehiclePhy::CreateInstance ()
    {
        return static_cast < CSceneMgrVehiclePhy* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
