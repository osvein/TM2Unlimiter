#include "StdInc.h"

namespace ManiaPlanet
{

    CGameLadderScores* CGameLadderScores::CreateInstance ()
    {
        return static_cast < CGameLadderScores* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
