#include "StdInc.h"

namespace ManiaPlanet
{

    CMwCmdBlock* CMwCmdBlock::CreateInstance ()
    {
        return static_cast < CMwCmdBlock* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
