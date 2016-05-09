#include "StdInc.h"

namespace ManiaPlanet
{

    CMotionTeamAction* CMotionTeamAction::CreateInstance ()
    {
        return static_cast < CMotionTeamAction* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CMotionTeamActionInfo> >& CMotionTeamAction::GetTeamMates () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TeamMates" );
        struct
        {
            List < nodptr<class CMotionTeamActionInfo> >* pResult;
            List < nodptr<class CMotionTeamActionInfo> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CMotionTeamAction::SetTeamMates ( List < nodptr<class CMotionTeamActionInfo> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "TeamMates" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    void CMotionTeamAction::AddTeamMate ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddTeamMate" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
