#include "StdInc.h"

namespace ManiaPlanet
{

    CMwClassInfo* CMwEngineInfo::GetClassInfo ( uint uiClassID ) const
    {
        return m_Classes [ (uiClassID >> 12) & 0xFFF ];
    }

}
