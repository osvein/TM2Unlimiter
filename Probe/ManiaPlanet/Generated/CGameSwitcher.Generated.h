        enum { CLASSID = 0x030F7000 };

        static CGameSwitcher*   CreateInstance ();

        enum eMode
        {
            MODE_NONE,
            MODE_EDITOR,
            MODE_PLAYGROUND,
            MODE_PLAYGROUNDINEDITOR,
            MODE_REPLAYENDPLAYGROUND,
            MODE_REPLAY
        };
        static std::wstring     ModeToString                            ( eMode value );
        static eMode            ParseMode                               ( const std::wstring& wstrName );

        bool                    GetIsPaused                             () const;
        void                    SetIsPaused                             ( bool value );

        eMode                   GetMode                                 () const;
        void                    SetMode                                 ( eMode value );

