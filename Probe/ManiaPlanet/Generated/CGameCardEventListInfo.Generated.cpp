#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCardEventListInfo* CGameCardEventListInfo::CreateInstance ()
    {
        return static_cast < CGameCardEventListInfo* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
