#include "StdInc.h"

namespace ManiaPlanet
{

    CBoatTeamActionDesc* CBoatTeamActionDesc::CreateInstance ()
    {
        return static_cast < CBoatTeamActionDesc* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    Id CBoatTeamActionDesc::GetTeamActionId () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TeamActionId" );
        struct
        {
            Id* pResult;
            Id storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CBoatTeamActionDesc::SetTeamActionId ( Id value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TeamActionId" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CBoatTeamMateActionDesc> >& CBoatTeamActionDesc::GetTeamMateActionDescs () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TeamMateActionDescs" );
        struct
        {
            List < nodptr<class CBoatTeamMateActionDesc> >* pResult;
            List < nodptr<class CBoatTeamMateActionDesc> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CBoatTeamActionDesc::SetTeamMateActionDescs ( List < nodptr<class CBoatTeamMateActionDesc> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TeamMateActionDescs" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
