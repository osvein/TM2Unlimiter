#include "StdInc.h"

namespace ManiaPlanet
{

    CControlTimeLine* CControlTimeLine::CreateInstance ()
    {
        return static_cast < CControlTimeLine* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
