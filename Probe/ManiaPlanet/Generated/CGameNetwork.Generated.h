        enum { CLASSID = 0x0300F000 };

        static CGameNetwork*    CreateInstance ();

        uint                    GetCallVotePercent                      () const;
        void                    SetCallVotePercent                      ( uint value );

        uint                    GetCallVoteTimeOut                      () const;
        void                    SetCallVoteTimeOut                      ( uint value );

        uint                    GetCanDoUDP                             () const;
        void                    SetCanDoUDP                             ( uint value );

        List < StringW >&       GetChatHistoryLines                     () const;
        void                    SetChatHistoryLines                     ( List < StringW >& value );

        List < StringW >&       GetChatHistoryText                      () const;
        void                    SetChatHistoryText                      ( List < StringW >& value );

        List < uint >&          GetChatHistoryUid                       () const;
        void                    SetChatHistoryUid                       ( List < uint >& value );

        class CNetClient*       GetClient                               () const;
        void                    SetClient                               ( class CNetClient* value );

        class CNetFileTransfer* GetFileTransfer                         () const;
        void                    SetFileTransfer                         ( class CNetFileTransfer* value );

        bool                    GetInCallvote                           () const;
        void                    SetInCallvote                           ( bool value );

        bool                    GetIsEnabled                            () const;
        void                    SetIsEnabled                            ( bool value );

        bool                    GetIsInternet                           () const;
        void                    SetIsInternet                           ( bool value );

        bool                    GetIsServer                             () const;
        void                    SetIsServer                             ( bool value );

        float                   GetLatestEpsilon                        () const;
        void                    SetLatestEpsilon                        ( float value );

        int                     GetLatestGamePing                       () const;
        void                    SetLatestGamePing                       ( int value );

        int                     GetLatestHumanPing                      () const;
        void                    SetLatestHumanPing                      ( int value );

        class CNetMasterServer* GetMasterServer                         () const;
        void                    SetMasterServer                         ( class CNetMasterServer* value );

        uint                    GetNbrAcceptPerSecond                   () const;
        void                    SetNbrAcceptPerSecond                   ( uint value );

        uint                    GetNbrConnectionsDisconnecting          () const;
        void                    SetNbrConnectionsDisconnecting          ( uint value );

        uint                    GetNbrConnectionsDone                   () const;
        void                    SetNbrConnectionsDone                   ( uint value );

        uint                    GetNbrConnectionsInProgress             () const;
        void                    SetNbrConnectionsInProgress             ( uint value );

        uint                    GetNbrConnectionsPending                () const;
        void                    SetNbrConnectionsPending                ( uint value );

        uint                    GetNbrNewConnectionPerSecond            () const;
        void                    SetNbrNewConnectionPerSecond            ( uint value );

        uint                    GetNbrTotalConnection                   () const;
        void                    SetNbrTotalConnection                   ( uint value );

        List < nodptr<class CGameNetServerInfo> >& GetOnlinePlayers                        () const;
        void                    SetOnlinePlayers                        ( List < nodptr<class CGameNetServerInfo> >& value );

        List < nodptr<class CGameNetServerInfo> >& GetOnlineServers                        () const;
        void                    SetOnlineServers                        ( List < nodptr<class CGameNetServerInfo> >& value );

        List < nodptr<class CSystemPackDesc> >& GetPackDescs                            () const;
        void                    SetPackDescs                            ( List < nodptr<class CSystemPackDesc> >& value );

        float                   GetPacketLossRate                       () const;
        void                    SetPacketLossRate                       ( float value );

        List < nodptr<class CGameNetPlayerInfo> >& GetPlayerInfos                          () const;
        void                    SetPlayerInfos                          ( List < nodptr<class CGameNetPlayerInfo> >& value );

        List < nodptr<class CGameNetPlayerInfo> >& GetPlayingPlayers                       () const;
        void                    SetPlayingPlayers                       ( List < nodptr<class CGameNetPlayerInfo> >& value );

        uint                    GetRecvNetRate                          () const;
        void                    SetRecvNetRate                          ( uint value );

        StringA                 GetRecvNetRatePretty                    () const;
        void                    SetRecvNetRatePretty                    ( StringA value );

        uint                    GetSendNetRate                          () const;
        void                    SetSendNetRate                          ( uint value );

        StringA                 GetSendNetRatePretty                    () const;
        void                    SetSendNetRatePretty                    ( StringA value );

        class CNetServer*       GetServer                               () const;
        void                    SetServer                               ( class CNetServer* value );

        class CGameNetServerInfo* GetServerInfo                           () const;
        void                    SetServerInfo                           ( class CGameNetServerInfo* value );

        float                   GetSmoothedEpsilon                      () const;
        void                    SetSmoothedEpsilon                      ( float value );

        uint                    GetTcpReceivingSize                     () const;
        void                    SetTcpReceivingSize                     ( uint value );

        uint                    GetTcpSendingSize                       () const;
        void                    SetTcpSendingSize                       ( uint value );

        uint                    GetTotalHttpReceivingSize               () const;
        void                    SetTotalHttpReceivingSize               ( uint value );

        uint                    GetTotalReceivingSize                   () const;
        void                    SetTotalReceivingSize                   ( uint value );

        uint                    GetTotalSendingSize                     () const;
        void                    SetTotalSendingSize                     ( uint value );

        uint                    GetTotalTcpUdpReceivingSize             () const;
        void                    SetTotalTcpUdpReceivingSize             ( uint value );

        class CGamePlaygroundUIConfigMgr* GetUIConfigMgr                          () const;
        void                    SetUIConfigMgr                          ( class CGamePlaygroundUIConfigMgr* value );

        uint                    GetUdpReceivingSize                     () const;
        void                    SetUdpReceivingSize                     ( uint value );

        uint                    GetUdpSendingSize                       () const;
        void                    SetUdpSendingSize                       ( uint value );

        float                   GetVoteDefaultRatio                     () const;
        void                    SetVoteDefaultRatio                     ( float value );

        uint                    GetVoteNbNo                             () const;
        void                    SetVoteNbNo                             ( uint value );

        uint                    GetVoteNbYes                            () const;
        void                    SetVoteNbYes                            ( uint value );

        void                    FindServers                             ();
