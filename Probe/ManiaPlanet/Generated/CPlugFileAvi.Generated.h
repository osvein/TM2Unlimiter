        enum { CLASSID = 0x09032000 };

        static CPlugFileAvi*    CreateInstance ();

        enum eTimeMode
        {
            TIMEMODE_GAMETIMER,
            TIMEMODE_HUMANTIMER,
            TIMEMODE_EXTERNAL
        };
        static std::wstring     TimeModeToString                        ( eTimeMode value );
        static eTimeMode        ParseTimeMode                           ( const std::wstring& wstrName );

        eTimeMode               GetTimeMode                             () const;
        void                    SetTimeMode                             ( eTimeMode value );

        void                    Rewind                                  ();
