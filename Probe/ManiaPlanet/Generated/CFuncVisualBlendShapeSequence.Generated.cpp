#include "StdInc.h"

namespace ManiaPlanet
{

    CFuncVisualBlendShapeSequence* CFuncVisualBlendShapeSequence::CreateInstance ()
    {
        return static_cast < CFuncVisualBlendShapeSequence* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
