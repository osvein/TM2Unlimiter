#include "StdInc.h"

namespace ManiaPlanet
{

    CControlEffect* CControlEffect::CreateInstance ()
    {
        return static_cast < CControlEffect* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
