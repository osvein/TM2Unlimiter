#include "StdInc.h"

namespace ManiaPlanet
{

    CTrackManiaRaceRules* CTrackManiaRaceRules::CreateInstance ()
    {
        return static_cast < CTrackManiaRaceRules* > ( CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->CreateInstance () );
    }

    std::wstring CTrackManiaRaceRules::RespawnBehaviourToString ( eRespawnBehaviour value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "RespawnBehaviour" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CTrackManiaRaceRules::eRespawnBehaviour CTrackManiaRaceRules::ParseRespawnBehaviour ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "RespawnBehaviour" );
        return (eRespawnBehaviour)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    std::wstring CTrackManiaRaceRules::UiRaceChronoToString ( eUiRaceChrono value )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "UiRaceChrono" );
        return StringUtil::ToUTF16 ( pEnumInfo->GetName ( value ) );
    }

    CTrackManiaRaceRules::eUiRaceChrono CTrackManiaRaceRules::ParseUiRaceChrono ( const std::wstring& wstrName )
    {
        static CMwEnumMemberInfo* pEnumInfo = (CMwEnumMemberInfo *)CMwEngineManager::GetInstance ()->GetClassInfo ( CLASSID )->GetMemberInfo ( "UiRaceChrono" );
        return (eUiRaceChrono)pEnumInfo->Parse ( StringUtil::ToUTF8 ( wstrName ).c_str () );
    }

    List < nodptr<class CTmRaceRulesPlayer> >& CTrackManiaRaceRules::GetConnectedPlayers () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ConnectedPlayers" );
        struct
        {
            List < nodptr<class CTmRaceRulesPlayer> >* pResult;
            List < nodptr<class CTmRaceRulesPlayer> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CTrackManiaRaceRules::SetConnectedPlayers ( List < nodptr<class CTmRaceRulesPlayer> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ConnectedPlayers" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    int CTrackManiaRaceRules::GetCutOffTimeLimit () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CutOffTimeLimit" );
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

    void CTrackManiaRaceRules::SetCutOffTimeLimit ( int value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "CutOffTimeLimit" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    int CTrackManiaRaceRules::GetForceMaxOpponents () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ForceMaxOpponents" );
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

    void CTrackManiaRaceRules::SetForceMaxOpponents ( int value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "ForceMaxOpponents" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CTrackManiaRaceRules::GetHideOpponents () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "HideOpponents" );
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

    void CTrackManiaRaceRules::SetHideOpponents ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "HideOpponents" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CTrackManiaRaceRules::GetIndependantLaps () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IndependantLaps" );
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

    void CTrackManiaRaceRules::SetIndependantLaps ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "IndependantLaps" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    int CTrackManiaRaceRules::GetNbLaps () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NbLaps" );
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

    void CTrackManiaRaceRules::SetNbLaps ( int value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "NbLaps" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CTmRaceRulesEvent> >& CTrackManiaRaceRules::GetPendingEvents () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PendingEvents" );
        struct
        {
            List < nodptr<class CTmRaceRulesEvent> >* pResult;
            List < nodptr<class CTmRaceRulesEvent> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CTrackManiaRaceRules::SetPendingEvents ( List < nodptr<class CTmRaceRulesEvent> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PendingEvents" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CTmRaceRulesPlayer> >& CTrackManiaRaceRules::GetPlayers () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Players" );
        struct
        {
            List < nodptr<class CTmRaceRulesPlayer> >* pResult;
            List < nodptr<class CTmRaceRulesPlayer> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CTrackManiaRaceRules::SetPlayers ( List < nodptr<class CTmRaceRulesPlayer> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Players" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CTmRaceRulesPlayer> >& CTrackManiaRaceRules::GetPlayersRacing () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayersRacing" );
        struct
        {
            List < nodptr<class CTmRaceRulesPlayer> >* pResult;
            List < nodptr<class CTmRaceRulesPlayer> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CTrackManiaRaceRules::SetPlayersRacing ( List < nodptr<class CTmRaceRulesPlayer> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayersRacing" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CTmRaceRulesPlayer> >& CTrackManiaRaceRules::GetPlayersWaiting () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayersWaiting" );
        struct
        {
            List < nodptr<class CTmRaceRulesPlayer> >* pResult;
            List < nodptr<class CTmRaceRulesPlayer> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CTrackManiaRaceRules::SetPlayersWaiting ( List < nodptr<class CTmRaceRulesPlayer> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PlayersWaiting" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CTrackManiaRaceRules::eRespawnBehaviour CTrackManiaRaceRules::GetRespawnBehaviour () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RespawnBehaviour" );
        struct
        {
            eRespawnBehaviour* pResult;
            eRespawnBehaviour storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CTrackManiaRaceRules::SetRespawnBehaviour ( CTrackManiaRaceRules::eRespawnBehaviour value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "RespawnBehaviour" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    List < nodptr<class CTmRaceRulesScore> >& CTrackManiaRaceRules::GetScores () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Scores" );
        struct
        {
            List < nodptr<class CTmRaceRulesScore> >* pResult;
            List < nodptr<class CTmRaceRulesScore> > storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CTrackManiaRaceRules::SetScores ( List < nodptr<class CTmRaceRulesScore> >& value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Scores" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CTrackManiaRaceRules::GetUiDisplayStuntsNames () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UiDisplayStuntsNames" );
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

    void CTrackManiaRaceRules::SetUiDisplayStuntsNames ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UiDisplayStuntsNames" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    CTrackManiaRaceRules::eUiRaceChrono CTrackManiaRaceRules::GetUiRaceChrono () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UiRaceChrono" );
        struct
        {
            eUiRaceChrono* pResult;
            eUiRaceChrono storage;
        } result;
        CMwStack stack;
        stack.Push ( pMemberInfo );
        GetProperty ( &stack, &result );
        return *result.pResult;
    }

    void CTrackManiaRaceRules::SetUiRaceChrono ( CTrackManiaRaceRules::eUiRaceChrono value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UiRaceChrono" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CTrackManiaRaceRules::GetUiRounds () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UiRounds" );
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

    void CTrackManiaRaceRules::SetUiRounds ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UiRounds" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    int CTrackManiaRaceRules::GetUiScoresPointsLimit () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UiScoresPointsLimit" );
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

    void CTrackManiaRaceRules::SetUiScoresPointsLimit ( int value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UiScoresPointsLimit" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    bool CTrackManiaRaceRules::GetUiStuntsMode () const
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UiStuntsMode" );
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

    void CTrackManiaRaceRules::SetUiStuntsMode ( bool value )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "UiStuntsMode" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, &value );
    }

    void CTrackManiaRaceRules::Discard ( class CTmRaceRulesEvent* pEvent )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Discard" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pEvent ) );
        CallMethod ( &stack, NULL );
    }

    void CTrackManiaRaceRules::FakePlayers_Add ( StringW wstrNickName )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FakePlayers_Add" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( wstrNickName );
        CallMethod ( &stack, NULL );
    }

    void CTrackManiaRaceRules::FakePlayers_Remove ( class CGamePlayerInfo* pUser )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FakePlayers_Remove" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pUser ) );
        CallMethod ( &stack, NULL );
    }

    void CTrackManiaRaceRules::FakePlayers_RemoveAll ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "FakePlayers_RemoveAll" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CTrackManiaRaceRules::Ladder_ComputeRank ( uint sortOrder )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Ladder_ComputeRank" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( sortOrder );
        CallMethod ( &stack, NULL );
    }

    void CTrackManiaRaceRules::PassOn ( class CTmRaceRulesEvent* pEvent )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "PassOn" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( *reinterpret_cast < CMwNod** > ( &pEvent ) );
        CallMethod ( &stack, NULL );
    }

    void CTrackManiaRaceRules::Scores_Clear ()
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Scores_Clear" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        CallMethod ( &stack, NULL );
    }

    void CTrackManiaRaceRules::Scores_Sort ( uint sortOrder )
    {
        static CMwMemberInfo* pMemberInfo = GetClassInfo ()->GetMemberInfo ( "Scores_Sort" );
        CMwStack stack;
        stack.Push ( pMemberInfo );
        stack.Push ( sortOrder );
        CallMethod ( &stack, NULL );
    }

}
