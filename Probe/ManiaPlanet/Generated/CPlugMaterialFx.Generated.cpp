#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugMaterialFx* CPlugMaterialFx::CreateInstance ()
    {
        return static_cast < CPlugMaterialFx* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
