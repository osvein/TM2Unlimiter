#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisualIndexedStrip* CPlugVisualIndexedStrip::CreateInstance ()
    {
        return static_cast < CPlugVisualIndexedStrip* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
