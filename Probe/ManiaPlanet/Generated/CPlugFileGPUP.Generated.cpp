#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileGPUP* CPlugFileGPUP::CreateInstance ()
    {
        return static_cast < CPlugFileGPUP* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
