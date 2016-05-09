        enum { CLASSID = 0x030A7000 };

        static CGameCtnMediaBlockSound* CreateInstance ();

        class CAudioSound*      GetAudioSound                           () const;
        void                    SetAudioSound                           ( class CAudioSound* value );

        bool                    GetIsBlockPlaying                       () const;
        void                    SetIsBlockPlaying                       ( bool value );

        bool                    GetIsLooping                            () const;
        void                    SetIsLooping                            ( bool value );

        bool                    GetIsMusic                              () const;
        void                    SetIsMusic                              ( bool value );

        uint                    GetPlayCount                            () const;
        void                    SetPlayCount                            ( uint value );

        class CPlugSound*       GetSound                                () const;
        void                    SetSound                                ( class CPlugSound* value );

        void                    OnParamsModified                        ();
