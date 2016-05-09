#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileWebP* CPlugFileWebP::CreateInstance ()
    {
        return static_cast < CPlugFileWebP* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
