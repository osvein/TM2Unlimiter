#include "StdInc.h"

namespace ManiaPlanet
{

    CXmlDocument* CXmlDocument::CreateInstance ()
    {
        return static_cast < CXmlDocument* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
