#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockFxBlurMotion* CGameCtnMediaBlockFxBlurMotion::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockFxBlurMotion* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
