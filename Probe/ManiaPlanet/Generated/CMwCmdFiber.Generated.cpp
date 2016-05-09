#include "StdInc.h"

namespace ManiaPlanet
{

    CMwCmdFiber* CMwCmdFiber::CreateInstance ()
    {
        return static_cast < CMwCmdFiber* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
