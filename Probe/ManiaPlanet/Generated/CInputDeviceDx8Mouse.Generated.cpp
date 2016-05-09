#include "StdInc.h"

namespace ManiaPlanet
{

    CInputDeviceDx8Mouse* CInputDeviceDx8Mouse::CreateInstance ()
    {
        return static_cast < CInputDeviceDx8Mouse* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

}
