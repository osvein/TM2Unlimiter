#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileFont* CPlugFileFont::CreateInstance ()
    {
        return static_cast < CPlugFileFont* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
