        enum { CLASSID = 0x0A067000 };

        static CSceneToyFilaments* CreateInstance ();

        bool                    GetAddNoise                             () const;
        void                    SetAddNoise                             ( bool value );

        float                   GetAlpha                                () const;
        void                    SetAlpha                                ( float value );

        float                   GetInertia                              () const;
        void                    SetInertia                              ( float value );

        float                   GetMaxSpeed                             () const;
        void                    SetMaxSpeed                             ( float value );

        float                   GetNoiseAmp                             () const;
        void                    SetNoiseAmp                             ( float value );

        float                   GetNoiseFreq                            () const;
        void                    SetNoiseFreq                            ( float value );

        bool                    GetShowGradient                         () const;
        void                    SetShowGradient                         ( bool value );

        float                   Getk1                                   () const;
        void                    Setk1                                   ( float value );

        float                   Getk2                                   () const;
        void                    Setk2                                   ( float value );

        float                   Getk3                                   () const;
        void                    Setk3                                   ( float value );

