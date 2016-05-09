#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFont* CPlugFont::CreateInstance ()
    {
        return static_cast < CPlugFont* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
