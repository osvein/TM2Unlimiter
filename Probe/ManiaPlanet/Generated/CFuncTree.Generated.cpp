#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncTree* CFuncTree::CreateInstance ()
    {
        return static_cast < CFuncTree* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
