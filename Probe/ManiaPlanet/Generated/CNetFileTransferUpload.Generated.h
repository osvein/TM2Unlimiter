        enum { CLASSID = 0x1201D000 };

        static CNetFileTransferUpload* CreateInstance ();

        enum eUploadState
        {
            UPLOADSTATE_UPLOAD_WAITINGCONNECTION,
            UPLOADSTATE_UPLOAD_ONQUEUE,
            UPLOADSTATE_UPLOAD_REQUESTINGUPLOAD,
            UPLOADSTATE_UPLOAD_TRANSFER,
            UPLOADSTATE_UPLOAD_DONE
        };
        static std::wstring     UploadStateToString                     ( eUploadState value );
        static eUploadState     ParseUploadState                        ( const std::wstring& wstrName );

        uint                    GetAverageEfficiency                    () const;
        void                    SetAverageEfficiency                    ( uint value );

        class CNetConnection*   GetConnection                           () const;
        void                    SetConnection                           ( class CNetConnection* value );

        uint                    GetDownloadPriorityLevel                () const;
        void                    SetDownloadPriorityLevel                ( uint value );

        bool                    GetFirstToConnect                       () const;
        void                    SetFirstToConnect                       ( bool value );

        bool                    GetForceCancel                          () const;
        void                    SetForceCancel                          ( bool value );

        class CNetIPSource*     GetIPSource                             () const;
        void                    SetIPSource                             ( class CNetIPSource* value );

        uint                    GetIdDownload                           () const;
        void                    SetIdDownload                           ( uint value );

        uint                    GetIdSource                             () const;
        void                    SetIdSource                             ( uint value );

        uint                    GetIdUpload                             () const;
        void                    SetIdUpload                             ( uint value );

        uint                    GetInstantaneousEfficiency              () const;
        void                    SetInstantaneousEfficiency              ( uint value );

        bool                    GetIsActive                             () const;
        void                    SetIsActive                             ( bool value );

        bool                    GetIsConnecting                         () const;
        void                    SetIsConnecting                         ( bool value );

        uint                    GetLastActiveTime                       () const;
        void                    SetLastActiveTime                       ( uint value );

        uint                    GetLastDataComplete                     () const;
        void                    SetLastDataComplete                     ( uint value );

        uint                    GetLastMessageTime                      () const;
        void                    SetLastMessageTime                      ( uint value );

        uint                    GetLastReadTimeOut                      () const;
        void                    SetLastReadTimeOut                      ( uint value );

        uint                    GetLastSentTime                         () const;
        void                    SetLastSentTime                         ( uint value );

        uint                    GetMsgAttempt                           () const;
        void                    SetMsgAttempt                           ( uint value );

        bool                    GetMustBeActive                         () const;
        void                    SetMustBeActive                         ( bool value );

        bool                    GetMustSendReqAck                       () const;
        void                    SetMustSendReqAck                       ( bool value );

        uint                    GetNbChannelsUsed                       () const;
        void                    SetNbChannelsUsed                       ( uint value );

        uint                    GetNbChannelsUsedValidated              () const;
        void                    SetNbChannelsUsedValidated              ( uint value );

        uint                    GetPriorityLevel                        () const;
        void                    SetPriorityLevel                        ( uint value );

        uint                    GetReadOffset                           () const;
        void                    SetReadOffset                           ( uint value );

        bool                    GetReqAckSent                           () const;
        void                    SetReqAckSent                           ( bool value );

        uint                    GetTimeOut                              () const;
        void                    SetTimeOut                              ( uint value );

        uint                    GetUploadAttempt                        () const;
        void                    SetUploadAttempt                        ( uint value );

        eUploadState            GetUploadState                          () const;
        void                    SetUploadState                          ( eUploadState value );

        uint                    GetValidityTimeOut                      () const;
        void                    SetValidityTimeOut                      ( uint value );

