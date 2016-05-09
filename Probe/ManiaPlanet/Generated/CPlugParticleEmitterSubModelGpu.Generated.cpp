#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugParticleEmitterSubModelGpu* CPlugParticleEmitterSubModelGpu::CreateInstance ()
    {
        return static_cast < CPlugParticleEmitterSubModelGpu* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
