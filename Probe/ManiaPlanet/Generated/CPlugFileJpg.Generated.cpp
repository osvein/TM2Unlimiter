#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileJpg* CPlugFileJpg::CreateInstance ()
    {
        return static_cast < CPlugFileJpg* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
