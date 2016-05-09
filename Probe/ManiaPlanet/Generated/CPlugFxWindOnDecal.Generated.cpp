#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFxWindOnDecal* CPlugFxWindOnDecal::CreateInstance ()
    {
        return static_cast < CPlugFxWindOnDecal* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
