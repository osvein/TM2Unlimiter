#include "StdInc.h"

namespace ManiaPlanet
{

    CMotion* CMotion::CreateInstance ()
    {
        return static_cast < CMotion* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
