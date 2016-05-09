#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnBlockInfoFlat* CGameCtnBlockInfoFlat::CreateInstance ()
    {
        return static_cast < CGameCtnBlockInfoFlat* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
