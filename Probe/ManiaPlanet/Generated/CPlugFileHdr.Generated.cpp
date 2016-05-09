#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileHdr* CPlugFileHdr::CreateInstance ()
    {
        return static_cast < CPlugFileHdr* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
