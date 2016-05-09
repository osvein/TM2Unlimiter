#include "StdInc.h"

namespace ManiaPlanet
{

    CSystemFids* CSystemFids::CreateInstance ()
    {
        return static_cast < CSystemFids* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CSystemFid> >& CSystemFids::GetLeaves () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Leaves" );
        struct
        {
            List < nodptr<class CSystemFid> >* pResult;
            List < nodptr<class CSystemFid> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSystemFids::SetLeaves ( List < nodptr<class CSystemFid> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Leaves" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CSystemFids> >& CSystemFids::GetTrees () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Trees" );
        struct
        {
            List < nodptr<class CSystemFids> >* pResult;
            List < nodptr<class CSystemFids> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSystemFids::SetTrees ( List < nodptr<class CSystemFids> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Trees" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
