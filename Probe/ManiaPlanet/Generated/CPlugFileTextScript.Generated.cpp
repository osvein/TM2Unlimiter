#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileTextScript* CPlugFileTextScript::CreateInstance ()
    {
        return static_cast < CPlugFileTextScript* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
