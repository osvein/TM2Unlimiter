#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFilePHlsl* CPlugFilePHlsl::CreateInstance ()
    {
        return static_cast < CPlugFilePHlsl* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
