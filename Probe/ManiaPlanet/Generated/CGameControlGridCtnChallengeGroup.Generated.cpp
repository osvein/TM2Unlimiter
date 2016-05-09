#include "StdInc.h"

namespace ManiaPlanet
{

    CGameControlGridCtnChallengeGroup* CGameControlGridCtnChallengeGroup::CreateInstance ()
    {
        return static_cast < CGameControlGridCtnChallengeGroup* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CGameControlGridCtnChallengeGroup::ChallengeAlignmentToString ( eChallengeAlignment value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "ChallengeAlignment" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameControlGridCtnChallengeGroup::eChallengeAlignment CGameControlGridCtnChallengeGroup::ParseChallengeAlignment ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "ChallengeAlignment" );
        return (eChallengeAlignment)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    CGameControlGridCtnChallengeGroup::eChallengeAlignment CGameControlGridCtnChallengeGroup::GetChallengeAlignment () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeAlignment" );
        struct
        {
            eChallengeAlignment* pResult;
            eChallengeAlignment storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameControlGridCtnChallengeGroup::SetChallengeAlignment ( CGameControlGridCtnChallengeGroup::eChallengeAlignment value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeAlignment" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CGameCtnChallengeGroup* CGameControlGridCtnChallengeGroup::GetChallengeGroup () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeGroup" );
        class CGameCtnChallengeGroup* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameControlGridCtnChallengeGroup::SetChallengeGroup ( class CGameCtnChallengeGroup* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeGroup" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CControlLabel* CGameControlGridCtnChallengeGroup::GetChallengeGroupNameLabel () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeGroupNameLabel" );
        class CControlLabel* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameControlGridCtnChallengeGroup::SetChallengeGroupNameLabel ( class CControlLabel* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeGroupNameLabel" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
