#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileGPUV* CPlugFileGPUV::CreateInstance ()
    {
        return static_cast < CPlugFileGPUV* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
