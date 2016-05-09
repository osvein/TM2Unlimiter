#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisualPath* CPlugVisualPath::CreateInstance ()
    {
        return static_cast < CPlugVisualPath* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
