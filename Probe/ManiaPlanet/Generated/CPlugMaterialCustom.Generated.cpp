#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugMaterialCustom* CPlugMaterialCustom::CreateInstance ()
    {
        return static_cast < CPlugMaterialCustom* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
