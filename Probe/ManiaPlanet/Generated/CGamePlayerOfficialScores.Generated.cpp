#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlayerOfficialScores* CGamePlayerOfficialScores::CreateInstance ()
    {
        return static_cast < CGamePlayerOfficialScores* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
