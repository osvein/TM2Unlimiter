#include "StdInc.h"

namespace ManiaPlanet
{

    CCtnMediaBlockEventTrackMania_deprecated* CCtnMediaBlockEventTrackMania_deprecated::CreateInstance ()
    {
        return static_cast < CCtnMediaBlockEventTrackMania_deprecated* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
