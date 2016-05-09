        enum { CLASSID = 0x0302E000 };

        static CGameNetServerInfo* CreateInstance ();

        enum ePingEnum
        {
            PINGENUM_0,
            PINGENUM_1,
            PINGENUM_2,
            PINGENUM_3,
            PINGENUM_4
        };
        static std::wstring     PingEnumToString                        ( ePingEnum value );
        static ePingEnum        ParsePingEnum                           ( const std::wstring& wstrName );

        bool                    GetAcceptReferees                       () const;
        void                    SetAcceptReferees                       ( bool value );

        StringA                 GetAdvertisingSuffix                    () const;
        void                    SetAdvertisingSuffix                    ( StringA value );

        bool                    GetCallVoteEnabled                      () const;
        void                    SetCallVoteEnabled                      ( bool value );

        uint                    GetChallengeSequenceNumber              () const;
        void                    SetChallengeSequenceNumber              ( uint value );

        uint                    GetDownloadRate                         () const;
        void                    SetDownloadRate                         ( uint value );

        bool                    GetIsIdle                               () const;
        void                    SetIsIdle                               ( bool value );

        bool                    GetIsOnline                             () const;
        void                    SetIsOnline                             ( bool value );

        bool                    GetIsPrivate                            () const;
        void                    SetIsPrivate                            ( bool value );

        bool                    GetIsPrivateForSpectator                () const;
        void                    SetIsPrivateForSpectator                ( bool value );

        bool                    GetIsServer                             () const;
        void                    SetIsServer                             ( bool value );

        uint                    GetLadderMatchId                        () const;
        void                    SetLadderMatchId                        ( uint value );

        uint                    GetPing                                 () const;
        void                    SetPing                                 ( uint value );

        ePingEnum               GetPingEnum                             () const;
        void                    SetPingEnum                             ( ePingEnum value );

        bool                    GetQuickInfoReceived                    () const;
        void                    SetQuickInfoReceived                    ( bool value );

        uint                    GetRefereesCount                        () const;
        void                    SetRefereesCount                        ( uint value );

        uint                    GetRoundTrip                            () const;
        void                    SetRoundTrip                            ( uint value );

        StringA                 GetServerHostName                       () const;
        void                    SetServerHostName                       ( StringA value );

        uint                    GetState                                () const;
        void                    SetState                                ( uint value );

        uint                    GetUploadRate                           () const;
        void                    SetUploadRate                           ( uint value );

