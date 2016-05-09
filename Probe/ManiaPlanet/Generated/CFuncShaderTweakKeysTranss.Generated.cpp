#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncShaderTweakKeysTranss* CFuncShaderTweakKeysTranss::CreateInstance ()
    {
        return static_cast < CFuncShaderTweakKeysTranss* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
