#include "StdInc.h"

namespace ManiaPlanet
{

    CGameAvatar* CGameAvatar::CreateInstance ()
    {
        return static_cast < CGameAvatar* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CSystemPackDesc* CGameAvatar::GetPackDesc () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PackDesc" );
        class CSystemPackDesc* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameAvatar::SetPackDesc ( class CSystemPackDesc* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PackDesc" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
