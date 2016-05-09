#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugBitmapRenderShadow* CPlugBitmapRenderShadow::CreateInstance ()
    {
        return static_cast < CPlugBitmapRenderShadow* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
