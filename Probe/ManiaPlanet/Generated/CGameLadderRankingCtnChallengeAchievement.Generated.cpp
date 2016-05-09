#include "StdInc.h"

namespace ManiaPlanet
{

    CGameLadderRankingCtnChallengeAchievement* CGameLadderRankingCtnChallengeAchievement::CreateInstance ()
    {
        return static_cast < CGameLadderRankingCtnChallengeAchievement* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
