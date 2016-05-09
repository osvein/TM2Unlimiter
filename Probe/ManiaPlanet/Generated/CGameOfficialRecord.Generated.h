        enum { CLASSID = 0x0311F000 };

        static CGameOfficialRecord* CreateInstance ();

        enum eState
        {
            STATE_NONE,
            STATE_STARTING,
            STATE_STARTED,
            STATE_FINISHING,
            STATE_FINISHED,
            STATE_CANCELLING,
            STATE_CANCELLED,
            STATE_UPLOADING,
            STATE_COMPLETED
        };
        static std::wstring     StateToString                           ( eState value );
        static eState           ParseState                              ( const std::wstring& wstrName );

        class CGameCtnChallenge* GetChallenge                            () const;
        void                    SetChallenge                            ( class CGameCtnChallenge* value );

        class CGameCtnChallengeInfo* GetChallengeInfo                        () const;
        void                    SetChallengeInfo                        ( class CGameCtnChallengeInfo* value );

        StringA                 GetCustomRecordData                     () const;
        void                    SetCustomRecordData                     ( StringA value );

        bool                    GetIsAllowed                            () const;
        void                    SetIsAllowed                            ( bool value );

        bool                    GetIsBroken                             () const;
        void                    SetIsBroken                             ( bool value );

        bool                    GetIsCustom                             () const;
        void                    SetIsCustom                             ( bool value );

        bool                    GetIsRunning                            () const;
        void                    SetIsRunning                            ( bool value );

        bool                    GetMustUploadReplay                     () const;
        void                    SetMustUploadReplay                     ( bool value );

        uint                    GetOldRecord                            () const;
        void                    SetOldRecord                            ( uint value );

        uint                    GetRecord                               () const;
        void                    SetRecord                               ( uint value );

        uint                    GetRecordTime                           () const;
        void                    SetRecordTime                           ( uint value );

        StringW                 GetResultMessage                        () const;
        void                    SetResultMessage                        ( StringW value );

        StringW                 GetStartRequestErrorMessage             () const;
        void                    SetStartRequestErrorMessage             ( StringW value );

        uint                    GetStartRequestTime                     () const;
        void                    SetStartRequestTime                     ( uint value );

        uint                    GetStartResponseTime                    () const;
        void                    SetStartResponseTime                    ( uint value );

        eState                  GetState                                () const;
        void                    SetState                                ( eState value );

        StringW                 GetStopOrUploadRequestErrorMessage      () const;
        void                    SetStopOrUploadRequestErrorMessage      ( StringW value );

        uint                    GetStopRequestTime                      () const;
        void                    SetStopRequestTime                      ( uint value );

        uint                    GetStopResponseTime                     () const;
        void                    SetStopResponseTime                     ( uint value );

        uint                    GetUploadReplayKey                      () const;
        void                    SetUploadReplayKey                      ( uint value );

        uint                    GetUploadRequestTime                    () const;
        void                    SetUploadRequestTime                    ( uint value );

        uint                    GetUploadResponseTime                   () const;
        void                    SetUploadResponseTime                   ( uint value );

        class CGamePlayerInfo*  GetUser                                 () const;
        void                    SetUser                                 ( class CGamePlayerInfo* value );

        uint                    GetValidationSeed                       () const;
        void                    SetValidationSeed                       ( uint value );

