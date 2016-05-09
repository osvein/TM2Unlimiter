#include "StdInc.h"

namespace ManiaPlanet
{

    CGamePlaygroundUIConfig* CGamePlaygroundUIConfig::CreateInstance ()
    {
        return static_cast < CGamePlaygroundUIConfig* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CGamePlaygroundUIConfig::AlliesLabelsShowGaugesToString ( eAlliesLabelsShowGauges value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "AlliesLabelsShowGauges" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGamePlaygroundUIConfig::eAlliesLabelsShowGauges CGamePlaygroundUIConfig::ParseAlliesLabelsShowGauges ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "AlliesLabelsShowGauges" );
        return (eAlliesLabelsShowGauges)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGamePlaygroundUIConfig::AlliesLabelsVisibilityToString ( eAlliesLabelsVisibility value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "AlliesLabelsVisibility" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGamePlaygroundUIConfig::eAlliesLabelsVisibility CGamePlaygroundUIConfig::ParseAlliesLabelsVisibility ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "AlliesLabelsVisibility" );
        return (eAlliesLabelsVisibility)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGamePlaygroundUIConfig::BigMessageAvatarVariantToString ( eBigMessageAvatarVariant value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "BigMessageAvatarVariant" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGamePlaygroundUIConfig::eBigMessageAvatarVariant CGamePlaygroundUIConfig::ParseBigMessageAvatarVariant ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "BigMessageAvatarVariant" );
        return (eBigMessageAvatarVariant)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGamePlaygroundUIConfig::BigMessageSoundToString ( eBigMessageSound value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "BigMessageSound" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGamePlaygroundUIConfig::eBigMessageSound CGamePlaygroundUIConfig::ParseBigMessageSound ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "BigMessageSound" );
        return (eBigMessageSound)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGamePlaygroundUIConfig::EnemiesLabelsShowGaugesToString ( eEnemiesLabelsShowGauges value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "EnemiesLabelsShowGauges" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGamePlaygroundUIConfig::eEnemiesLabelsShowGauges CGamePlaygroundUIConfig::ParseEnemiesLabelsShowGauges ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "EnemiesLabelsShowGauges" );
        return (eEnemiesLabelsShowGauges)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGamePlaygroundUIConfig::EnemiesLabelsVisibilityToString ( eEnemiesLabelsVisibility value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "EnemiesLabelsVisibility" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGamePlaygroundUIConfig::eEnemiesLabelsVisibility CGamePlaygroundUIConfig::ParseEnemiesLabelsVisibility ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "EnemiesLabelsVisibility" );
        return (eEnemiesLabelsVisibility)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGamePlaygroundUIConfig::NoticesFilter_LevelToShowAsBigMessageToString ( eNoticesFilter_LevelToShowAsBigMessage value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "NoticesFilter_LevelToShowAsBigMessage" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGamePlaygroundUIConfig::eNoticesFilter_LevelToShowAsBigMessage CGamePlaygroundUIConfig::ParseNoticesFilter_LevelToShowAsBigMessage ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "NoticesFilter_LevelToShowAsBigMessage" );
        return (eNoticesFilter_LevelToShowAsBigMessage)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGamePlaygroundUIConfig::ScoreTableVisibilityToString ( eScoreTableVisibility value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "ScoreTableVisibility" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGamePlaygroundUIConfig::eScoreTableVisibility CGamePlaygroundUIConfig::ParseScoreTableVisibility ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "ScoreTableVisibility" );
        return (eScoreTableVisibility)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGamePlaygroundUIConfig::SmallScoreTableVisibilityToString ( eSmallScoreTableVisibility value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "SmallScoreTableVisibility" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGamePlaygroundUIConfig::eSmallScoreTableVisibility CGamePlaygroundUIConfig::ParseSmallScoreTableVisibility ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "SmallScoreTableVisibility" );
        return (eSmallScoreTableVisibility)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGamePlaygroundUIConfig::UISequenceToString ( eUISequence value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "UISequence" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGamePlaygroundUIConfig::eUISequence CGamePlaygroundUIConfig::ParseUISequence ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "UISequence" );
        return (eUISequence)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CGamePlaygroundUIConfig::UIStatusToString ( eUIStatus value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "UIStatus" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CGamePlaygroundUIConfig::eUIStatus CGamePlaygroundUIConfig::ParseUIStatus ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "UIStatus" );
        return (eUIStatus)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    CGamePlaygroundUIConfig::eAlliesLabelsShowGauges CGamePlaygroundUIConfig::GetAlliesLabelsShowGauges () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AlliesLabelsShowGauges" );
        struct
        {
            eAlliesLabelsShowGauges* pResult;
            eAlliesLabelsShowGauges storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetAlliesLabelsShowGauges ( CGamePlaygroundUIConfig::eAlliesLabelsShowGauges value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AlliesLabelsShowGauges" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGamePlaygroundUIConfig::eAlliesLabelsVisibility CGamePlaygroundUIConfig::GetAlliesLabelsVisibility () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AlliesLabelsVisibility" );
        struct
        {
            eAlliesLabelsVisibility* pResult;
            eAlliesLabelsVisibility storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetAlliesLabelsVisibility ( CGamePlaygroundUIConfig::eAlliesLabelsVisibility value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AlliesLabelsVisibility" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetAltMenuNoCustomScores () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AltMenuNoCustomScores" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetAltMenuNoCustomScores ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AltMenuNoCustomScores" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetAltMenuNoDefaultScores () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AltMenuNoDefaultScores" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetAltMenuNoDefaultScores ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "AltMenuNoDefaultScores" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringW CGamePlaygroundUIConfig::GetBigMessage () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BigMessage" );
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

    void CGamePlaygroundUIConfig::SetBigMessage ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BigMessage" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringA CGamePlaygroundUIConfig::GetBigMessageAvatarLogin () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BigMessageAvatarLogin" );
        struct
        {
            StringA* pResult;
            StringA storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetBigMessageAvatarLogin ( StringA value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BigMessageAvatarLogin" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGamePlaygroundUIConfig::eBigMessageAvatarVariant CGamePlaygroundUIConfig::GetBigMessageAvatarVariant () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BigMessageAvatarVariant" );
        struct
        {
            eBigMessageAvatarVariant* pResult;
            eBigMessageAvatarVariant storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetBigMessageAvatarVariant ( CGamePlaygroundUIConfig::eBigMessageAvatarVariant value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BigMessageAvatarVariant" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGamePlaygroundUIConfig::eBigMessageSound CGamePlaygroundUIConfig::GetBigMessageSound () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BigMessageSound" );
        struct
        {
            eBigMessageSound* pResult;
            eBigMessageSound storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetBigMessageSound ( CGamePlaygroundUIConfig::eBigMessageSound value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BigMessageSound" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CGamePlaygroundUIConfig::GetBigMessageSoundVariant () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BigMessageSoundVariant" );
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

    void CGamePlaygroundUIConfig::SetBigMessageSoundVariant ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "BigMessageSoundVariant" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    int CGamePlaygroundUIConfig::GetCountdownEndTime () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CountdownEndTime" );
        struct
        {
            int* pResult;
            int storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetCountdownEndTime ( int value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CountdownEndTime" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGamePlaygroundUIConfig::eEnemiesLabelsShowGauges CGamePlaygroundUIConfig::GetEnemiesLabelsShowGauges () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EnemiesLabelsShowGauges" );
        struct
        {
            eEnemiesLabelsShowGauges* pResult;
            eEnemiesLabelsShowGauges storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetEnemiesLabelsShowGauges ( CGamePlaygroundUIConfig::eEnemiesLabelsShowGauges value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EnemiesLabelsShowGauges" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGamePlaygroundUIConfig::eEnemiesLabelsVisibility CGamePlaygroundUIConfig::GetEnemiesLabelsVisibility () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EnemiesLabelsVisibility" );
        struct
        {
            eEnemiesLabelsVisibility* pResult;
            eEnemiesLabelsVisibility storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetEnemiesLabelsVisibility ( CGamePlaygroundUIConfig::eEnemiesLabelsVisibility value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "EnemiesLabelsVisibility" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetForceSpectator () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ForceSpectator" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetForceSpectator ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ForceSpectator" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CGamePlaygroundUIConfig::GetGaugeClan () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GaugeClan" );
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

    void CGamePlaygroundUIConfig::SetGaugeClan ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GaugeClan" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringW CGamePlaygroundUIConfig::GetGaugeMessage () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GaugeMessage" );
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

    void CGamePlaygroundUIConfig::SetGaugeMessage ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GaugeMessage" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CGamePlaygroundUIConfig::GetGaugeRatio () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GaugeRatio" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetGaugeRatio ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GaugeRatio" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringA CGamePlaygroundUIConfig::GetHud3dMarkers () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Hud3dMarkers" );
        struct
        {
            StringA* pResult;
            StringA storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetHud3dMarkers ( StringA value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Hud3dMarkers" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringW CGamePlaygroundUIConfig::GetManialinkPage () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ManialinkPage" );
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

    void CGamePlaygroundUIConfig::SetManialinkPage ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ManialinkPage" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetNoticesFilter_HideMapInfo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HideMapInfo" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetNoticesFilter_HideMapInfo ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HideMapInfo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetNoticesFilter_HideMapWarning () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HideMapWarning" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetNoticesFilter_HideMapWarning ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HideMapWarning" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetNoticesFilter_HideMatchInfo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HideMatchInfo" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetNoticesFilter_HideMatchInfo ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HideMatchInfo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetNoticesFilter_HideMatchWarning () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HideMatchWarning" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetNoticesFilter_HideMatchWarning ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HideMatchWarning" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetNoticesFilter_HidePlayerInfo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HidePlayerInfo" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetNoticesFilter_HidePlayerInfo ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HidePlayerInfo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetNoticesFilter_HidePlayerInfoIfNotMe () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HidePlayerInfoIfNotMe" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetNoticesFilter_HidePlayerInfoIfNotMe ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HidePlayerInfoIfNotMe" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetNoticesFilter_HidePlayerWarning () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HidePlayerWarning" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetNoticesFilter_HidePlayerWarning ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HidePlayerWarning" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetNoticesFilter_HidePlayerWarningIfNotMe () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HidePlayerWarningIfNotMe" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetNoticesFilter_HidePlayerWarningIfNotMe ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_HidePlayerWarningIfNotMe" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGamePlaygroundUIConfig::eNoticesFilter_LevelToShowAsBigMessage CGamePlaygroundUIConfig::GetNoticesFilter_LevelToShowAsBigMessage () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_LevelToShowAsBigMessage" );
        struct
        {
            eNoticesFilter_LevelToShowAsBigMessage* pResult;
            eNoticesFilter_LevelToShowAsBigMessage storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetNoticesFilter_LevelToShowAsBigMessage ( CGamePlaygroundUIConfig::eNoticesFilter_LevelToShowAsBigMessage value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NoticesFilter_LevelToShowAsBigMessage" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetOverlayHideAll () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayHideAll" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetOverlayHideAll ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayHideAll" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetOverlayHideChat () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayHideChat" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetOverlayHideChat ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayHideChat" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetOverlayHideCheckPointList () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayHideCheckPointList" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetOverlayHideCheckPointList ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayHideCheckPointList" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetOverlayHideMapInfo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayHideMapInfo" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetOverlayHideMapInfo ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayHideMapInfo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetOverlayHideNotices () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayHideNotices" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetOverlayHideNotices ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayHideNotices" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetOverlayHideOpponentsInfo () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayHideOpponentsInfo" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetOverlayHideOpponentsInfo ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayHideOpponentsInfo" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetOverlayHideRoundScores () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayHideRoundScores" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetOverlayHideRoundScores ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayHideRoundScores" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetOverlayScoreSummary () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayScoreSummary" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetOverlayScoreSummary ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "OverlayScoreSummary" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CGamePlaygroundUIConfig::GetScoreSummary_Gauge1 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_Gauge1" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetScoreSummary_Gauge1 ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_Gauge1" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CGamePlaygroundUIConfig::GetScoreSummary_Gauge2 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_Gauge2" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetScoreSummary_Gauge2 ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_Gauge2" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    int CGamePlaygroundUIConfig::GetScoreSummary_MatchPoints1 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_MatchPoints1" );
        struct
        {
            int* pResult;
            int storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetScoreSummary_MatchPoints1 ( int value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_MatchPoints1" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    int CGamePlaygroundUIConfig::GetScoreSummary_MatchPoints2 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_MatchPoints2" );
        struct
        {
            int* pResult;
            int storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetScoreSummary_MatchPoints2 ( int value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_MatchPoints2" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Id CGamePlaygroundUIConfig::GetScoreSummary_Player1 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_Player1" );
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

    void CGamePlaygroundUIConfig::SetScoreSummary_Player1 ( Id value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_Player1" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Id CGamePlaygroundUIConfig::GetScoreSummary_Player2 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_Player2" );
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

    void CGamePlaygroundUIConfig::SetScoreSummary_Player2 ( Id value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_Player2" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    int CGamePlaygroundUIConfig::GetScoreSummary_Points1 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_Points1" );
        struct
        {
            int* pResult;
            int storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetScoreSummary_Points1 ( int value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_Points1" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    int CGamePlaygroundUIConfig::GetScoreSummary_Points2 () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_Points2" );
        struct
        {
            int* pResult;
            int storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetScoreSummary_Points2 ( int value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreSummary_Points2" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringA CGamePlaygroundUIConfig::GetScoreTable () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreTable" );
        struct
        {
            StringA* pResult;
            StringA storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetScoreTable ( StringA value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreTable" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetScoreTableOnlyManialink () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreTableOnlyManialink" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetScoreTableOnlyManialink ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreTableOnlyManialink" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGamePlaygroundUIConfig::eScoreTableVisibility CGamePlaygroundUIConfig::GetScoreTableVisibility () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreTableVisibility" );
        struct
        {
            eScoreTableVisibility* pResult;
            eScoreTableVisibility storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetScoreTableVisibility ( CGamePlaygroundUIConfig::eScoreTableVisibility value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScoreTableVisibility" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetScreenIn3dHideScoreSummary () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScreenIn3dHideScoreSummary" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetScreenIn3dHideScoreSummary ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScreenIn3dHideScoreSummary" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetScreenIn3dHideVersus () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScreenIn3dHideVersus" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetScreenIn3dHideVersus ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ScreenIn3dHideVersus" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringA CGamePlaygroundUIConfig::GetSmallScoreTable () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SmallScoreTable" );
        struct
        {
            StringA* pResult;
            StringA storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetSmallScoreTable ( StringA value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SmallScoreTable" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGamePlaygroundUIConfig::eSmallScoreTableVisibility CGamePlaygroundUIConfig::GetSmallScoreTableVisibility () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SmallScoreTableVisibility" );
        struct
        {
            eSmallScoreTableVisibility* pResult;
            eSmallScoreTableVisibility storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetSmallScoreTableVisibility ( CGamePlaygroundUIConfig::eSmallScoreTableVisibility value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SmallScoreTableVisibility" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Id CGamePlaygroundUIConfig::GetSpectatorAutoTarget () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpectatorAutoTarget" );
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

    void CGamePlaygroundUIConfig::SetSpectatorAutoTarget ( Id value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpectatorAutoTarget" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CGamePlaygroundUIConfig::GetSpectatorCamAutoLatitude () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpectatorCamAutoLatitude" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetSpectatorCamAutoLatitude ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpectatorCamAutoLatitude" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CGamePlaygroundUIConfig::GetSpectatorCamAutoLongitude () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpectatorCamAutoLongitude" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetSpectatorCamAutoLongitude ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpectatorCamAutoLongitude" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    float CGamePlaygroundUIConfig::GetSpectatorCamAutoRadius () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpectatorCamAutoRadius" );
        struct
        {
            float* pResult;
            float storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetSpectatorCamAutoRadius ( float value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpectatorCamAutoRadius" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    uint CGamePlaygroundUIConfig::GetSpectatorForceCameraType () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpectatorForceCameraType" );
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

    void CGamePlaygroundUIConfig::SetSpectatorForceCameraType ( uint value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpectatorForceCameraType" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    int CGamePlaygroundUIConfig::GetSpectatorForcedClan () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpectatorForcedClan" );
        struct
        {
            int* pResult;
            int storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetSpectatorForcedClan ( int value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpectatorForcedClan" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    Id CGamePlaygroundUIConfig::GetSpectatorForcedTarget () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpectatorForcedTarget" );
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

    void CGamePlaygroundUIConfig::SetSpectatorForcedTarget ( Id value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SpectatorForcedTarget" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringW CGamePlaygroundUIConfig::GetStatusMessage () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StatusMessage" );
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

    void CGamePlaygroundUIConfig::SetStatusMessage ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "StatusMessage" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CGamePlaygroundUILayer> >& CGamePlaygroundUIConfig::GetUILayers () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UILayers" );
        struct
        {
            List < nodptr<class CGamePlaygroundUILayer> >* pResult;
            List < nodptr<class CGamePlaygroundUILayer> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetUILayers ( List < nodptr<class CGamePlaygroundUILayer> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UILayers" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGamePlaygroundUIConfig::eUISequence CGamePlaygroundUIConfig::GetUISequence () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UISequence" );
        struct
        {
            eUISequence* pResult;
            eUISequence storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetUISequence ( CGamePlaygroundUIConfig::eUISequence value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UISequence" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CGamePlaygroundUIConfig::GetUISequenceIsCompleted () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UISequenceIsCompleted" );
        struct
        {
            bool* pResult;
            bool storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetUISequenceIsCompleted ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UISequenceIsCompleted" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    StringW CGamePlaygroundUIConfig::GetUISequence_CustomMTClip () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UISequence_CustomMTClip" );
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

    void CGamePlaygroundUIConfig::SetUISequence_CustomMTClip ( StringW value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UISequence_CustomMTClip" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CGamePlaygroundUIConfig::eUIStatus CGamePlaygroundUIConfig::GetUIStatus () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UIStatus" );
        struct
        {
            eUIStatus* pResult;
            eUIStatus storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CGamePlaygroundUIConfig::SetUIStatus ( CGamePlaygroundUIConfig::eUIStatus value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UIStatus" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    void CGamePlaygroundUIConfig::ClearLayerManialinkAction ( class CGamePlaygroundUILayer* pLayer )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ClearLayerManialinkAction" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pLayer ) );
        CallMethod ( &stack, NULL );
    }

    StringW CGamePlaygroundUIConfig::GetLayerManialinkAction ( class CGamePlaygroundUILayer* pLayer )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "GetLayerManialinkAction" );
        StringW wstrAction;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pLayer ) );
        stack.Push ( wstrAction );
        CallMethod ( &stack, NULL );
        return wstrAction;
    }

    void CGamePlaygroundUIConfig::SendChat ( StringW wstrText )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SendChat" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( wstrText );
        CallMethod ( &stack, NULL );
    }

    void CGamePlaygroundUIConfig::SendNotice ( StringW wstrText, uint level, class CGamePlayerInfo* pAvatar, uint avatarVariant, uint sound, int iSoundVariant )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "SendNotice" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( iSoundVariant );
        stack.Push ( sound );
        stack.Push ( avatarVariant );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pAvatar ) );
        stack.Push ( level );
        stack.Push ( wstrText );
        CallMethod ( &stack, NULL );
    }

}
