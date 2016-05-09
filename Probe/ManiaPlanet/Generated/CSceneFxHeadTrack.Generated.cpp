#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneFxHeadTrack* CSceneFxHeadTrack::CreateInstance ()
    {
        return static_cast < CSceneFxHeadTrack* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
