#include "StdInc.h"

namespace ManiaPlanet
{

    CQmRuleAction* CQmRuleAction::CreateInstance ()
    {
        return static_cast < CQmRuleAction* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CQmRuleActionInfo* CQmRuleAction::GetActionInfo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ActionInfo" );
        class CQmRuleActionInfo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CQmRuleAction::SetActionInfo ( class CQmRuleActionInfo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ActionInfo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    List < nodptr<class CQmRuleActionParameter> >& CQmRuleAction::GetParameters () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Parameters" );
        struct
        {
            List < nodptr<class CQmRuleActionParameter> >* pResult;
            List < nodptr<class CQmRuleActionParameter> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmRuleAction::SetParameters ( List < nodptr<class CQmRuleActionParameter> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Parameters" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < StringA >& CQmRuleAction::GetResults () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Results" );
        struct
        {
            List < StringA >* pResult;
            List < StringA > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmRuleAction::SetResults ( List < StringA >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Results" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    void CQmRuleAction::AddResult ( StringA strResult )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddResult" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strResult );
        CallMethod ( &stack, NULL );
    }

    bool CQmRuleAction::HasParameter ( StringA strName )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "HasParameter" );
        bool bResult;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strName );
        stack.Push ( bResult );
        CallMethod ( &stack, NULL );
        return bResult;
    }

}
