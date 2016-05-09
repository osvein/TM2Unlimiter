#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugBitmapAtlas* CPlugBitmapAtlas::CreateInstance ()
    {
        return static_cast < CPlugBitmapAtlas* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
