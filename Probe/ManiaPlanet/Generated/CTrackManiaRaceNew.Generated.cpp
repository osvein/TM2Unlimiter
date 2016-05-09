#include "StdInc.h"

namespace ManiaPlanet
{

    CTrackManiaRaceNew* CTrackManiaRaceNew::CreateInstance ()
    {
        return static_cast < CTrackManiaRaceNew* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
