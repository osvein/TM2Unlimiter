#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnBlockInfoFrontier* CGameCtnBlockInfoFrontier::CreateInstance ()
    {
        return static_cast < CGameCtnBlockInfoFrontier* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
