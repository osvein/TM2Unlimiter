#include "StdInc.h"

namespace ManiaPlanet
{

    CSystemNodWrapper* CSystemNodWrapper::CreateInstance ()
    {
        return static_cast < CSystemNodWrapper* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
