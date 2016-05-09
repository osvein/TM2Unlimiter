        enum { CLASSID = 0x07009000 };

        static CControlEntry*   CreateInstance ();

        enum eType
        {
            TYPE_UNKNOWN,
            TYPE_NATURAL,
            TYPE_INTEGER,
            TYPE_REAL,
            TYPE_STRING,
            TYPE_TIMEMMSSCC,
            TYPE_TIMEHHMMSS,
            TYPE_REALFORMATED,
            TYPE_TIMEMMSS,
            TYPE_ASCII7BIT,
            TYPE_REAL3DECIMALS,
            TYPE_TIMEHHMMSS_24,
            TYPE_TIMEHHMM,
            TYPE,
            TYPE_HEXA,
            TYPE_TIMEHHMMSSORMMSS
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        bool                    GetIsNewPassword                        () const;
        void                    SetIsNewPassword                        ( bool value );

        bool                    GetIsPassword                           () const;
        void                    SetIsPassword                           ( bool value );

        uint                    GetMaxLength                            () const;
        void                    SetMaxLength                            ( uint value );

        bool                    GetSelectAllOnFocusGained               () const;
        void                    SetSelectAllOnFocusGained               ( bool value );

        StringW                 GetString                               () const;
        void                    SetString                               ( StringW value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

        bool                    GetValidateOnLostFocus                  () const;
        void                    SetValidateOnLostFocus                  ( bool value );

