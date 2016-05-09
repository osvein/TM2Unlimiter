#include "StdInc.h"

namespace ManiaPlanet
{

    CControlList* CControlList::CreateInstance ()
    {
        return static_cast < CControlList* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
