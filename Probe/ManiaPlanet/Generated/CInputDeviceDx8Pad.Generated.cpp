#include "StdInc.h"

namespace ManiaPlanet
{

    CInputDeviceDx8Pad* CInputDeviceDx8Pad::CreateInstance ()
    {
        return static_cast < CInputDeviceDx8Pad* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
