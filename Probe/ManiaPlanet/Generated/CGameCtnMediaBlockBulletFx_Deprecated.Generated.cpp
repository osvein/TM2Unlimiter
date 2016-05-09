#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockBulletFx_Deprecated* CGameCtnMediaBlockBulletFx_Deprecated::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockBulletFx_Deprecated* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
