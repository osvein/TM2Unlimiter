#include "StdInc.h"

namespace ManiaPlanet
{

    CTrackManiaGameTerminal* CTrackManiaGameTerminal::CreateInstance ()
    {
        return static_cast < CTrackManiaGameTerminal* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
