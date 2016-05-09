#include "StdInc.h"

namespace ManiaPlanet
{

    CMwCmdContainer* CMwCmdContainer::CreateInstance ()
    {
        return static_cast < CMwCmdContainer* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
