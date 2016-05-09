#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCampaignScores* CGameCampaignScores::CreateInstance ()
    {
        return static_cast < CGameCampaignScores* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
