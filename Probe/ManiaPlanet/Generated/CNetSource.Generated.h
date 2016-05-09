        enum { CLASSID = 0x1201E000 };

        static CNetSource*      CreateInstance ();

        enum eSourceState
        {
            SOURCESTATE_SOURCE_WAITINGCONNECTION,
            SOURCESTATE_SOURCE_REQUESTINGDOWNLOAD,
            SOURCESTATE_SOURCE_ONQUEUE,
            SOURCESTATE_SOURCE_REFRESHINGDOWNLOAD,
            SOURCESTATE_SOURCE_CONNECTINGFORTRANSFER,
            SOURCESTATE_SOURCE_TRANSFER,
            SOURCESTATE_SOURCE_DONE
        };
        static std::wstring     SourceStateToString                     ( eSourceState value );
        static eSourceState     ParseSourceState                        ( const std::wstring& wstrName );

        class CNetConnection*   GetConnection                           () const;
        void                    SetConnection                           ( class CNetConnection* value );

        class CNetFileTransferDownload* GetDownload                             () const;
        void                    SetDownload                             ( class CNetFileTransferDownload* value );

        bool                    GetFirstToConnect                       () const;
        void                    SetFirstToConnect                       ( bool value );

        bool                    GetForceCancel                          () const;
        void                    SetForceCancel                          ( bool value );

        bool                    GetForceSending                         () const;
        void                    SetForceSending                         ( bool value );

        bool                    GetHasReceivedUrl                       () const;
        void                    SetHasReceivedUrl                       ( bool value );

        uint                    GetIdSource                             () const;
        void                    SetIdSource                             ( uint value );

        uint                    GetIdUpload                             () const;
        void                    SetIdUpload                             ( uint value );

        bool                    GetInterruptTransfer                    () const;
        void                    SetInterruptTransfer                    ( bool value );

        bool                    GetIsConnecting                         () const;
        void                    SetIsConnecting                         ( bool value );

        uint                    GetLastMessageTime                      () const;
        void                    SetLastMessageTime                      ( uint value );

        uint                    GetLastNbChannelsUsedProposition        () const;
        void                    SetLastNbChannelsUsedProposition        ( uint value );

        uint                    GetMsgAttempt                           () const;
        void                    SetMsgAttempt                           ( uint value );

        bool                    GetMustSendRequest                      () const;
        void                    SetMustSendRequest                      ( bool value );

        bool                    GetMustSendUploadAck                    () const;
        void                    SetMustSendUploadAck                    ( bool value );

        uint                    GetNbChannelsUsed                       () const;
        void                    SetNbChannelsUsed                       ( uint value );

        bool                    GetOwnsFile                             () const;
        void                    SetOwnsFile                             ( bool value );

        bool                    GetReqSent                              () const;
        void                    SetReqSent                              ( bool value );

        class CNetIPSource*     GetSourceAddress                        () const;
        void                    SetSourceAddress                        ( class CNetIPSource* value );

        uint                    GetSourceAttempt                        () const;
        void                    SetSourceAttempt                        ( uint value );

        eSourceState            GetSourceState                          () const;
        void                    SetSourceState                          ( eSourceState value );

        bool                    GetTestedAtLeastOnce                    () const;
        void                    SetTestedAtLeastOnce                    ( bool value );

        uint                    GetTimeOut                              () const;
        void                    SetTimeOut                              ( uint value );

