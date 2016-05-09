#include "StdInc.h"

namespace ManiaPlanet
{

    CTrackManiaNetForm* CTrackManiaNetForm::CreateInstance ()
    {
        return static_cast < CTrackManiaNetForm* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
