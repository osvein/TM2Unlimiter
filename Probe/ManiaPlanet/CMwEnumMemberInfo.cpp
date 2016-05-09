#include "StdInc.h"

namespace ManiaPlanet
{

    const char* CMwEnumMemberInfo::GetName ( int i ) const
    {
        assert ( i < m_uiNumValues );
        return m_ppszValueNames [ i ];
    }

    int CMwEnumMemberInfo::Parse ( const char* pszName )
    {
        for ( int i = 0; i < m_uiNumValues; i++ )
        {
            if ( m_ppszValueNames[i] && !strcmp ( pszName, m_ppszValueNames[i] ) )
                return i;
        }
        return -1;
    }

}
