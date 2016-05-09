#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlaygroundScriptXmlRpc* CGamePlaygroundScriptXmlRpc::CreateInstance ()
    {
        return static_cast < CGamePlaygroundScriptXmlRpc* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGamePlaygroundScriptXmlRpcEvent> >& CGamePlaygroundScriptXmlRpc::GetPendingEvents () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PendingEvents" );
        struct
        {
            List < nodptr<class CGamePlaygroundScriptXmlRpcEvent> >* pResult;
            List < nodptr<class CGamePlaygroundScriptXmlRpcEvent> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundScriptXmlRpc::SetPendingEvents ( List < nodptr<class CGamePlaygroundScriptXmlRpcEvent> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PendingEvents" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    void CGamePlaygroundScriptXmlRpc::SendCallback ( StringW wstrParam1, StringW wstrParam2 )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SendCallback" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( wstrParam2 );
        stack.Push ( wstrParam1 );
        CallMethod ( &stack, NULL );
    }

}
