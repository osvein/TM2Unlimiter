#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugSphericalHarmonics* CPlugSphericalHarmonics::CreateInstance ()
    {
        return static_cast < CPlugSphericalHarmonics* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
