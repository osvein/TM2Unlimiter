#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneSolidVisModelHandle* CSceneSolidVisModelHandle::CreateInstance ()
    {
        return static_cast < CSceneSolidVisModelHandle* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
