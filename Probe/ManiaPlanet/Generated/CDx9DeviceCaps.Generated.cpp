#include "StdInc.h"

namespace ManiaPlanet
{

    CDx9DeviceCaps* CDx9DeviceCaps::CreateInstance ()
    {
        return static_cast < CDx9DeviceCaps* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
