#include "StdInc.h"

namespace ManiaPlanet
{

    CSmNetForm* CSmNetForm::CreateInstance ()
    {
        return static_cast < CSmNetForm* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
