#include "StdInc.h"

namespace ManiaPlanet
{

    CInputDeviceDx8Keyboard* CInputDeviceDx8Keyboard::CreateInstance ()
    {
        return static_cast < CInputDeviceDx8Keyboard* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
