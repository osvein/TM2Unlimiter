#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileSndGen* CPlugFileSndGen::CreateInstance ()
    {
        return static_cast < CPlugFileSndGen* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
