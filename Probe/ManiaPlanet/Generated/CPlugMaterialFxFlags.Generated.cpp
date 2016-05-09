#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugMaterialFxFlags* CPlugMaterialFxFlags::CreateInstance ()
    {
        return static_cast < CPlugMaterialFxFlags* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
