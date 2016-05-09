#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileModel3ds* CPlugFileModel3ds::CreateInstance ()
    {
        return static_cast < CPlugFileModel3ds* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
