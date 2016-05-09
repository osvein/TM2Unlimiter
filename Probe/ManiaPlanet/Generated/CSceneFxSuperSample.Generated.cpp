#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneFxSuperSample* CSceneFxSuperSample::CreateInstance ()
    {
        return static_cast < CSceneFxSuperSample* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
