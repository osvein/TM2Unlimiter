        enum { CLASSID = 0x03143000 };

        static CGameAnticheatMonitor* CreateInstance ();

        enum eType
        {
            TYPE_KEYDOWN,
            TYPE_GAMEACTION
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        bool                    GetActive                               () const;
        void                    SetActive                               ( bool value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

