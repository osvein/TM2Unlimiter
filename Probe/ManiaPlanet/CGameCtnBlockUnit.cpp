#include "StdInc.h"

namespace ManiaPlanet
{

    uint3 CGameCtnBlockUnit::GetPosition () const
    {
        return m_pBlock->GetCoord () + m_Offset;
    }

}
