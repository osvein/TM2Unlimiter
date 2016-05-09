#include "StdInc.h"

namespace ManiaPlanet
{

    CQmTerminal* CQmTerminal::CreateInstance ()
    {
        return static_cast < CQmTerminal* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
