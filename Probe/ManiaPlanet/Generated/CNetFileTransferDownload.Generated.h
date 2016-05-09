        enum { CLASSID = 0x1201C000 };

        static CNetFileTransferDownload* CreateInstance ();

        enum eDownloadState
        {
            DOWNLOADSTATE_DOWNLOAD_WAITINGSOURCES,
            DOWNLOADSTATE_DOWNLOAD_PROCESSINGSOURCES_0,
            DOWNLOADSTATE_DOWNLOAD_PROCESSINGSOURCES_1,
            DOWNLOADSTATE_DOWNLOAD_ONTERMINATION,
            DOWNLOADSTATE_DOWNLOAD_DONE
        };
        static std::wstring     DownloadStateToString                   ( eDownloadState value );
        static eDownloadState   ParseDownloadState                      ( const std::wstring& wstrName );

        bool                    GetAcceptP2P                            () const;
        void                    SetAcceptP2P                            ( bool value );

        bool                    GetAcceptUrl                            () const;
        void                    SetAcceptUrl                            ( bool value );

        class CNetSource*       GetActiveSource                         () const;
        void                    SetActiveSource                         ( class CNetSource* value );

        class CNetURLSource*    GetActiveUrlSource                      () const;
        void                    SetActiveUrlSource                      ( class CNetURLSource* value );

        uint                    GetAverageEfficiency                    () const;
        void                    SetAverageEfficiency                    ( uint value );

        eDownloadState          GetDownloadState                        () const;
        void                    SetDownloadState                        ( eDownloadState value );

        uint                    GetIdDownload                           () const;
        void                    SetIdDownload                           ( uint value );

        uint                    GetInstantaneousEfficiency              () const;
        void                    SetInstantaneousEfficiency              ( uint value );

        bool                    GetIsNearFinished                       () const;
        void                    SetIsNearFinished                       ( bool value );

        uint                    GetLastDataMsgTime                      () const;
        void                    SetLastDataMsgTime                      ( uint value );

        uint                    GetLastDataReception                    () const;
        void                    SetLastDataReception                    ( uint value );

        uint                    GetLastDataWrite                        () const;
        void                    SetLastDataWrite                        ( uint value );

        StringA                 GetLastUrlUsed                          () const;
        void                    SetLastUrlUsed                          ( StringA value );

        uint                    GetLastWriteTimeout                     () const;
        void                    SetLastWriteTimeout                     ( uint value );

        uint                    GetNbOfEffectiveSources                 () const;
        void                    SetNbOfEffectiveSources                 ( uint value );

        class CSystemPackDesc*  GetPackDesc                             () const;
        void                    SetPackDesc                             ( class CSystemPackDesc* value );

        class CNetMasterServerUptoDateCheck* GetPackDescUpToDateCheck                () const;
        void                    SetPackDescUpToDateCheck                ( class CNetMasterServerUptoDateCheck* value );

        bool                    GetPackDescUpToDateChecked              () const;
        void                    SetPackDescUpToDateChecked              ( bool value );

        uint                    GetPriorityFlags                        () const;
        void                    SetPriorityFlags                        ( uint value );

        uint                    GetPriorityLevel                        () const;
        void                    SetPriorityLevel                        ( uint value );

        uint                    GetSendEfficiency                       () const;
        void                    SetSendEfficiency                       ( uint value );

        bool                    GetSkipServerSource                     () const;
        void                    SetSkipServerSource                     ( bool value );

        List < nodptr<class CNetSource> >& GetSources                              () const;
        void                    SetSources                              ( List < nodptr<class CNetSource> >& value );

        StringW                 GetTempFileName                         () const;
        void                    SetTempFileName                         ( StringW value );

        StringA                 GetUrl                                  () const;
        void                    SetUrl                                  ( StringA value );

        List < nodptr<class CNetURLSource> >& GetUrlSources                           () const;
        void                    SetUrlSources                           ( List < nodptr<class CNetURLSource> >& value );

