#include "StdInc.h"

namespace ManiaPlanet
{

    CNetUPnP* CNetUPnP::CreateInstance ()
    {
        return static_cast < CNetUPnP* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
