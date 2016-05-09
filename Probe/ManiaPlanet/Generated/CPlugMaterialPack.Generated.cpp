#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugMaterialPack* CPlugMaterialPack::CreateInstance ()
    {
        return static_cast < CPlugMaterialPack* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
