#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneFxDepthOfField* CSceneFxDepthOfField::CreateInstance ()
    {
        return static_cast < CSceneFxDepthOfField* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
