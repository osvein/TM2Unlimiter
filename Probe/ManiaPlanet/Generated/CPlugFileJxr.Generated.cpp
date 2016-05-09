#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileJxr* CPlugFileJxr::CreateInstance ()
    {
        return static_cast < CPlugFileJxr* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
