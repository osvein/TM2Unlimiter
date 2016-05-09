#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugMaterial* CPlugMaterial::CreateInstance ()
    {
        return static_cast < CPlugMaterial* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
