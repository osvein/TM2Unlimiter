#include "StdInc.h"

namespace ManiaPlanet
{

    CMwCmdFastCallUser* CMwCmdFastCallUser::CreateInstance ()
    {
        return static_cast < CMwCmdFastCallUser* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
