#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnNetForm* CGameCtnNetForm::CreateInstance ()
    {
        return static_cast < CGameCtnNetForm* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
