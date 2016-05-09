#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnBlockInfoClassic* CGameCtnBlockInfoClassic::CreateInstance ()
    {
        return static_cast < CGameCtnBlockInfoClassic* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
