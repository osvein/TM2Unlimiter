#include "StdInc.h"

namespace ManiaPlanet
{

    CGameCtnMediaBlockEditor* CGameCtnMediaBlockEditor::CreateInstance ()
    {
        return static_cast < CGameCtnMediaBlockEditor* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
