#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisualLines* CPlugVisualLines::CreateInstance ()
    {
        return static_cast < CPlugVisualLines* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
