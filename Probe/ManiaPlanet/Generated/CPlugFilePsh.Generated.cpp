#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFilePsh* CPlugFilePsh::CreateInstance ()
    {
        return static_cast < CPlugFilePsh* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
