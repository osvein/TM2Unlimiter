#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugOpModel* CPlugOpModel::CreateInstance ()
    {
        return static_cast < CPlugOpModel* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
