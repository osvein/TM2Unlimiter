#include "StdInc.h"

namespace ManiaPlanet
{

    CTrackManiaRace1PGhosts* CTrackManiaRace1PGhosts::CreateInstance ()
    {
        return static_cast < CTrackManiaRace1PGhosts* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGameCtnGhostInfo> >& CTrackManiaRace1PGhosts::GetChallengeGhostInfos () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeGhostInfos" );
        struct
        {
            List < nodptr<class CGameCtnGhostInfo> >* pResult;
            List < nodptr<class CGameCtnGhostInfo> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CTrackManiaRace1PGhosts::SetChallengeGhostInfos ( List < nodptr<class CGameCtnGhostInfo> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeGhostInfos" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Array < class CGameCtnGhost* >& CTrackManiaRace1PGhosts::GetMedalGhosts () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MedalGhosts" );
        struct
        {
            Array < class CGameCtnGhost* >* pResult;
            Array < class CGameCtnGhost* > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CTrackManiaRace1PGhosts::SetMedalGhosts ( Array < class CGameCtnGhost* >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "MedalGhosts" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
