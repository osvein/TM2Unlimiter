#include "StdInc.h"

namespace ManiaPlanet
{

    CSmAnticheatFunctions* CSmAnticheatFunctions::CreateInstance ()
    {
        return static_cast < CSmAnticheatFunctions* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CSmPlayer* CSmAnticheatFunctions::GetLocalPlayer () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "LocalPlayer" );
        class CSmPlayer* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CSmAnticheatFunctions::SetLocalPlayer ( class CSmPlayer* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "LocalPlayer" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    List < nodptr<class CSmAnticheatEvent> >& CSmAnticheatFunctions::GetPendingEvents () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PendingEvents" );
        struct
        {
            List < nodptr<class CSmAnticheatEvent> >* pResult;
            List < nodptr<class CSmAnticheatEvent> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSmAnticheatFunctions::SetPendingEvents ( List < nodptr<class CSmAnticheatEvent> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PendingEvents" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CSmPlayer> >& CSmAnticheatFunctions::GetPlayers () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Players" );
        struct
        {
            List < nodptr<class CSmPlayer> >* pResult;
            List < nodptr<class CSmPlayer> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CSmAnticheatFunctions::SetPlayers ( List < nodptr<class CSmPlayer> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Players" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CSmAnticheatFunctions::CheckOcclusionBetween ( Vec3D vecSource, Vec3D vecDestination )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CheckOcclusionBetween" );
        bool bResult;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( vecDestination );
        stack.Push ( vecSource );
        stack.Push ( bResult );
        CallMethod ( &stack, NULL );
        return bResult;
    }

    void CSmAnticheatFunctions::CreateFakePlayer ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CreateFakePlayer" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    bool CSmAnticheatFunctions::GenerateUnreachablePosition ( Vec3D vecPlayerPosition )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GenerateUnreachablePosition" );
        bool bFound;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( vecPlayerPosition );
        stack.Push ( bFound );
        CallMethod ( &stack, NULL );
        return bFound;
    }

    class CSmPlayer* CSmAnticheatFunctions::GetPlayerUnderCrossHair ( class CSmPlayer* pPlayer )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetPlayerUnderCrossHair" );
        class CSmPlayer* pResult = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pPlayer ) );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pResult ) );
        CallMethod ( &stack, NULL );
        return pResult;
    }

    void CSmAnticheatFunctions::PopEvent ( class CSmAnticheatEvent* pEvent )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PopEvent" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pEvent ) );
        CallMethod ( &stack, NULL );
    }

    void CSmAnticheatFunctions::RemoveFakePlayer ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RemoveFakePlayer" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CSmAnticheatFunctions::SetFakePlayerAim ( Vec3D vecAimDirection )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SetFakePlayerAim" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( vecAimDirection );
        CallMethod ( &stack, NULL );
    }

    void CSmAnticheatFunctions::SetFakePlayerPos ( Vec3D vecPosition )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SetFakePlayerPos" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( vecPosition );
        CallMethod ( &stack, NULL );
    }

}
