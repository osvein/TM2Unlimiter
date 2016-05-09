#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFxLensFlareArray* CPlugFxLensFlareArray::CreateInstance ()
    {
        return static_cast < CPlugFxLensFlareArray* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
