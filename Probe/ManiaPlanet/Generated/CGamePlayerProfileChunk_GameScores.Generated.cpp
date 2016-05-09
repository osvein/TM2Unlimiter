#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlayerProfileChunk_GameScores* CGamePlayerProfileChunk_GameScores::CreateInstance ()
    {
        return static_cast < CGamePlayerProfileChunk_GameScores* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    List < nodptr<class CGamePlayerProfileChunk_ChallengesScores> >& CGamePlayerProfileChunk_GameScores::GetChallengesScoresChunks () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengesScoresChunks" );
        struct
        {
            List < nodptr<class CGamePlayerProfileChunk_ChallengesScores> >* pResult;
            List < nodptr<class CGamePlayerProfileChunk_ChallengesScores> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlayerProfileChunk_GameScores::SetChallengesScoresChunks ( List < nodptr<class CGamePlayerProfileChunk_ChallengesScores> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengesScoresChunks" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CGamePlayerProfileChunk_GameScores::GetGlobalSkillPoints () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GlobalSkillPoints" );
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

    void CGamePlayerProfileChunk_GameScores::SetGlobalSkillPoints ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GlobalSkillPoints" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
