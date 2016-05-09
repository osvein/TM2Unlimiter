#include "StdInc.h"

namespace ManiaPlanet
{

    CControlToolTipManager* CControlToolTipManager::CreateInstance ()
    {
        return static_cast < CControlToolTipManager* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
