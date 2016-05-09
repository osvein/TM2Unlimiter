#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugDataTape* CPlugDataTape::CreateInstance ()
    {
        return static_cast < CPlugDataTape* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
