#include "StdInc.h"

namespace ManiaPlanet
{

    CInputDeviceMouse* CInputDeviceMouse::CreateInstance ()
    {
        return static_cast < CInputDeviceMouse* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    bool CInputDeviceMouse::GetIsInsideWindow () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsInsideWindow" );
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

    void CInputDeviceMouse::SetIsInsideWindow ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsInsideWindow" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Vec2D CInputDeviceMouse::GetKineticScrollVel () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "KineticScrollVel" );
        struct
        {
            Vec2D* pResult;
            Vec2D storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CInputDeviceMouse::SetKineticScrollVel ( Vec2D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "KineticScrollVel" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Vec2D CInputDeviceMouse::GetPosInViewport () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PosInViewport" );
        struct
        {
            Vec2D* pResult;
            Vec2D storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CInputDeviceMouse::SetPosInViewport ( Vec2D value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PosInViewport" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
