#include "StdInc.h"

namespace ManiaPlanet
{

    CMwMemberInfo* CMwClassInfo::GetMemberInfo ( uint i )
    {
        assert ( i < m_uiNumMemberInfos );
        return m_ppMemberInfos [ i ];
    }

    CMwMemberInfo* CMwClassInfo::GetMemberInfo ( const char* pszName )
    {
        for ( uint i = 0; i < m_uiNumMemberInfos; i++ )
        {
            CMwMemberInfo* pMemberInfo = m_ppMemberInfos [ i ];
            if ( pMemberInfo->GetName () && !strcmp ( pMemberInfo->GetName (), pszName ) )
                return pMemberInfo;
        }

        if ( m_pParentClassInfo )
            return m_pParentClassInfo->GetMemberInfo ( pszName );

        return NULL;
    }

}
