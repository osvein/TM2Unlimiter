#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnBlockInfoSlope* CGameCtnBlockInfoSlope::CreateInstance ()
    {
        return static_cast < CGameCtnBlockInfoSlope* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
