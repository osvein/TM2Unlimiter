#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneFxToneMapping* CSceneFxToneMapping::CreateInstance ()
    {
        return static_cast < CSceneFxToneMapping* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
