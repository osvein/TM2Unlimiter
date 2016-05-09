#include "StdInc.h"

namespace ManiaPlanet
{

    CCtnMediaBlockUiTMSimpleEvtsDisplay_deprecated* CCtnMediaBlockUiTMSimpleEvtsDisplay_deprecated::CreateInstance ()
    {
        return static_cast < CCtnMediaBlockUiTMSimpleEvtsDisplay_deprecated* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
