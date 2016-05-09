#include "StdInc.h"

namespace ManiaPlanet
{

    CInputPortDx8* CInputPortDx8::CreateInstance ()
    {
        return static_cast < CInputPortDx8* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
