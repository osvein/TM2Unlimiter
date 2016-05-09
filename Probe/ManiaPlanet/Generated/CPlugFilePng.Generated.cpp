#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFilePng* CPlugFilePng::CreateInstance ()
    {
        return static_cast < CPlugFilePng* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
