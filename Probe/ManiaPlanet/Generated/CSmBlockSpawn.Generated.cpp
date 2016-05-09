#include "StdInc.h"

namespace ManiaPlanet
{

    CSmBlockSpawn* CSmBlockSpawn::CreateInstance ()
    {
        return static_cast < CSmBlockSpawn* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
