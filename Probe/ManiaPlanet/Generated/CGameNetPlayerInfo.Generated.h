        enum { CLASSID = 0x0300E000 };

        static CGameNetPlayerInfo* CreateInstance ();

        enum ePlayerType
        {
            PLAYERTYPE_HUMAN,
            PLAYERTYPE_COMPUTER,
            PLAYERTYPE_NET,
            PLAYERTYPE_SPECTATOR
        };
        static std::wstring     PlayerTypeToString                      ( ePlayerType value );
        static ePlayerType      ParsePlayerType                         ( const std::wstring& wstrName );

        enum eSpectatorMode
        {
            SPECTATORMODE_VOID,
            SPECTATORMODE_WATCHER,
            SPECTATORMODE_LOCALWATCHER,
            SPECTATORMODE_TARGET
        };
        static std::wstring     SpectatorModeToString                   ( eSpectatorMode value );
        static eSpectatorMode   ParseSpectatorMode                      ( const std::wstring& wstrName );

        uint                    GetChallengeSequenceNumber              () const;
        void                    SetChallengeSequenceNumber              ( uint value );

        bool                    GetCustomDataDeactivated                () const;
        void                    SetCustomDataDeactivated                ( bool value );

        uint                    GetDownloadRate                         () const;
        void                    SetDownloadRate                         ( uint value );

        StringA                 GetLanguage                             () const;
        void                    SetLanguage                             ( StringA value );

        uint                    GetLatestNetUpdate                      () const;
        void                    SetLatestNetUpdate                      ( uint value );

        uint                    GetLiveUpdate_Counter                   () const;
        void                    SetLiveUpdate_Counter                   ( uint value );

        bool                    GetLive_IsRegisteredToMasterServer      () const;
        void                    SetLive_IsRegisteredToMasterServer      ( bool value );

        uint                    GetLive_UpdateLastTime                  () const;
        void                    SetLive_UpdateLastTime                  ( uint value );

        uint                    GetLive_UpdatingCount                   () const;
        void                    SetLive_UpdatingCount                   ( uint value );

        StringA                 GetLogin                                () const;
        void                    SetLogin                                ( StringA value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        uint                    GetNbSpectators                         () const;
        void                    SetNbSpectators                         ( uint value );

        ePlayerType             GetPlayerType                           () const;
        void                    SetPlayerType                           ( ePlayerType value );

        eSpectatorMode          GetSpectatorMode                        () const;
        void                    SetSpectatorMode                        ( eSpectatorMode value );

        uint                    GetState                                () const;
        void                    SetState                                ( uint value );

        uint                    GetUploadRate                           () const;
        void                    SetUploadRate                           ( uint value );

