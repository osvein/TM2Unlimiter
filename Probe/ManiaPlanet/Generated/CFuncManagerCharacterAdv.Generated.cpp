#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncManagerCharacterAdv* CFuncManagerCharacterAdv::CreateInstance ()
    {
        return static_cast < CFuncManagerCharacterAdv* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
