#include "StdInc.h"

namespace ManiaPlanet
{

    CNetFormRpcCall* CNetFormRpcCall::CreateInstance ()
    {
        return static_cast < CNetFormRpcCall* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
