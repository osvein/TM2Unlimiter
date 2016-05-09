#include "StdInc.h"

namespace ManiaPlanet
{

    CHmsDecalArray* CHmsDecalArray::CreateInstance ()
    {
        return static_cast < CHmsDecalArray* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
