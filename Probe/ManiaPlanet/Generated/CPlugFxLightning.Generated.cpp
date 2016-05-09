#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFxLightning* CPlugFxLightning::CreateInstance ()
    {
        return static_cast < CPlugFxLightning* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
