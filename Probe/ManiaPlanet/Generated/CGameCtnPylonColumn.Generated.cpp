#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnPylonColumn* CGameCtnPylonColumn::CreateInstance ()
    {
        return static_cast < CGameCtnPylonColumn* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
