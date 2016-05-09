#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileTga* CPlugFileTga::CreateInstance ()
    {
        return static_cast < CPlugFileTga* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
