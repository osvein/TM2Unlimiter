        enum { CLASSID = 0x03006000 };

        static CGameMasterServer* CreateInstance ();

        List < uint >&          GetFilesToConfirm                       () const;
        void                    SetFilesToConfirm                       ( List < uint >& value );

        List < uint >&          GetFilesToSubmit                        () const;
        void                    SetFilesToSubmit                        ( List < uint >& value );

        uint                    GetGetRankings_Last                     () const;
        void                    SetGetRankings_Last                     ( uint value );

        uint                    GetGetRankings_TimeToWait               () const;
        void                    SetGetRankings_TimeToWait               ( uint value );

        uint                    GetInboxMessagesCount                   () const;
        void                    SetInboxMessagesCount                   ( uint value );

        bool                    GetIsConnected                          () const;
        void                    SetIsConnected                          ( bool value );

        class CGameLeagueManager* GetLeaguesManager                       () const;
        void                    SetLeaguesManager                       ( class CGameLeagueManager* value );

        uint                    GetLiveTick_Count                       () const;
        void                    SetLiveTick_Count                       ( uint value );

        uint                    GetLiveTick_Last                        () const;
        void                    SetLiveTick_Last                        ( uint value );

        uint                    GetLiveTick_RefreshPeriodAsPlayer       () const;
        void                    SetLiveTick_RefreshPeriodAsPlayer       ( uint value );

        uint                    GetLiveTick_RefreshPeriodAsServerForPlayers() const;
        void                    SetLiveTick_RefreshPeriodAsServerForPlayers( uint value );

        uint                    GetLiveUpdate_Count                     () const;
        void                    SetLiveUpdate_Count                     ( uint value );

        uint                    GetLiveUpdate_Last                      () const;
        void                    SetLiveUpdate_Last                      ( uint value );

        uint                    GetLiveUpdate_MaxRefreshPeriodAsServer  () const;
        void                    SetLiveUpdate_MaxRefreshPeriodAsServer  ( uint value );

        uint                    GetLiveUpdate_MinRefreshPeriodAsServer  () const;
        void                    SetLiveUpdate_MinRefreshPeriodAsServer  ( uint value );

        bool                    GetLiveUpdate_Needed                    () const;
        void                    SetLiveUpdate_Needed                    ( bool value );

        uint                    GetLiveUpdate_RefreshPeriodAsPlayer     () const;
        void                    SetLiveUpdate_RefreshPeriodAsPlayer     ( uint value );

        uint                    GetOutboxMessagesCount                  () const;
        void                    SetOutboxMessagesCount                  ( uint value );

        List < nodptr<class CGameRemoteBufferPool> >& GetPools                                () const;
        void                    SetPools                                ( List < nodptr<class CGameRemoteBufferPool> >& value );

        uint                    GetRefreshOnlineNewsDoReply             () const;
        void                    SetRefreshOnlineNewsDoReply             ( uint value );

        List < nodptr<class CGameRemoteBufferDataInfo> >& GetRemoteDataInfos                      () const;
        void                    SetRemoteDataInfos                      ( List < nodptr<class CGameRemoteBufferDataInfo> >& value );

        uint                    GetReturnedError                        () const;
        void                    SetReturnedError                        ( uint value );

        StringA                 GetReturnedIP                           () const;
        void                    SetReturnedIP                           ( StringA value );

        uint                    GetSearch_Last                          () const;
        void                    SetSearch_Last                          ( uint value );

        uint                    GetSearch_TimeToWait                    () const;
        void                    SetSearch_TimeToWait                    ( uint value );

        StringA                 GetSubscribeEMail                       () const;
        void                    SetSubscribeEMail                       ( StringA value );

        StringW                 GetSubscribeNickName                    () const;
        void                    SetSubscribeNickName                    ( StringW value );

        StringW                 GetSubscribeNickNameNew                 () const;
        void                    SetSubscribeNickNameNew                 ( StringW value );

        StringW                 GetSubscribePath                        () const;
        void                    SetSubscribePath                        ( StringW value );

        class CGameLeagueManager* GetSubscribedGroupsManager              () const;
        void                    SetSubscribedGroupsManager              ( class CGameLeagueManager* value );

        void                    Connect                                 ();
        void                    Disconnect                              ();
        void                    GetOnlineProfile                        ();
        void                    MailAccount                             ();
        void                    ReceiveMessages                         ();
        void                    SendCrashLogs                           ();
        void                    SendGeneralCaps                         ();
        void                    SendGfxPerformance                      ();
        void                    SendMessages                            ();
        void                    Subscribe                               ();
        void                    UpdateOnlineProfile                     ();
