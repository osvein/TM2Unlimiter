#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugBitmapApplyArray* CPlugBitmapApplyArray::CreateInstance ()
    {
        return static_cast < CPlugBitmapApplyArray* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
