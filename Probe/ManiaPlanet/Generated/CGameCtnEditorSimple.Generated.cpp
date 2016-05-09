#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnEditorSimple* CGameCtnEditorSimple::CreateInstance ()
    {
        return static_cast < CGameCtnEditorSimple* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
