#include "StdInc.h"

namespace ManiaPlanet
{

    CGameManialinkMediaPlayer* CGameManialinkMediaPlayer::CreateInstance ()
    {
        return static_cast < CGameManialinkMediaPlayer* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
