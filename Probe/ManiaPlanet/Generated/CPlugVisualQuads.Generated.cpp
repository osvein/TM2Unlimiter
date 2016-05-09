#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisualQuads* CPlugVisualQuads::CreateInstance ()
    {
        return static_cast < CPlugVisualQuads* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
