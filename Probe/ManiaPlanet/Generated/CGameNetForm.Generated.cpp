#include "StdInc.h"

namespace ManiaPlanet
{

    CGameNetForm* CGameNetForm::CreateInstance ()
    {
        return static_cast < CGameNetForm* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
