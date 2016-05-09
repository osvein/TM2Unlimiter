#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileWav* CPlugFileWav::CreateInstance ()
    {
        return static_cast < CPlugFileWav* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
