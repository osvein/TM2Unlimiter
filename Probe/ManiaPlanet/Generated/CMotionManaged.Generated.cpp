#include "StdInc.h"

namespace ManiaPlanet
{

    CMotionManaged* CMotionManaged::CreateInstance ()
    {
        return static_cast < CMotionManaged* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
