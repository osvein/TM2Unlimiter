#include "StdInc.h"

namespace ManiaPlanet
{

    CMwCmd* CMwCmd::CreateInstance ()
    {
        return static_cast < CMwCmd* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
