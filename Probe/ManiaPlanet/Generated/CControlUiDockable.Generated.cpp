#include "StdInc.h"

namespace ManiaPlanet
{

    CControlUiDockable* CControlUiDockable::CreateInstance ()
    {
        return static_cast < CControlUiDockable* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    uint CControlUiDockable::GetCurScreen () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CurScreen" );
        struct
        {
            uint* pResult;
            uint storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CControlUiDockable::SetCurScreen ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CurScreen" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CControlUiDockable::GetIsClosed () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsClosed" );
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

    void CControlUiDockable::SetIsClosed ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsClosed" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CControlUiDockable::GetIsOpened () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsOpened" );
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

    void CControlUiDockable::SetIsOpened ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsOpened" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CControlForm> >& CControlUiDockable::GetScreens () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Screens" );
        struct
        {
            List < nodptr<class CControlForm> >* pResult;
            List < nodptr<class CControlForm> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CControlUiDockable::SetScreens ( List < nodptr<class CControlForm> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Screens" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CControlForm* CControlUiDockable::AddScreen ( StringA strId )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AddScreen" );
        class CControlForm* pScreen = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strId );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pScreen ) );
        CallMethod ( &stack, NULL );
        return pScreen;
    }

    void CControlUiDockable::Close ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Close" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CControlUiDockable::CreateRotate ( Vec3D vecAxis, float fMinAngle, float fMaxAngle )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CreateRotate" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( fMaxAngle );
        stack.Push ( fMinAngle );
        stack.Push ( vecAxis );
        CallMethod ( &stack, NULL );
    }

    void CControlUiDockable::CreateTranslate ( Vec3D vecStartPoint, Vec3D vecEndPoint )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CreateTranslate" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( vecEndPoint );
        stack.Push ( vecStartPoint );
        CallMethod ( &stack, NULL );
    }

    void CControlUiDockable::NextScreen ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NextScreen" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CControlUiDockable::Open ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Open" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CControlUiDockable::PrevScreen ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PrevScreen" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CControlUiDockable::Switch ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Switch" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

}
