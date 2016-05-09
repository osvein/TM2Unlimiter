        enum { CLASSID = 0x24017000 };

        static CTrackManiaRaceRules* CreateInstance ();

        enum eRespawnBehaviour
        {
            RESPAWNBEHAVIOUR_NORMAL,
            RESPAWNBEHAVIOUR_DONOTHING,
            RESPAWNBEHAVIOUR_GIVEUPBEFOREFIRSTCHECKPOINT,
            RESPAWNBEHAVIOUR_ALWAYSGIVEUP
        };
        static std::wstring     RespawnBehaviourToString                ( eRespawnBehaviour value );
        static eRespawnBehaviour ParseRespawnBehaviour                   ( const std::wstring& wstrName );

        enum eUiRaceChrono
        {
            UIRACECHRONO_AUTO,
            UIRACECHRONO_HIDDEN,
            UIRACECHRONO_COUNTDOWN,
            UIRACECHRONO_NORMAL
        };
        static std::wstring     UiRaceChronoToString                    ( eUiRaceChrono value );
        static eUiRaceChrono    ParseUiRaceChrono                       ( const std::wstring& wstrName );

        List < nodptr<class CTmRaceRulesPlayer> >& GetConnectedPlayers                     () const;
        void                    SetConnectedPlayers                     ( List < nodptr<class CTmRaceRulesPlayer> >& value );

        int                     GetCutOffTimeLimit                      () const;
        void                    SetCutOffTimeLimit                      ( int value );

        int                     GetForceMaxOpponents                    () const;
        void                    SetForceMaxOpponents                    ( int value );

        bool                    GetHideOpponents                        () const;
        void                    SetHideOpponents                        ( bool value );

        bool                    GetIndependantLaps                      () const;
        void                    SetIndependantLaps                      ( bool value );

        int                     GetNbLaps                               () const;
        void                    SetNbLaps                               ( int value );

        List < nodptr<class CTmRaceRulesEvent> >& GetPendingEvents                        () const;
        void                    SetPendingEvents                        ( List < nodptr<class CTmRaceRulesEvent> >& value );

        List < nodptr<class CTmRaceRulesPlayer> >& GetPlayers                              () const;
        void                    SetPlayers                              ( List < nodptr<class CTmRaceRulesPlayer> >& value );

        List < nodptr<class CTmRaceRulesPlayer> >& GetPlayersRacing                        () const;
        void                    SetPlayersRacing                        ( List < nodptr<class CTmRaceRulesPlayer> >& value );

        List < nodptr<class CTmRaceRulesPlayer> >& GetPlayersWaiting                       () const;
        void                    SetPlayersWaiting                       ( List < nodptr<class CTmRaceRulesPlayer> >& value );

        eRespawnBehaviour       GetRespawnBehaviour                     () const;
        void                    SetRespawnBehaviour                     ( eRespawnBehaviour value );

        List < nodptr<class CTmRaceRulesScore> >& GetScores                               () const;
        void                    SetScores                               ( List < nodptr<class CTmRaceRulesScore> >& value );

        bool                    GetUiDisplayStuntsNames                 () const;
        void                    SetUiDisplayStuntsNames                 ( bool value );

        eUiRaceChrono           GetUiRaceChrono                         () const;
        void                    SetUiRaceChrono                         ( eUiRaceChrono value );

        bool                    GetUiRounds                             () const;
        void                    SetUiRounds                             ( bool value );

        int                     GetUiScoresPointsLimit                  () const;
        void                    SetUiScoresPointsLimit                  ( int value );

        bool                    GetUiStuntsMode                         () const;
        void                    SetUiStuntsMode                         ( bool value );

        void                    Discard                                 ( class CTmRaceRulesEvent* pEvent );
        void                    FakePlayers_Add                         ( StringW wstrNickName );
        void                    FakePlayers_Remove                      ( class CGamePlayerInfo* pUser );
        void                    FakePlayers_RemoveAll                   ();
        void                    Ladder_ComputeRank                      ( uint sortOrder );
        void                    PassOn                                  ( class CTmRaceRulesEvent* pEvent );
        void                    Scores_Clear                            ();
        void                    Scores_Sort                             ( uint sortOrder );
