#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnEditorPuzzle* CGameCtnEditorPuzzle::CreateInstance ()
    {
        return static_cast < CGameCtnEditorPuzzle* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
