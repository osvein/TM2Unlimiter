#include "StdInc.h"

namespace ManiaPlanet
{

    CGameNetOnlineNewsReply* CGameNetOnlineNewsReply::CreateInstance ()
    {
        return static_cast < CGameNetOnlineNewsReply* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
