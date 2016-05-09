#include "StdInc.h"

namespace ManiaPlanet
{

    CFunc* CFunc::CreateInstance ()
    {
        return static_cast < CFunc* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
