#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileI18n* CPlugFileI18n::CreateInstance ()
    {
        return static_cast < CPlugFileI18n* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
