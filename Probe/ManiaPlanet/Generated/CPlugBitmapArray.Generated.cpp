#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugBitmapArray* CPlugBitmapArray::CreateInstance ()
    {
        return static_cast < CPlugBitmapArray* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
