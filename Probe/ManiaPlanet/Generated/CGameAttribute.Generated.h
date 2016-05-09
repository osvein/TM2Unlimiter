        enum { CLASSID = 0x030FD000 };

        static CGameAttribute*  CreateInstance ();

        enum eType
        {
            TYPE_INTEGER,
            TYPE_REAL,
            TYPE_STRING
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        int                     GetIntegerMax                           () const;
        void                    SetIntegerMax                           ( int value );

        int                     GetIntegerMin                           () const;
        void                    SetIntegerMin                           ( int value );

        int                     GetIntegerValue                         () const;
        void                    SetIntegerValue                         ( int value );

        float                   GetRealMax                              () const;
        void                    SetRealMax                              ( float value );

        float                   GetRealMin                              () const;
        void                    SetRealMin                              ( float value );

        float                   GetRealValue                            () const;
        void                    SetRealValue                            ( float value );

        StringA                 GetStringValue                          () const;
        void                    SetStringValue                          ( StringA value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

