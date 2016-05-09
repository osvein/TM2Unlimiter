#include "StdInc.h"

namespace ManiaPlanet
{

    CGameAttributes* CGameAttributes::CreateInstance ()
    {
        return static_cast < CGameAttributes* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGameAttribute> >& CGameAttributes::GetAttributes () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Attributes" );
        struct
        {
            List < nodptr<class CGameAttribute> >* pResult;
            List < nodptr<class CGameAttribute> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameAttributes::SetAttributes ( List < nodptr<class CGameAttribute> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Attributes" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGameAttributes::HasAttribute ( StringA strName )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "HasAttribute" );
        bool bResult;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strName );
        stack.Push ( bResult );
        CallMethod ( &stack, NULL );
        return bResult;
    }

}
