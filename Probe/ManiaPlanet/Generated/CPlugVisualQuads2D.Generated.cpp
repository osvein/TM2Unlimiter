#include "StdInc.h"

namespace ManiaPlanet
{

    CPlugVisualQuads2D* CPlugVisualQuads2D::CreateInstance ()
    {
        return static_cast < CPlugVisualQuads2D* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
