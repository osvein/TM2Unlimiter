#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileExr* CPlugFileExr::CreateInstance ()
    {
        return static_cast < CPlugFileExr* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
