        enum { CLASSID = 0x12018000 };

        static CNetFileTransfer* CreateInstance ();

        class CNetClient*       GetClient                               () const;
        void                    SetClient                               ( class CNetClient* value );

        class CSystemFidsFolder* GetDiskCacheDir                         () const;
        void                    SetDiskCacheDir                         ( class CSystemFidsFolder* value );

        bool                    GetDownloadEnabled                      () const;
        void                    SetDownloadEnabled                      ( bool value );

        uint                    GetDownloadRate                         () const;
        void                    SetDownloadRate                         ( uint value );

        List < nodptr<class CNetFileTransferDownload> >& GetDownloads                            () const;
        void                    SetDownloads                            ( List < nodptr<class CNetFileTransferDownload> >& value );

        uint                    GetFirstTimeNotEnoughReceiveBandwidth   () const;
        void                    SetFirstTimeNotEnoughReceiveBandwidth   ( uint value );

        uint                    GetFirstTimeNotEnoughSendBandwidth      () const;
        void                    SetFirstTimeNotEnoughSendBandwidth      ( uint value );

        StringA                 GetIPAddress                            () const;
        void                    SetIPAddress                            ( StringA value );

        List < nodptr<class CNetIPSource> >& GetIPSources                            () const;
        void                    SetIPSources                            ( List < nodptr<class CNetIPSource> >& value );

        bool                    GetIsEmissionSaturated                  () const;
        void                    SetIsEmissionSaturated                  ( bool value );

        bool                    GetIsServer                             () const;
        void                    SetIsServer                             ( bool value );

        uint                    GetLastUpdateTime                       () const;
        void                    SetLastUpdateTime                       ( uint value );

        bool                    GetLocatorsEnabled                      () const;
        void                    SetLocatorsEnabled                      ( bool value );

        class CNetMasterServer* GetMasterServer                         () const;
        void                    SetMasterServer                         ( class CNetMasterServer* value );

        uint                    GetMaxChannelPerTransfer                () const;
        void                    SetMaxChannelPerTransfer                ( uint value );

        uint                    GetMaxDownloadChannelLeft               () const;
        void                    SetMaxDownloadChannelLeft               ( uint value );

        uint                    GetMaxDownloadRateLeft                  () const;
        void                    SetMaxDownloadRateLeft                  ( uint value );

        uint                    GetMaxDownloads                         () const;
        void                    SetMaxDownloads                         ( uint value );

        uint                    GetMaxSizeTransfer                      () const;
        void                    SetMaxSizeTransfer                      ( uint value );

        uint                    GetMaxUploadChannelLeft                 () const;
        void                    SetMaxUploadChannelLeft                 ( uint value );

        uint                    GetMaxUploadRateLeft                    () const;
        void                    SetMaxUploadRateLeft                    ( uint value );

        uint                    GetMaxUploads                           () const;
        void                    SetMaxUploads                           ( uint value );

        uint                    GetMinSizeTransfer                      () const;
        void                    SetMinSizeTransfer                      ( uint value );

        uint                    GetNbOfCurrentDls                       () const;
        void                    SetNbOfCurrentDls                       ( uint value );

        uint                    GetNbOfCurrentUls                       () const;
        void                    SetNbOfCurrentUls                       ( uint value );

        uint                    GetNbReceiveChannelLeft                 () const;
        void                    SetNbReceiveChannelLeft                 ( uint value );

        uint                    GetNbReceiveChannelToRestore            () const;
        void                    SetNbReceiveChannelToRestore            ( uint value );

        uint                    GetNbReceiveChannelUsed                 () const;
        void                    SetNbReceiveChannelUsed                 ( uint value );

        uint                    GetNbSendChannelLeft                    () const;
        void                    SetNbSendChannelLeft                    ( uint value );

        uint                    GetNbSendChannelToRestore               () const;
        void                    SetNbSendChannelToRestore               ( uint value );

        uint                    GetNbSendChannelUsed                    () const;
        void                    SetNbSendChannelUsed                    ( uint value );

        uint                    GetNewConnectionTimeoutForDownload      () const;
        void                    SetNewConnectionTimeoutForDownload      ( uint value );

        uint                    GetNewConnectionTimeoutForUpload        () const;
        void                    SetNewConnectionTimeoutForUpload        ( uint value );

        uint                    GetP2PKey                               () const;
        void                    SetP2PKey                               ( uint value );

        class CSystemPackManager* GetPackManager                          () const;
        void                    SetPackManager                          ( class CSystemPackManager* value );

        uint                    GetPlayerUId                            () const;
        void                    SetPlayerUId                            ( uint value );

        uint                    GetReceiveBandwidthLimit                () const;
        void                    SetReceiveBandwidthLimit                ( uint value );

        uint                    GetSendBandwidthLimit                   () const;
        void                    SetSendBandwidthLimit                   ( uint value );

        uint                    GetSendMsgThroughServerTimeoutForDownload() const;
        void                    SetSendMsgThroughServerTimeoutForDownload( uint value );

        uint                    GetSendMsgThroughServerTimeoutForUpload () const;
        void                    SetSendMsgThroughServerTimeoutForUpload ( uint value );

        class CNetServer*       GetServer                               () const;
        void                    SetServer                               ( class CNetServer* value );

        List < nodptr<class CNetFileTransferDownload> >& GetTerminatedDownloads                  () const;
        void                    SetTerminatedDownloads                  ( List < nodptr<class CNetFileTransferDownload> >& value );

        uint                    GetTotalReceivingSize                   () const;
        void                    SetTotalReceivingSize                   ( uint value );

        uint                    GetTotalSendingSize                     () const;
        void                    SetTotalSendingSize                     ( uint value );

        uint                    GetUpdateDelta                          () const;
        void                    SetUpdateDelta                          ( uint value );

        bool                    GetUploadEnabled                        () const;
        void                    SetUploadEnabled                        ( bool value );

        uint                    GetUploadRate                           () const;
        void                    SetUploadRate                           ( uint value );

        List < nodptr<class CNetFileTransferUpload> >& GetUploads                              () const;
        void                    SetUploads                              ( List < nodptr<class CNetFileTransferUpload> >& value );

        bool                    GetWaitForDownload                      () const;
        void                    SetWaitForDownload                      ( bool value );

        uint                    GetWriteOnDiskError                     () const;
        void                    SetWriteOnDiskError                     ( uint value );

