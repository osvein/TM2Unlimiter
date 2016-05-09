#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugAudio* CPlugAudio::CreateInstance ()
    {
        return static_cast < CPlugAudio* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
