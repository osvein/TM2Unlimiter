#include "StdInc.h"

namespace ManiaPlanet
{

    CInputPortNull* CInputPortNull::CreateInstance ()
    {
        return static_cast < CInputPortNull* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
