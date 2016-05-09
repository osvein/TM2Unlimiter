#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisualLines2D* CPlugVisualLines2D::CreateInstance ()
    {
        return static_cast < CPlugVisualLines2D* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
