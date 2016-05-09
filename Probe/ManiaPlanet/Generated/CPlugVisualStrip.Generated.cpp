#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisualStrip* CPlugVisualStrip::CreateInstance ()
    {
        return static_cast < CPlugVisualStrip* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
