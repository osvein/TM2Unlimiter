#include "StdInc.h"

namespace ManiaPlanet
{

    CTrackManiaRace1P* CTrackManiaRace1P::CreateInstance ()
    {
        return static_cast < CTrackManiaRace1P* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
