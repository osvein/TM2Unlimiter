#include "StdInc.h"

namespace ManiaPlanet
{

    CMwEngine* CMwEngine::CreateInstance ()
    {
        return static_cast < CMwEngine* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
