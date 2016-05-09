#include "StdInc.h"

namespace ManiaPlanet
{

    CMotionDayTime* CMotionDayTime::CreateInstance ()
    {
        return static_cast < CMotionDayTime* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
