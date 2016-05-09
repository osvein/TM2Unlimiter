        enum { CLASSID = 0x03138000 };

        static CGamePlaygroundScript* CreateInstance ();

        bool                    GetLadder_RequestInProgress             () const;
        void                    SetLadder_RequestInProgress             ( bool value );

        class CGameCtnChallenge* GetMap                                  () const;
        void                    SetMap                                  ( class CGameCtnChallenge* value );

        List < nodptr<class CGameCtnChallengeInfo> >& GetMapList                              () const;
        void                    SetMapList                              ( List < nodptr<class CGameCtnChallengeInfo> >& value );

        bool                    GetMapLoaded                            () const;
        void                    SetMapLoaded                            ( bool value );

        StringW                 GetMapName                              () const;
        void                    SetMapName                              ( StringW value );

        bool                    GetMatchEndRequested                    () const;
        void                    SetMatchEndRequested                    ( bool value );

        uint                    GetNextMapIndex                         () const;
        void                    SetNextMapIndex                         ( uint value );

        uint                    GetNow                                  () const;
        void                    SetNow                                  ( uint value );

        uint                    GetPeriod                               () const;
        void                    SetPeriod                               ( uint value );

        class CPlugFileTextScript* GetScript                               () const;
        void                    SetScript                               ( class CPlugFileTextScript* value );

        bool                    GetServerShutdownRequested              () const;
        void                    SetServerShutdownRequested              ( bool value );

        List < nodptr<class CGameTeamProfile> >& GetTeams                                () const;
        void                    SetTeams                                ( List < nodptr<class CGameTeamProfile> >& value );

        class CGamePlaygroundUIConfigMgr* GetUIManager                            () const;
        void                    SetUIManager                            ( class CGamePlaygroundUIConfigMgr* value );

        List < nodptr<class CGamePlayerInfo> >& GetUsers                                () const;
        void                    SetUsers                                ( List < nodptr<class CGamePlayerInfo> >& value );

        class CScriptXMLManager* GetXml                                  () const;
        void                    SetXml                                  ( class CScriptXMLManager* value );

        class CGamePlaygroundScriptXmlRpc* GetXmlRpc                               () const;
        void                    SetXmlRpc                               ( class CGamePlaygroundScriptXmlRpc* value );

        void                    AutoTeamBalance                         ();
        void                    Ladder_AddPlayer                        ( class CGamePlaygroundScore* pPlayerScore );
        void                    Ladder_CancelMatchRequest               ();
        void                    Ladder_CloseMatchRequest                ();
        void                    Ladder_OpenMatch_AddPlayer              ( class CGamePlaygroundScore* pPlayerScore );
        void                    Ladder_OpenMatch_BeginRequest           ();
        void                    Ladder_OpenMatch_EndRequest             ();
        void                    Ladder_OpenMatch_Request                ();
        void                    RequestLoadMap                          ();
        void                    RequestUnloadMap                        ();
        void                    Solo_SetNewRecord                       ( class CGamePlaygroundScore* pPlayerScore, uint medal );
        int                     Synchro_AddBarrier                      ();
        bool                    Synchro_BarrierReached                  ( int iBarrier );
