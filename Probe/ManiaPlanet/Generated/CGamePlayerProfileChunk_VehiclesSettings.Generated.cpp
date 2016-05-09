#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlayerProfileChunk_VehiclesSettings* CGamePlayerProfileChunk_VehiclesSettings::CreateInstance ()
    {
        return static_cast < CGamePlayerProfileChunk_VehiclesSettings* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
