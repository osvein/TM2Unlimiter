#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisualIndexed* CPlugVisualIndexed::CreateInstance ()
    {
        return static_cast < CPlugVisualIndexed* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
