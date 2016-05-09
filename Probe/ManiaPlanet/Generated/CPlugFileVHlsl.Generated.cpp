#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileVHlsl* CPlugFileVHlsl::CreateInstance ()
    {
        return static_cast < CPlugFileVHlsl* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
