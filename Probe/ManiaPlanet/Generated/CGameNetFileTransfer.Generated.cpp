#include "StdInc.h"

namespace ManiaPlanet
{

    CGameNetFileTransfer* CGameNetFileTransfer::CreateInstance ()
    {
        return static_cast < CGameNetFileTransfer* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
