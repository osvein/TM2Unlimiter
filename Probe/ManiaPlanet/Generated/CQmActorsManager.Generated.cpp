#include "StdInc.h"

namespace ManiaPlanet
{

    CQmActorsManager* CQmActorsManager::CreateInstance ()
    {
        return static_cast < CQmActorsManager* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
