#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneMoods* CSceneMoods::CreateInstance ()
    {
        return static_cast < CSceneMoods* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
