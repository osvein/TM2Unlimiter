#include "StdInc.h"

namespace ManiaPlanet
{

    CSystemFidsDrive* CSystemFidsDrive::CreateInstance ()
    {
        return static_cast < CSystemFidsDrive* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
