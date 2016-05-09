#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCampaignPlayerScores* CGameCampaignPlayerScores::CreateInstance ()
    {
        return static_cast < CGameCampaignPlayerScores* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
