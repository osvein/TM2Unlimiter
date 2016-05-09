#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisualOctree* CPlugVisualOctree::CreateInstance ()
    {
        return static_cast < CPlugVisualOctree* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
