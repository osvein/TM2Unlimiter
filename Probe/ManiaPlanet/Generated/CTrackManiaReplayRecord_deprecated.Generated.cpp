#include "StdInc.h"

namespace ManiaPlanet
{

    CTrackManiaReplayRecord_deprecated* CTrackManiaReplayRecord_deprecated::CreateInstance ()
    {
        return static_cast < CTrackManiaReplayRecord_deprecated* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
