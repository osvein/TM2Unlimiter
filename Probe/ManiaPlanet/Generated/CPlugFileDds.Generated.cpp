#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileDds* CPlugFileDds::CreateInstance ()
    {
        return static_cast < CPlugFileDds* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
