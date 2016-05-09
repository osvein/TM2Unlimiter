#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnBlockInfoRectAsym* CGameCtnBlockInfoRectAsym::CreateInstance ()
    {
        return static_cast < CGameCtnBlockInfoRectAsym* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
