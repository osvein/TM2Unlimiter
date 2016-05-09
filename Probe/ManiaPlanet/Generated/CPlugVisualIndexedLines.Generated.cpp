#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisualIndexedLines* CPlugVisualIndexedLines::CreateInstance ()
    {
        return static_cast < CPlugVisualIndexedLines* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
