#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlayerProfileChunk_ChallengesScores* CGamePlayerProfileChunk_ChallengesScores::CreateInstance ()
    {
        return static_cast < CGamePlayerProfileChunk_ChallengesScores* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    uint CGamePlayerProfileChunk_ChallengesScores::GetChallengesScoresCount () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengesScoresCount" );
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

    void CGamePlayerProfileChunk_ChallengesScores::SetChallengesScoresCount ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengesScoresCount" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
