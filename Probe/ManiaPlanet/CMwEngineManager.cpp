#include "StdInc.h"

namespace ManiaPlanet
{

    CMwClassInfo* CMwEngineManager::GetClassInfo ( uint uiClassID ) const
    {
        return GetEngineInfo ( (CMwEngineInfo::eEngine)(uiClassID >> 24) )->GetClassInfo ( uiClassID );
    }

}
