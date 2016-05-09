#include "StdInc.h"

namespace ManiaPlanet
{

    CTrackManiaControlCard* CTrackManiaControlCard::CreateInstance ()
    {
        return static_cast < CTrackManiaControlCard* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
