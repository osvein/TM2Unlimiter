#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileModelObj* CPlugFileModelObj::CreateInstance ()
    {
        return static_cast < CPlugFileModelObj* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
