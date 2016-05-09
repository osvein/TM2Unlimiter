#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneFxMgr* CSceneFxMgr::CreateInstance ()
    {
        return static_cast < CSceneFxMgr* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
