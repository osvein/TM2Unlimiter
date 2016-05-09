#include "StdInc.h"

namespace ManiaPlanet
{

    CSmArenaMediaClipPlayer* CSmArenaMediaClipPlayer::CreateInstance ()
    {
        return static_cast < CSmArenaMediaClipPlayer* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
