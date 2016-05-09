#include "StdInc.h"

namespace ManiaPlanet
{

    CMotionShader* CMotionShader::CreateInstance ()
    {
        return static_cast < CMotionShader* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
