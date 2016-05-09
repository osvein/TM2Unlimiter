#include "StdInc.h"

namespace ManiaPlanet
{

    CNetMasterServerUptoDateCheck* CNetMasterServerUptoDateCheck::CreateInstance ()
    {
        return static_cast < CNetMasterServerUptoDateCheck* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
