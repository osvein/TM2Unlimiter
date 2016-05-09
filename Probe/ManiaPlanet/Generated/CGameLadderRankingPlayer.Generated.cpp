#include "StdInc.h"

namespace ManiaPlanet
{

    CGameLadderRankingPlayer* CGameLadderRankingPlayer::CreateInstance ()
    {
        return static_cast < CGameLadderRankingPlayer* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
