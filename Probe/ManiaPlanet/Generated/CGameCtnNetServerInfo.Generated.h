        enum { CLASSID = 0x030BB000 };

        static CGameCtnNetServerInfo* CreateInstance ();

        enum eLadderMode
        {
            LADDERMODE_NO_LADDER,
            LADDERMODE_FORCED
        };
        static std::wstring     LadderModeToString                      ( eLadderMode value );
        static eLadderMode      ParseLadderMode                         ( const std::wstring& wstrName );

        enum eNextLadderMode
        {
            NEXTLADDERMODE_NO_LADDER,
            NEXTLADDERMODE_FORCED
        };
        static std::wstring     NextLadderModeToString                  ( eNextLadderMode value );
        static eNextLadderMode  ParseNextLadderMode                     ( const std::wstring& wstrName );

        enum eNextVehicleNetQuality
        {
            NEXTVEHICLENETQUALITY_LOW,
            NEXTVEHICLENETQUALITY_HIGH
        };
        static std::wstring     NextVehicleNetQualityToString           ( eNextVehicleNetQuality value );
        static eNextVehicleNetQuality ParseNextVehicleNetQuality              ( const std::wstring& wstrName );

        enum eValidationAction_Invalid
        {
            VALIDATIONACTION_INVALID_NONE,
            VALIDATIONACTION_INVALID_LOG,
            VALIDATIONACTION_INVALID_RESET_SCORE,
            VALIDATIONACTION_INVALID_BAN
        };
        static std::wstring     ValidationAction_InvalidToString        ( eValidationAction_Invalid value );
        static eValidationAction_Invalid ParseValidationAction_Invalid           ( const std::wstring& wstrName );

        enum eValidationAction_NA
        {
            VALIDATIONACTION_NA_NONE,
            VALIDATIONACTION_NA_LOG,
            VALIDATIONACTION_NA_RESET_SCORE,
            VALIDATIONACTION_NA_BAN
        };
        static std::wstring     ValidationAction_NAToString             ( eValidationAction_NA value );
        static eValidationAction_NA ParseValidationAction_NA                ( const std::wstring& wstrName );

        enum eValidationMode
        {
            VALIDATIONMODE_REFEREEMODE_TOP3,
            VALIDATIONMODE_REFEREEMODE_ALL
        };
        static std::wstring     ValidationModeToString                  ( eValidationMode value );
        static eValidationMode  ParseValidationMode                     ( const std::wstring& wstrName );

        bool                    GetAllowDownload                        () const;
        void                    SetAllowDownload                        ( bool value );

        StringA                 GetBuddiesCount                         () const;
        void                    SetBuddiesCount                         ( StringA value );

        StringW                 GetComment                              () const;
        void                    SetComment                              ( StringW value );

        bool                    GetDisableHorns                         () const;
        void                    SetDisableHorns                         ( bool value );

        StringA                 GetGameStateName                        () const;
        void                    SetGameStateName                        ( StringA value );

        bool                    GetHasBuddies                           () const;
        void                    SetHasBuddies                           ( bool value );

        uint                    GetHideServer                           () const;
        void                    SetHideServer                           ( uint value );

        bool                    GetIsBuddy                              () const;
        void                    SetIsBuddy                              ( bool value );

        bool                    GetIsFavourite                          () const;
        void                    SetIsFavourite                          ( bool value );

        bool                    GetIsWarmUp                             () const;
        void                    SetIsWarmUp                             ( bool value );

        eLadderMode             GetLadderMode                           () const;
        void                    SetLadderMode                           ( eLadderMode value );

        float                   GetLadderServerLimitMax                 () const;
        void                    SetLadderServerLimitMax                 ( float value );

        float                   GetLadderServerLimitMin                 () const;
        void                    SetLadderServerLimitMin                 ( float value );

        StringW                 GetListName                             () const;
        void                    SetListName                             ( StringW value );

        uint                    GetMaxPlayerCount                       () const;
        void                    SetMaxPlayerCount                       ( uint value );

        uint                    GetMaxSpectatorCount                    () const;
        void                    SetMaxSpectatorCount                    ( uint value );

        uint                    GetNbChallenges                         () const;
        void                    SetNbChallenges                         ( uint value );

        eNextLadderMode         GetNextLadderMode                       () const;
        void                    SetNextLadderMode                       ( eNextLadderMode value );

        uint                    GetNextMaxPlayerCount                   () const;
        void                    SetNextMaxPlayerCount                   ( uint value );

        uint                    GetNextMaxSpectatorCount                () const;
        void                    SetNextMaxSpectatorCount                ( uint value );

        eNextVehicleNetQuality  GetNextVehicleNetQuality                () const;
        void                    SetNextVehicleNetQuality                ( eNextVehicleNetQuality value );

        uint                    GetPlayerCount                          () const;
        void                    SetPlayerCount                          ( uint value );

        StringA                 GetPlayerCountOverMax                   () const;
        void                    SetPlayerCountOverMax                   ( StringA value );

        StringW                 GetPlayerName                           () const;
        void                    SetPlayerName                           ( StringW value );

        float                   GetPlayersLevelAvg                      () const;
        void                    SetPlayersLevelAvg                      ( float value );

        float                   GetPlayersLevelMax                      () const;
        void                    SetPlayersLevelMax                      ( float value );

        float                   GetPlayersLevelMin                      () const;
        void                    SetPlayersLevelMin                      ( float value );

        uint                    GetPlaygroundRoundNum                   () const;
        void                    SetPlaygroundRoundNum                   ( uint value );

        uint                    GetPlaygroundRoundNumToPlay             () const;
        void                    SetPlaygroundRoundNumToPlay             ( uint value );

        uint                    GetServerLevel                          () const;
        void                    SetServerLevel                          ( uint value );

        StringW                 GetServerName                           () const;
        void                    SetServerName                           ( StringW value );

        StringA                 GetServerVersionBuild                   () const;
        void                    SetServerVersionBuild                   ( StringA value );

        uint                    GetSpectatorCount                       () const;
        void                    SetSpectatorCount                       ( uint value );

        class CGameTeamProfile* GetTeamProfile1                         () const;
        void                    SetTeamProfile1                         ( class CGameTeamProfile* value );

        class CGameTeamProfile* GetTeamProfile2                         () const;
        void                    SetTeamProfile2                         ( class CGameTeamProfile* value );

        eValidationAction_Invalid GetValidationAction_Invalid             () const;
        void                    SetValidationAction_Invalid             ( eValidationAction_Invalid value );

        eValidationAction_NA    GetValidationAction_NA                  () const;
        void                    SetValidationAction_NA                  ( eValidationAction_NA value );

        eValidationMode         GetValidationMode                       () const;
        void                    SetValidationMode                       ( eValidationMode value );

