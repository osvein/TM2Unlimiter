        enum { CLASSID = 0x030E9000 };

        static CGameNetDataDownload* CreateInstance ();

        bool                    GetCheckUpToDate                        () const;
        void                    SetCheckUpToDate                        ( bool value );

        bool                    GetIsFinished                           () const;
        void                    SetIsFinished                           ( bool value );

        bool                    GetIsPaused                             () const;
        void                    SetIsPaused                             ( bool value );

        bool                    GetPauseOnError                         () const;
        void                    SetPauseOnError                         ( bool value );

        uint                    GetReturnedError                        () const;
        void                    SetReturnedError                        ( uint value );

