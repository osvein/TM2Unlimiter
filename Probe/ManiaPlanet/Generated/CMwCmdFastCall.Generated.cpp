#include "StdInc.h"

namespace ManiaPlanet
{

    CMwCmdFastCall* CMwCmdFastCall::CreateInstance ()
    {
        return static_cast < CMwCmdFastCall* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
