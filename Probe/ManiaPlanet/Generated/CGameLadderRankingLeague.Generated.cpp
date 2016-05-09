#include "StdInc.h"

namespace ManiaPlanet
{

    CGameLadderRankingLeague* CGameLadderRankingLeague::CreateInstance ()
    {
        return static_cast < CGameLadderRankingLeague* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
