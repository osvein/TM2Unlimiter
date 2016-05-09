#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneToyDisplayHistogram* CSceneToyDisplayHistogram::CreateInstance ()
    {
        return static_cast < CSceneToyDisplayHistogram* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
