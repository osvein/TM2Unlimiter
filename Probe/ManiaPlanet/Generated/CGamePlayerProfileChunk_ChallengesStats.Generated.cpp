#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlayerProfileChunk_ChallengesStats* CGamePlayerProfileChunk_ChallengesStats::CreateInstance ()
    {
        return static_cast < CGamePlayerProfileChunk_ChallengesStats* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    uint CGamePlayerProfileChunk_ChallengesStats::GetChallengesStatsCount () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengesStatsCount" );
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

    void CGamePlayerProfileChunk_ChallengesStats::SetChallengesStatsCount ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengesStatsCount" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
