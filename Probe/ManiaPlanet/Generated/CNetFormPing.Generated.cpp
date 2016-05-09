#include "StdInc.h"

namespace ManiaPlanet
{

    CNetFormPing* CNetFormPing::CreateInstance ()
    {
        return static_cast < CNetFormPing* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
