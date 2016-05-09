        enum { CLASSID = 0x24041000 };

        static CTrackManiaMatchSettings* CreateInstance ();

        enum eHotSeat_GameMode
        {
            HOTSEAT_GAMEMODE_HOTSEAT_TIME,
            HOTSEAT_GAMEMODE_HOTSEAT_ATTEMPTS
        };
        static std::wstring     HotSeat_GameModeToString                ( eHotSeat_GameMode value );
        static eHotSeat_GameMode ParseHotSeat_GameMode                   ( const std::wstring& wstrName );

        enum eNetwork_GameMode
        {
            NETWORK_GAMEMODE_GAMEMODE_SCRIPT,
            NETWORK_GAMEMODE_GAMEMODE_ROUNDS,
            NETWORK_GAMEMODE_GAMEMODE_TIME_ATTACK,
            NETWORK_GAMEMODE_GAMEMODE_TEAM,
            NETWORK_GAMEMODE_GAMEMODE_LAPS,
            NETWORK_GAMEMODE_GAMEMODE_CUP,
            NETWORK_GAMEMODE_GAMEMODE_STUNTS
        };
        static std::wstring     Network_GameModeToString                ( eNetwork_GameMode value );
        static eNetwork_GameMode ParseNetwork_GameMode                   ( const std::wstring& wstrName );

        List < nodptr<class CGameCtnChallenge> >& GetChallengeInfos                       () const;
        void                    SetChallengeInfos                       ( List < nodptr<class CGameCtnChallenge> >& value );

        StringW                 GetComment                              () const;
        void                    SetComment                              ( StringW value );

        eHotSeat_GameMode       GetHotSeat_GameMode                     () const;
        void                    SetHotSeat_GameMode                     ( eHotSeat_GameMode value );

        uint                    GetHotSeat_Rounds                       () const;
        void                    SetHotSeat_Rounds                       ( uint value );

        uint                    GetHotSeat_TimeLimit                    () const;
        void                    SetHotSeat_TimeLimit                    ( uint value );

        bool                    GetIsHotSeat                            () const;
        void                    SetIsHotSeat                            ( bool value );

        bool                    GetIsInternet                           () const;
        void                    SetIsInternet                           ( bool value );

        bool                    GetIsLan                                () const;
        void                    SetIsLan                                ( bool value );

        bool                    GetIsSolo                               () const;
        void                    SetIsSolo                               ( bool value );

        uint                    GetNbChallenges                         () const;
        void                    SetNbChallenges                         ( uint value );

        eNetwork_GameMode       GetNetwork_GameMode                     () const;
        void                    SetNetwork_GameMode                     ( eNetwork_GameMode value );

        bool                    GetRandomMapOrder                       () const;
        void                    SetRandomMapOrder                       ( bool value );

        uint                    GetSortIndex                            () const;
        void                    SetSortIndex                            ( uint value );

