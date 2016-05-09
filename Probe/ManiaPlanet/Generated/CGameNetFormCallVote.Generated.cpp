#include "StdInc.h"

namespace ManiaPlanet
{

    CGameNetFormCallVote* CGameNetFormCallVote::CreateInstance ()
    {
        return static_cast < CGameNetFormCallVote* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
