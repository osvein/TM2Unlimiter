#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugMusicType* CPlugMusicType::CreateInstance ()
    {
        return static_cast < CPlugMusicType* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
