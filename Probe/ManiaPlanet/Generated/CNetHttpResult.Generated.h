        enum { CLASSID = 0x12013000 };

        static CNetHttpResult*  CreateInstance ();

        enum eKind
        {
            KIND_DOWNLOAD,
            KIND_UPLOAD
        };
        static std::wstring     KindToString                            ( eKind value );
        static eKind            ParseKind                               ( const std::wstring& wstrName );

        enum eStatus
        {
            STATUS_CONNECTING,
            STATUS_REQUEST,
            STATUS_DOWNLOADING,
            STATUS_DONE,
            STATUS_ERROR
        };
        static std::wstring     StatusToString                          ( eStatus value );
        static eStatus          ParseStatus                             ( const std::wstring& wstrName );

        StringA                 GetContentEncoding                      () const;
        void                    SetContentEncoding                      ( StringA value );

        StringA                 GetContentType                          () const;
        void                    SetContentType                          ( StringA value );

        uint                    GetCurrentSize                          () const;
        void                    SetCurrentSize                          ( uint value );

        uint                    GetExpectedSize                         () const;
        void                    SetExpectedSize                         ( uint value );

        uint                    GetHttpError                            () const;
        void                    SetHttpError                            ( uint value );

        uint                    GetHttpStatus                           () const;
        void                    SetHttpStatus                           ( uint value );

        eKind                   GetKind                                 () const;
        void                    SetKind                                 ( eKind value );

        StringA                 GetPath                                 () const;
        void                    SetPath                                 ( StringA value );

        StringA                 GetServer                               () const;
        void                    SetServer                               ( StringA value );

        eStatus                 GetStatus                               () const;
        void                    SetStatus                               ( eStatus value );

