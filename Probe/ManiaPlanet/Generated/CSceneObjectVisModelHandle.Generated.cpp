#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneObjectVisModelHandle* CSceneObjectVisModelHandle::CreateInstance ()
    {
        return static_cast < CSceneObjectVisModelHandle* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
