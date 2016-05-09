#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisual2D* CPlugVisual2D::CreateInstance ()
    {
        return static_cast < CPlugVisual2D* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
