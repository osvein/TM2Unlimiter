#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnEditorFree* CGameCtnEditorFree::CreateInstance ()
    {
        return static_cast < CGameCtnEditorFree* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
