        enum { CLASSID = 0x0A093000 };

        static CSceneMgrBody*   CreateInstance ();

        uint                    GetBulletModelIndex                     () const;
        void                    SetBulletModelIndex                     ( uint value );

        float                   GetDistToPathForVictor                  () const;
        void                    SetDistToPathForVictor                  ( float value );

        uint                    GetDurationTargetKeptInMemory           () const;
        void                    SetDurationTargetKeptInMemory           ( uint value );

        float                   GetEyesHeight                           () const;
        void                    SetEyesHeight                           ( float value );

        uint                    GetInitialLifePoints                    () const;
        void                    SetInitialLifePoints                    ( uint value );

        uint                    GetInitialRandSeed                      () const;
        void                    SetInitialRandSeed                      ( uint value );

        uint                    GetMaxAmmo                              () const;
        void                    SetMaxAmmo                              ( uint value );

        uint                    GetReloadDelay                          () const;
        void                    SetReloadDelay                          ( uint value );

        uint                    GetShotDelay                            () const;
        void                    SetShotDelay                            ( uint value );

        float                   GetSightScope0                          () const;
        void                    SetSightScope0                          ( float value );

        float                   GetSightScope1                          () const;
        void                    SetSightScope1                          ( float value );

        float                   GetSightScope2                          () const;
        void                    SetSightScope2                          ( float value );

        float                   GetSightScope3                          () const;
        void                    SetSightScope3                          ( float value );

        uint                    GetSimultaneousBodies                   () const;
        void                    SetSimultaneousBodies                   ( uint value );

        float                   GetSpeedCoeff                           () const;
        void                    SetSpeedCoeff                           ( float value );

        void                    StartBodies                             ();
        void                    StopBodies                              ();
