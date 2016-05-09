#include "StdInc.h"

namespace ManiaPlanet
{

    CPlug* CPlug::CreateInstance ()
    {
        return static_cast < CPlug* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
