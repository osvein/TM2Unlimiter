#include "StdInc.h"

namespace ManiaPlanet
{

    CMotionManagerMeteoPuffLull* CMotionManagerMeteoPuffLull::CreateInstance ()
    {
        return static_cast < CMotionManagerMeteoPuffLull* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CFuncPuffLull* CMotionManagerMeteoPuffLull::GetFuncPuffLull () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FuncPuffLull" );
        class CFuncPuffLull* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CMotionManagerMeteoPuffLull::SetFuncPuffLull ( class CFuncPuffLull* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FuncPuffLull" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    bool CMotionManagerMeteoPuffLull::GetIsVisible () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsVisible" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CMotionManagerMeteoPuffLull::SetIsVisible ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsVisible" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
