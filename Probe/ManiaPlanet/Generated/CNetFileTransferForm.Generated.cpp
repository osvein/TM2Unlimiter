#include "StdInc.h"

namespace ManiaPlanet
{

    CNetFileTransferForm* CNetFileTransferForm::CreateInstance ()
    {
        return static_cast < CNetFileTransferForm* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
