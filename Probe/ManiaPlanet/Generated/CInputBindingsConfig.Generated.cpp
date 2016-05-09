#include "StdInc.h"

namespace ManiaPlanet
{

    CInputBindingsConfig* CInputBindingsConfig::CreateInstance ()
    {
        return static_cast < CInputBindingsConfig* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
