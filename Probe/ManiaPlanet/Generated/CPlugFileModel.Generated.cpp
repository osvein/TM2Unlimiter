#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugFileModel* CPlugFileModel::CreateInstance ()
    {
        return static_cast < CPlugFileModel* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
