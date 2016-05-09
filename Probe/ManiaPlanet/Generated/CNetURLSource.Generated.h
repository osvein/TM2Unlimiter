        enum { CLASSID = 0x12030000 };

        static CNetURLSource*   CreateInstance ();

        enum eURLSourceState
        {
            URLSOURCESTATE_URLSOURCE_WAITINGCONNECTION,
            URLSOURCESTATE_URLSOURCE_TRANSFER,
            URLSOURCESTATE_URLSOURCE_DONE
        };
        static std::wstring     URLSourceStateToString                  ( eURLSourceState value );
        static eURLSourceState  ParseURLSourceState                     ( const std::wstring& wstrName );

        class CNetFileTransferDownload* GetDownload                             () const;
        void                    SetDownload                             ( class CNetFileTransferDownload* value );

        class CNetFileTransferDownload* GetMasterServerDownload                 () const;
        void                    SetMasterServerDownload                 ( class CNetFileTransferDownload* value );

        eURLSourceState         GetURLSourceState                       () const;
        void                    SetURLSourceState                       ( eURLSourceState value );

        StringA                 GetUrl                                  () const;
        void                    SetUrl                                  ( StringA value );

