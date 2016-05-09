#include "StdInc.h"

namespace ManiaPlanet
{

    CXmlUnknown* CXmlUnknown::CreateInstance ()
    {
        return static_cast < CXmlUnknown* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
