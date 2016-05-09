#include "StdInc.h"

namespace ManiaPlanet
{

    CMotionManager* CMotionManager::CreateInstance ()
    {
        return static_cast < CMotionManager* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
