#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugBodyPath* CPlugBodyPath::CreateInstance ()
    {
        return static_cast < CPlugBodyPath* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
