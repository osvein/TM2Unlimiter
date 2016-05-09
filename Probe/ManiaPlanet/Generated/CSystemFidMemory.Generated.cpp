#include "StdInc.h"

namespace ManiaPlanet
{

    CSystemFidMemory* CSystemFidMemory::CreateInstance ()
    {
        return static_cast < CSystemFidMemory* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
