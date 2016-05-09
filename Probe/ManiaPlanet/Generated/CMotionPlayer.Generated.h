        enum { CLASSID = 0x08034000 };

        static CMotionPlayer*   CreateInstance ();

        enum eSavePlayState
        {
            SAVEPLAYSTATE_PLAYING,
            SAVEPLAYSTATE_PAUSED,
            SAVEPLAYSTATE_STOPPED,
            SAVEPLAYSTATE_CURRENT
        };
        static std::wstring     SavePlayStateToString                   ( eSavePlayState value );
        static eSavePlayState   ParseSavePlayState                      ( const std::wstring& wstrName );

        class CMotionCmdBase*   GetBase                                 () const;
        void                    SetBase                                 ( class CMotionCmdBase* value );

        float                   GetBaseValue                            () const;
        void                    SetBaseValue                            ( float value );

        bool                    GetIsPhysics                            () const;
        void                    SetIsPhysics                            ( bool value );

        bool                    GetIsPlaying                            () const;
        void                    SetIsPlaying                            ( bool value );

        eSavePlayState          GetSavePlayState                        () const;
        void                    SetSavePlayState                        ( eSavePlayState value );

        Array < class CMotionTrack* >& GetTracks                               () const;
        void                    SetTracks                               ( Array < class CMotionTrack* >& value );

        void                    Pause                                   ();
        void                    Play                                    ();
        void                    Stop                                    ();
