#include "StdInc.h"

namespace ManiaPlanet
{

    CQmControlAnimManager* CQmControlAnimManager::CreateInstance ()
    {
        return static_cast < CQmControlAnimManager* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
