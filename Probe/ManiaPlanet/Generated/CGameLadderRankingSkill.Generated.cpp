#include "StdInc.h"

namespace ManiaPlanet
{

    CGameLadderRankingSkill* CGameLadderRankingSkill::CreateInstance ()
    {
        return static_cast < CGameLadderRankingSkill* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    class CSystemData* CGameLadderRankingSkill::GetDynamicLeagueLogo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DynamicLeagueLogo" );
        class CSystemData* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameLadderRankingSkill::SetDynamicLeagueLogo ( class CSystemData* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DynamicLeagueLogo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    StringW CGameLadderRankingSkill::GetDynamicLeagueName () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DynamicLeagueName" );
        struct
        {
            StringW* pResult;
            StringW storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameLadderRankingSkill::SetDynamicLeagueName ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "DynamicLeagueName" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
