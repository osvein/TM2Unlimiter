        enum { CLASSID = 0x12019000 };

        static CNetMasterServerInfo* CreateInstance ();

        enum eLevel
        {
            LEVEL_BEGINNER,
            LEVEL_NORMAL,
            LEVEL_EXPERT
        };
        static std::wstring     LevelToString                           ( eLevel value );
        static eLevel           ParseLevel                              ( const std::wstring& wstrName );

        StringA                 GetAddr                                 () const;
        void                    SetAddr                                 ( StringA value );

        eLevel                  GetLevel                                () const;
        void                    SetLevel                                ( eLevel value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

        uint                    GetNbOnline                             () const;
        void                    SetNbOnline                             ( uint value );

        uint                    GetNbServer                             () const;
        void                    SetNbServer                             ( uint value );

        StringA                 GetPath                                 () const;
        void                    SetPath                                 ( StringA value );

