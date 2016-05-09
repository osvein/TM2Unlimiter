#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugMapObjectPhyModel* CPlugMapObjectPhyModel::CreateInstance ()
    {
        return static_cast < CPlugMapObjectPhyModel* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
