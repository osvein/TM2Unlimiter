#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugShaderSprite* CPlugShaderSprite::CreateInstance ()
    {
        return static_cast < CPlugShaderSprite* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
