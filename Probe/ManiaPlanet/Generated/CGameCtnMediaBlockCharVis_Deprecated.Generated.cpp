#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockCharVis_Deprecated* CGameCtnMediaBlockCharVis_Deprecated::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockCharVis_Deprecated* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
