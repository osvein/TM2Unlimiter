#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugGpuCompileCache* CPlugGpuCompileCache::CreateInstance ()
    {
        return static_cast < CPlugGpuCompileCache* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
