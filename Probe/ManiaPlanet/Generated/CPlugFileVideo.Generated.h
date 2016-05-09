        enum { CLASSID = 0x09060000 };

        static CPlugFileVideo*  CreateInstance ();

        enum eTimeMode
        {
            TIMEMODE_GAME,
            TIMEMODE_HUMAN,
            TIMEMODE_EXTERNAL
        };
        static std::wstring     TimeModeToString                        ( eTimeMode value );
        static eTimeMode        ParseTimeMode                           ( const std::wstring& wstrName );

        bool                    GetHasSound                             () const;
        void                    SetHasSound                             ( bool value );

        bool                    GetIsLooping                            () const;
        void                    SetIsLooping                            ( bool value );

        eTimeMode               GetTimeMode                             () const;
        void                    SetTimeMode                             ( eTimeMode value );

        void                    Play                                    ();
        void                    Rewind                                  ();
        void                    Stop                                    ();
