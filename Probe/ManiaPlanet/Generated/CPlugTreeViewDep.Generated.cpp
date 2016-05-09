#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugTreeViewDep* CPlugTreeViewDep::CreateInstance ()
    {
        return static_cast < CPlugTreeViewDep* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
