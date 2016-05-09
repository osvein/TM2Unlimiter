#include "StdInc.h"

namespace ManiaPlanet
{

    CGameGeneralScores* CGameGeneralScores::CreateInstance ()
    {
        return static_cast < CGameGeneralScores* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
