#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCampaignsScoresManager* CGameCampaignsScoresManager::CreateInstance ()
    {
        return static_cast < CGameCampaignsScoresManager* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
