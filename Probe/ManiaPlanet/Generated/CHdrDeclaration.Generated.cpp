#include "StdInc.h"

namespace ManiaPlanet
{

    CHdrDeclaration* CHdrDeclaration::CreateInstance ()
    {
        return static_cast < CHdrDeclaration* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
