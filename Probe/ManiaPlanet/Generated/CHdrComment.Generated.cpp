#include "StdInc.h"

namespace ManiaPlanet
{

    CHdrComment* CHdrComment::CreateInstance ()
    {
        return static_cast < CHdrComment* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
