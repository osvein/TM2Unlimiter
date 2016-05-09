#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugMaterialFxDynaMobil* CPlugMaterialFxDynaMobil::CreateInstance ()
    {
        return static_cast < CPlugMaterialFxDynaMobil* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
