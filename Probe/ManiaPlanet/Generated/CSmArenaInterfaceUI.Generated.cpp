#include "StdInc.h"

namespace ManiaPlanet
{

    CSmArenaInterfaceUI* CSmArenaInterfaceUI::CreateInstance ()
    {
        return static_cast < CSmArenaInterfaceUI* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
