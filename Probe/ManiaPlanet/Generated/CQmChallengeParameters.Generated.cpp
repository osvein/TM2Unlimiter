#include "StdInc.h"

namespace ManiaPlanet
{

    CQmChallengeParameters* CQmChallengeParameters::CreateInstance ()
    {
        return static_cast < CQmChallengeParameters* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CQmChallengeParameters::RulesToString ( eRules value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "Rules" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CQmChallengeParameters::eRules CQmChallengeParameters::ParseRules ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "Rules" );
        return (eRules)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    Id CQmChallengeParameters::GetPlayerActorId () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayerActorId" );
        struct
        {
            Id* pResult;
            Id storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmChallengeParameters::SetPlayerActorId ( Id value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayerActorId" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CQmChallengeParameters::eRules CQmChallengeParameters::GetRules () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Rules" );
        struct
        {
            eRules* pResult;
            eRules storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CQmChallengeParameters::SetRules ( CQmChallengeParameters::eRules value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Rules" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

}
