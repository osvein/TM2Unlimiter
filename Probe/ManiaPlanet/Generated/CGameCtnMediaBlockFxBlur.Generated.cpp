#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockFxBlur* CGameCtnMediaBlockFxBlur::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockFxBlur* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
