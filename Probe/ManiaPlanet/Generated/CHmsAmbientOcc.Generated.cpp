#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsAmbientOcc* CHmsAmbientOcc::CreateInstance ()
    {
        return static_cast < CHmsAmbientOcc* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
