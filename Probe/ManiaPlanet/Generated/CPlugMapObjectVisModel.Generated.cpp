#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugMapObjectVisModel* CPlugMapObjectVisModel::CreateInstance ()
    {
        return static_cast < CPlugMapObjectVisModel* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
