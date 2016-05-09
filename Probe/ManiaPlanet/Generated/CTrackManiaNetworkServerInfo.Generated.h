        enum { CLASSID = 0x24035000 };

        static CTrackManiaNetworkServerInfo* CreateInstance ();

        enum eCurGameMode
        {
            CURGAMEMODE_GAMEMODE_SCRIPT,
            CURGAMEMODE_GAMEMODE_ROUNDS,
            CURGAMEMODE_GAMEMODE_TIME_ATTACK,
            CURGAMEMODE_GAMEMODE_TEAM,
            CURGAMEMODE_GAMEMODE_LAPS,
            CURGAMEMODE_GAMEMODE_CUP,
            CURGAMEMODE_GAMEMODE_STUNTS
        };
        static std::wstring     CurGameModeToString                     ( eCurGameMode value );
        static eCurGameMode     ParseCurGameMode                        ( const std::wstring& wstrName );

        enum eCurGameMode_Script
        {
            CURGAMEMODE_SCRIPT_SCRIPT,
            CURGAMEMODE_SCRIPT_ROUNDS,
            CURGAMEMODE_SCRIPT_TIMEATTACK,
            CURGAMEMODE_SCRIPT_TEAM,
            CURGAMEMODE_SCRIPT_LAPS,
            CURGAMEMODE_SCRIPT_CUP,
            CURGAMEMODE_SCRIPT_STUNTS
        };
        static std::wstring     CurGameMode_ScriptToString              ( eCurGameMode_Script value );
        static eCurGameMode_Script ParseCurGameMode_Script                 ( const std::wstring& wstrName );

        enum eNextGameMode
        {
            NEXTGAMEMODE_GAMEMODE_SCRIPT,
            NEXTGAMEMODE_GAMEMODE_ROUNDS,
            NEXTGAMEMODE_GAMEMODE_TIME_ATTACK,
            NEXTGAMEMODE_GAMEMODE_TEAM,
            NEXTGAMEMODE_GAMEMODE_LAPS,
            NEXTGAMEMODE_GAMEMODE_CUP,
            NEXTGAMEMODE_GAMEMODE_STUNTS
        };
        static std::wstring     NextGameModeToString                    ( eNextGameMode value );
        static eNextGameMode    ParseNextGameMode                       ( const std::wstring& wstrName );

        enum eNextGameMode_Script
        {
            NEXTGAMEMODE_SCRIPT_SCRIPT,
            NEXTGAMEMODE_SCRIPT_ROUNDS,
            NEXTGAMEMODE_SCRIPT_TIMEATTACK,
            NEXTGAMEMODE_SCRIPT_TEAM,
            NEXTGAMEMODE_SCRIPT_LAPS,
            NEXTGAMEMODE_SCRIPT_CUP,
            NEXTGAMEMODE_SCRIPT_STUNTS
        };
        static std::wstring     NextGameMode_ScriptToString             ( eNextGameMode_Script value );
        static eNextGameMode_Script ParseNextGameMode_Script                ( const std::wstring& wstrName );

        uint                    GetCurAllWarmUpDuration                 () const;
        void                    SetCurAllWarmUpDuration                 ( uint value );

        uint                    GetCurChatTime                          () const;
        void                    SetCurChatTime                          ( uint value );

        bool                    GetCurDisableRespawn                    () const;
        void                    SetCurDisableRespawn                    ( bool value );

        uint                    GetCurEswcCupNbWinners                  () const;
        void                    SetCurEswcCupNbWinners                  ( uint value );

        uint                    GetCurEswcCupPointsLimit                () const;
        void                    SetCurEswcCupPointsLimit                ( uint value );

        uint                    GetCurEswcCupRoundsPerChallenge         () const;
        void                    SetCurEswcCupRoundsPerChallenge         ( uint value );

        uint                    GetCurEswcCupWarmUpDuration             () const;
        void                    SetCurEswcCupWarmUpDuration             ( uint value );

        uint                    GetCurFinishTimeout                     () const;
        void                    SetCurFinishTimeout                     ( uint value );

        uint                    GetCurForceMaxOpponents                 () const;
        void                    SetCurForceMaxOpponents                 ( uint value );

        eCurGameMode            GetCurGameMode                          () const;
        void                    SetCurGameMode                          ( eCurGameMode value );

        StringW                 GetCurGameModeStr                       () const;
        void                    SetCurGameModeStr                       ( StringW value );

        eCurGameMode_Script     GetCurGameMode_Script                   () const;
        void                    SetCurGameMode_Script                   ( eCurGameMode_Script value );

        uint                    GetCurLapsNbLaps                        () const;
        void                    SetCurLapsNbLaps                        ( uint value );

        uint                    GetCurLapsTimeLimit                     () const;
        void                    SetCurLapsTimeLimit                     ( uint value );

        uint                    GetCurRoundForcedLaps                   () const;
        void                    SetCurRoundForcedLaps                   ( uint value );

        uint                    GetCurRoundPointsLimit                  () const;
        void                    SetCurRoundPointsLimit                  ( uint value );

        uint                    GetCurRoundPointsLimitNewRules          () const;
        void                    SetCurRoundPointsLimitNewRules          ( uint value );

        bool                    GetCurRoundUseNewRules                  () const;
        void                    SetCurRoundUseNewRules                  ( bool value );

        StringW                 GetCurScriptRelName                     () const;
        void                    SetCurScriptRelName                     ( StringW value );

        uint                    GetCurTeamMaxPoints                     () const;
        void                    SetCurTeamMaxPoints                     ( uint value );

        uint                    GetCurTeamPointsLimit                   () const;
        void                    SetCurTeamPointsLimit                   ( uint value );

        uint                    GetCurTeamPointsLimitNewRules           () const;
        void                    SetCurTeamPointsLimitNewRules           ( uint value );

        bool                    GetCurTeamUseNewRules                   () const;
        void                    SetCurTeamUseNewRules                   ( bool value );

        uint                    GetCurTimeAttackLimit                   () const;
        void                    SetCurTimeAttackLimit                   ( uint value );

        uint                    GetCurTimeAttackSynchStartPeriod        () const;
        void                    SetCurTimeAttackSynchStartPeriod        ( uint value );

        uint                    GetNextAllWarmUpDuration                () const;
        void                    SetNextAllWarmUpDuration                ( uint value );

        uint                    GetNextChatTime                         () const;
        void                    SetNextChatTime                         ( uint value );

        bool                    GetNextDisableRespawn                   () const;
        void                    SetNextDisableRespawn                   ( bool value );

        uint                    GetNextEswcCupNbWinners                 () const;
        void                    SetNextEswcCupNbWinners                 ( uint value );

        uint                    GetNextEswcCupPointsLimit               () const;
        void                    SetNextEswcCupPointsLimit               ( uint value );

        uint                    GetNextEswcCupRoundsPerChallenge        () const;
        void                    SetNextEswcCupRoundsPerChallenge        ( uint value );

        uint                    GetNextEswcCupWarmUpDuration            () const;
        void                    SetNextEswcCupWarmUpDuration            ( uint value );

        uint                    GetNextFinishTimeout                    () const;
        void                    SetNextFinishTimeout                    ( uint value );

        bool                    GetNextForceMaxOpponents                () const;
        void                    SetNextForceMaxOpponents                ( bool value );

        eNextGameMode           GetNextGameMode                         () const;
        void                    SetNextGameMode                         ( eNextGameMode value );

        eNextGameMode_Script    GetNextGameMode_Script                  () const;
        void                    SetNextGameMode_Script                  ( eNextGameMode_Script value );

        uint                    GetNextLapsNbLaps                       () const;
        void                    SetNextLapsNbLaps                       ( uint value );

        uint                    GetNextLapsTimeLimit                    () const;
        void                    SetNextLapsTimeLimit                    ( uint value );

        uint                    GetNextRoundForcedLaps                  () const;
        void                    SetNextRoundForcedLaps                  ( uint value );

        uint                    GetNextRoundPointsLimit                 () const;
        void                    SetNextRoundPointsLimit                 ( uint value );

        uint                    GetNextRoundPointsLimitNewRules         () const;
        void                    SetNextRoundPointsLimitNewRules         ( uint value );

        bool                    GetNextRoundUseNewRules                 () const;
        void                    SetNextRoundUseNewRules                 ( bool value );

        StringW                 GetNextScriptRelName                    () const;
        void                    SetNextScriptRelName                    ( StringW value );

        uint                    GetNextTeamMaxPoints                    () const;
        void                    SetNextTeamMaxPoints                    ( uint value );

        uint                    GetNextTeamPointsLimit                  () const;
        void                    SetNextTeamPointsLimit                  ( uint value );

        uint                    GetNextTeamPointsLimitNewRules          () const;
        void                    SetNextTeamPointsLimitNewRules          ( uint value );

        bool                    GetNextTeamUseNewRules                  () const;
        void                    SetNextTeamUseNewRules                  ( bool value );

        uint                    GetNextTimeAttackLimit                  () const;
        void                    SetNextTimeAttackLimit                  ( uint value );

        uint                    GetNextTimeAttackSynchStartPeriod       () const;
        void                    SetNextTimeAttackSynchStartPeriod       ( uint value );

