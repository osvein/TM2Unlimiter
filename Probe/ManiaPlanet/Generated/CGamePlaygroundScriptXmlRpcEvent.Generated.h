        enum { CLASSID = 0x03174000 };

        static CGamePlaygroundScriptXmlRpcEvent* CreateInstance ();

        enum eType
        {
            TYPE_UNKNOWN,
            TYPE_CALLBACK
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        StringW                 GetParam1                               () const;
        void                    SetParam1                               ( StringW value );

        StringW                 GetParam2                               () const;
        void                    SetParam2                               ( StringW value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

