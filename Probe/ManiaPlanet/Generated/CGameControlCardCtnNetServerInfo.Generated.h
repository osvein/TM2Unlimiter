        enum { CLASSID = 0x030BF000 };

        static CGameControlCardCtnNetServerInfo* CreateInstance ();

        enum eLadderServerType
        {
            LADDERSERVERTYPE,
            LADDERSERVERTYPE_SERVERLEVEL_AMATEURS_PLACE,
            LADDERSERVERTYPE_SERVERLEVEL_SERIOUS_CHALLENGERS,
            LADDERSERVERTYPE_SERVERLEVEL_COMPETITIVE_RACERS,
            LADDERSERVERTYPE_SERVERLEVEL_PRO_RACING,
            LADDERSERVERTYPE_SERVERLEVEL_RACES_OF_CHAMPIONS,
            LADDERSERVERTYPE_SERVERLEVEL_BEGINNERS
        };
        static std::wstring     LadderServerTypeToString                ( eLadderServerType value );
        static eLadderServerType ParseLadderServerType                   ( const std::wstring& wstrName );

        class CPlugBitmap*      GetBmpBannerEnv                         () const;
        void                    SetBmpBannerEnv                         ( class CPlugBitmap* value );

        bool                    GetHaveBuddies                          () const;
        void                    SetHaveBuddies                          ( bool value );

        bool                    GetIsAllowingDownload                   () const;
        void                    SetIsAllowingDownload                   ( bool value );

        bool                    GetIsBuddy                              () const;
        void                    SetIsBuddy                              ( bool value );

        bool                    GetIsFull                               () const;
        void                    SetIsFull                               ( bool value );

        bool                    GetIsFullSpectator                      () const;
        void                    SetIsFullSpectator                      ( bool value );

        bool                    GetIsPrivate                            () const;
        void                    SetIsPrivate                            ( bool value );

        bool                    GetIsPrivateForSpectator                () const;
        void                    SetIsPrivateForSpectator                ( bool value );

        uint                    GetLadderMode                           () const;
        void                    SetLadderMode                           ( uint value );

        eLadderServerType       GetLadderServerType                     () const;
        void                    SetLadderServerType                     ( eLadderServerType value );

        uint                    GetLevel                                () const;
        void                    SetLevel                                ( uint value );

        class CPlugBitmap*      GetLogo                                 () const;
        void                    SetLogo                                 ( class CPlugBitmap* value );

        float                   GetManiaStarsRatio                      () const;
        void                    SetManiaStarsRatio                      ( float value );

        uint                    GetPlayerStars                          () const;
        void                    SetPlayerStars                          ( uint value );

        float                   GetPlayersCountRatio                    () const;
        void                    SetPlayersCountRatio                    ( float value );

        uint                    GetRaceType                             () const;
        void                    SetRaceType                             ( uint value );

        float                   GetSpectatorsCountRatio                 () const;
        void                    SetSpectatorsCountRatio                 ( float value );

        uint                    GetState                                () const;
        void                    SetState                                ( uint value );

        StringA                 GetStrBuddiesCount                      () const;
        void                    SetStrBuddiesCount                      ( StringA value );

        StringW                 GetStrComment                           () const;
        void                    SetStrComment                           ( StringW value );

        StringW                 GetStrHostName                          () const;
        void                    SetStrHostName                          ( StringW value );

        StringW                 GetStrLadderServerLimitMax              () const;
        void                    SetStrLadderServerLimitMax              ( StringW value );

        StringW                 GetStrLadderServerLimitMin              () const;
        void                    SetStrLadderServerLimitMin              ( StringW value );

        StringW                 GetStrName                              () const;
        void                    SetStrName                              ( StringW value );

        StringW                 GetStrPath                              () const;
        void                    SetStrPath                              ( StringW value );

        StringW                 GetStrPlayerName                        () const;
        void                    SetStrPlayerName                        ( StringW value );

        StringA                 GetStrPlayersCount                      () const;
        void                    SetStrPlayersCount                      ( StringA value );

        StringA                 GetStrPlayersCountMax                   () const;
        void                    SetStrPlayersCountMax                   ( StringA value );

        StringW                 GetStrPureName                          () const;
        void                    SetStrPureName                          ( StringW value );

        StringW                 GetStrPureServerName                    () const;
        void                    SetStrPureServerName                    ( StringW value );

        StringW                 GetStrServerName                        () const;
        void                    SetStrServerName                        ( StringW value );

        StringA                 GetStrSpectatorsCount                   () const;
        void                    SetStrSpectatorsCount                   ( StringA value );

        StringA                 GetStrSpectatorsCountMax                () const;
        void                    SetStrSpectatorsCountMax                ( StringA value );

        StringA                 GetStrValue                             () const;
        void                    SetStrValue                             ( StringA value );

        uint                    GetVehicleQuality                       () const;
        void                    SetVehicleQuality                       ( uint value );

        void                    OnChangeBuddyState                      ();
        void                    OnChangeBuddyState_SetBuddy             ();
        void                    OnChangeBuddyState_SetNotBuddy          ();
        void                    OnChangeFavouriteState                  ();
        void                    OnChangeFavouriteState_SetFavourite     ();
        void                    OnChangeFavouriteState_SetNotFavourite  ();
