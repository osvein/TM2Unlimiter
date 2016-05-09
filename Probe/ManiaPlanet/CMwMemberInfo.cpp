#include "StdInc.h"

namespace ManiaPlanet
{

    CMwMemberInfo::CMwMemberInfo ()
    {
        memset ( this, 0, sizeof(*this) );
    }

    CMwMemberInfo::CMwMemberInfo ( uint uiID, eType type, uint uiFlags1 )
    {
        memset ( this, 0, sizeof(*this) );

        m_uiID = uiID;
        m_Type = type;
        m_pParam = ((void **)Address::Inst.ppParams) [ type ];
        m_uiFlags1 = uiFlags1;
        m_uiFlags2 = 0x3F80;
    }

}
