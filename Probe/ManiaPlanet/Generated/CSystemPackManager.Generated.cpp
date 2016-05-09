#include "StdInc.h"

namespace ManiaPlanet
{

    CSystemPackManager* CSystemPackManager::CreateInstance ()
    {
        return static_cast < CSystemPackManager* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
