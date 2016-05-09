#include "StdInc.h"

namespace ManiaPlanet
{

    CGameControlGridCtnCampaign* CGameControlGridCtnCampaign::CreateInstance ()
    {
        return static_cast < CGameControlGridCtnCampaign* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CGameControlGridCtnCampaign::ChallengeGroupAlignmentToString ( eChallengeGroupAlignment value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "ChallengeGroupAlignment" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGameControlGridCtnCampaign::eChallengeGroupAlignment CGameControlGridCtnCampaign::ParseChallengeGroupAlignment ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "ChallengeGroupAlignment" );
        return (eChallengeGroupAlignment)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    class CGameCtnCampaign* CGameControlGridCtnCampaign::GetCampaign () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Campaign" );
        class CGameCtnCampaign* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameControlGridCtnCampaign::SetCampaign ( class CGameCtnCampaign* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Campaign" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CControlLabel* CGameControlGridCtnCampaign::GetCampaignNameLabel () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CampaignNameLabel" );
        class CControlLabel* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameControlGridCtnCampaign::SetCampaignNameLabel ( class CControlLabel* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CampaignNameLabel" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    class CGameControlCardCtnChallengeInfo* CGameControlGridCtnCampaign::GetChallengeCardTemplate () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeCardTemplate" );
        class CGameControlCardCtnChallengeInfo* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameControlGridCtnCampaign::SetChallengeCardTemplate ( class CGameControlCardCtnChallengeInfo* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeCardTemplate" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

    CGameControlGridCtnCampaign::eChallengeGroupAlignment CGameControlGridCtnCampaign::GetChallengeGroupAlignment () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeGroupAlignment" );
        struct
        {
            eChallengeGroupAlignment* pResult;
            eChallengeGroupAlignment storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGameControlGridCtnCampaign::SetChallengeGroupAlignment ( CGameControlGridCtnCampaign::eChallengeGroupAlignment value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeGroupAlignment" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    class CControlGrid* CGameControlGridCtnCampaign::GetChallengeGroupNamesGrid () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeGroupNamesGrid" );
        class CControlGrid* result = NULL;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return result;
    }

    void CGameControlGridCtnCampaign::SetChallengeGroupNamesGrid ( class CControlGrid* value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ChallengeGroupNamesGrid" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, value );
    }

}
