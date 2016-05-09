#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFxWindOnTreeSprite* CPlugFxWindOnTreeSprite::CreateInstance ()
    {
        return static_cast < CPlugFxWindOnTreeSprite* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
