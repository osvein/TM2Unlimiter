#include "StdInc.h"

namespace ManiaPlanet
{

    CGameAnticheat* CGameAnticheat::CreateInstance ()
    {
        return static_cast < CGameAnticheat* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGameAnticheatMonitor> >& CGameAnticheat::GetMonitors () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Monitors" );
        struct
        {
            List < nodptr<class CGameAnticheatMonitor> >* pResult;
            List < nodptr<class CGameAnticheatMonitor> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameAnticheat::SetMonitors ( List < nodptr<class CGameAnticheatMonitor> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Monitors" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CGameAnticheat::GetNow () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Now" );
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

    void CGameAnticheat::SetNow ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Now" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CGameAnticheatFunctions> >& CGameAnticheat::GetPackages () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Packages" );
        struct
        {
            List < nodptr<class CGameAnticheatFunctions> >* pResult;
            List < nodptr<class CGameAnticheatFunctions> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameAnticheat::SetPackages ( List < nodptr<class CGameAnticheatFunctions> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Packages" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CGameAnticheatEvent> >& CGameAnticheat::GetPendingEvents () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PendingEvents" );
        struct
        {
            List < nodptr<class CGameAnticheatEvent> >* pResult;
            List < nodptr<class CGameAnticheatEvent> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameAnticheat::SetPendingEvents ( List < nodptr<class CGameAnticheatEvent> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PendingEvents" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameAnticheatMonitor* CGameAnticheat::CreateMonitor ( uint type )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CreateMonitor" );
        class CGameAnticheatMonitor* pNewMonitor = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( type );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pNewMonitor ) );
        CallMethod ( &stack, NULL );
        return pNewMonitor;
    }

    void CGameAnticheat::DestroyMonitor ( class CGameAnticheatMonitor* pMonitor )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DestroyMonitor" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pMonitor ) );
        CallMethod ( &stack, NULL );
    }

    bool CGameAnticheat::IsKeyDown ( int iKeyCode )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IsKeyDown" );
        bool bResult;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iKeyCode );
        stack.Push ( bResult );
        CallMethod ( &stack, NULL );
        return bResult;
    }

    void CGameAnticheat::PopEvent ( class CGameAnticheatEvent* pEvent )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PopEvent" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pEvent ) );
        CallMethod ( &stack, NULL );
    }

    void CGameAnticheat::SendResult ( StringA strMessage )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SendResult" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( strMessage );
        CallMethod ( &stack, NULL );
    }

}
