#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncShader* CFuncShader::CreateInstance ()
    {
        return static_cast < CFuncShader* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
