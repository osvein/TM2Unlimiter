#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockUiSimpleEvtsDisplay_deprecated* CGameCtnMediaBlockUiSimpleEvtsDisplay_deprecated::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockUiSimpleEvtsDisplay_deprecated* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
