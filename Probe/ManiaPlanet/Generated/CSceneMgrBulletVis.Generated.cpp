#include "StdInc.h"

namespace ManiaPlanet
{

    CSceneMgrBulletVis* CSceneMgrBulletVis::CreateInstance ()
    {
        return static_cast < CSceneMgrBulletVis* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
