        enum { CLASSID = 0x11000000 };

        static CScriptSetting*  CreateInstance ();

        enum eType
        {
            TYPE_BOOLEAN,
            TYPE_INTEGER,
            TYPE_REAL,
            TYPE_STRING,
            TYPE_UNSUPPORTEDTYPE
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        bool                    GetBooleanVal                           () const;
        void                    SetBooleanVal                           ( bool value );

        int                     GetIntegerVal                           () const;
        void                    SetIntegerVal                           ( int value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

        float                   GetRealVal                              () const;
        void                    SetRealVal                              ( float value );

        StringW                 GetTextVal                              () const;
        void                    SetTextVal                              ( StringW value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

