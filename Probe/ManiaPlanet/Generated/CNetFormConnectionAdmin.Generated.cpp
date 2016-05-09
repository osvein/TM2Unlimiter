#include "StdInc.h"

namespace ManiaPlanet
{

    CNetFormConnectionAdmin* CNetFormConnectionAdmin::CreateInstance ()
    {
        return static_cast < CNetFormConnectionAdmin* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
