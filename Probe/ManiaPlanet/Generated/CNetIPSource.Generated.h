        enum { CLASSID = 0x12028000 };

        static CNetIPSource*    CreateInstance ();

        bool                    GetCanBeConnectedBy                     () const;
        void                    SetCanBeConnectedBy                     ( bool value );

        uint                    GetConnectTimeOut                       () const;
        void                    SetConnectTimeOut                       ( uint value );

        uint                    GetConnectionAttempt                    () const;
        void                    SetConnectionAttempt                    ( uint value );

        class CNetConnection*   GetConnectionFrom                       () const;
        void                    SetConnectionFrom                       ( class CNetConnection* value );

        uint                    GetConnectionFromTimeOut                () const;
        void                    SetConnectionFromTimeOut                ( uint value );

        bool                    GetConnectionPossible                   () const;
        void                    SetConnectionPossible                   ( bool value );

        bool                    GetConnectionTested                     () const;
        void                    SetConnectionTested                     ( bool value );

        class CNetConnection*   GetConnectionTo                         () const;
        void                    SetConnectionTo                         ( class CNetConnection* value );

        uint                    GetConnectionToTimeOut                  () const;
        void                    SetConnectionToTimeOut                  ( uint value );

        uint                    GetDownloadRate                         () const;
        void                    SetDownloadRate                         ( uint value );

        bool                    GetForceCancel                          () const;
        void                    SetForceCancel                          ( bool value );

        class CNetConnection*   GetGameConnection                       () const;
        void                    SetGameConnection                       ( class CNetConnection* value );

        bool                    GetIsConnecting                         () const;
        void                    SetIsConnecting                         ( bool value );

        bool                    GetIsServer                             () const;
        void                    SetIsServer                             ( bool value );

        bool                    GetIsUploadEnabled                      () const;
        void                    SetIsUploadEnabled                      ( bool value );

        uint                    GetLastConnectionTime                   () const;
        void                    SetLastConnectionTime                   ( uint value );

        uint                    GetLastContactTime                      () const;
        void                    SetLastContactTime                      ( uint value );

        uint                    GetP2PKey                               () const;
        void                    SetP2PKey                               ( uint value );

        uint                    GetPlayerUId                            () const;
        void                    SetPlayerUId                            ( uint value );

        StringA                 GetRemoteIP                             () const;
        void                    SetRemoteIP                             ( StringA value );

        List < nodptr<class CNetSource> >& GetSourcesUsingConnectionFrom           () const;
        void                    SetSourcesUsingConnectionFrom           ( List < nodptr<class CNetSource> >& value );

        List < nodptr<class CNetSource> >& GetSourcesUsingConnectionTo             () const;
        void                    SetSourcesUsingConnectionTo             ( List < nodptr<class CNetSource> >& value );

        uint                    GetThroughServerAttempt                 () const;
        void                    SetThroughServerAttempt                 ( uint value );

        bool                    GetThroughServerPossible                () const;
        void                    SetThroughServerPossible                ( bool value );

        bool                    GetThroughServerTested                  () const;
        void                    SetThroughServerTested                  ( bool value );

        uint                    GetUploadRate                           () const;
        void                    SetUploadRate                           ( uint value );

        List < nodptr<class CNetFileTransferUpload> >& GetUploadsUsingConnectionFrom           () const;
        void                    SetUploadsUsingConnectionFrom           ( List < nodptr<class CNetFileTransferUpload> >& value );

        List < nodptr<class CNetFileTransferUpload> >& GetUploadsUsingConnectionTo             () const;
        void                    SetUploadsUsingConnectionTo             ( List < nodptr<class CNetFileTransferUpload> >& value );

