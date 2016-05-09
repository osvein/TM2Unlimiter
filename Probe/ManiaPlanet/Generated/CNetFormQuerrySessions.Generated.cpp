#include "StdInc.h"

namespace ManiaPlanet
{

    CNetFormQuerrySessions* CNetFormQuerrySessions::CreateInstance ()
    {
        return static_cast < CNetFormQuerrySessions* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
