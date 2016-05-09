        enum { CLASSID = 0x0A06A000 };

        static CSceneFlockModel* CreateInstance ();

        uint                    GetAnimPeriod                           () const;
        void                    SetAnimPeriod                           ( uint value );

        uint                    GetAnim_FlappingEnd                     () const;
        void                    SetAnim_FlappingEnd                     ( uint value );

        uint                    GetAnim_FlappingStart                   () const;
        void                    SetAnim_FlappingStart                   ( uint value );

        uint                    GetAnim_GlidingEnd                      () const;
        void                    SetAnim_GlidingEnd                      ( uint value );

        uint                    GetAnim_GlidingStart                    () const;
        void                    SetAnim_GlidingStart                    ( uint value );

        uint                    GetAnim_StandingEnd                     () const;
        void                    SetAnim_StandingEnd                     ( uint value );

        uint                    GetAnim_StandingStar                    () const;
        void                    SetAnim_StandingStar                    ( uint value );

        class CMwNod*           GetBirdModelFid                         () const;
        void                    SetBirdModelFid                         ( class CMwNod* value );

        float                   GetCosViewAngle                         () const;
        void                    SetCosViewAngle                         ( float value );

        float                   GetGroundAltitude                       () const;
        void                    SetGroundAltitude                       ( float value );

        float                   GetMaxSpeed                             () const;
        void                    SetMaxSpeed                             ( float value );

        float                   GetMinSpeed                             () const;
        void                    SetMinSpeed                             ( float value );

        float                   GetRange                                () const;
        void                    SetRange                                ( float value );

        class CPlugSound*       GetSound                                () const;
        void                    SetSound                                ( class CPlugSound* value );

        uint                    GetStandingDuration                     () const;
        void                    SetStandingDuration                     ( uint value );

        uint                    GetUpdateFrequency                      () const;
        void                    SetUpdateFrequency                      ( uint value );

        float                   GetVariance                             () const;
        void                    SetVariance                             ( float value );

        float                   GetVolatility                           () const;
        void                    SetVolatility                           ( float value );

        float                   GetkAvoidance                           () const;
        void                    SetkAvoidance                           ( float value );

        float                   GetkGroundAvoid                         () const;
        void                    SetkGroundAvoid                         ( float value );

        float                   GetkGrouping                            () const;
        void                    SetkGrouping                            ( float value );

        float                   GetkMatching                            () const;
        void                    SetkMatching                            ( float value );

        float                   GetvAvoidance                           () const;
        void                    SetvAvoidance                           ( float value );

        float                   GetvGroundAvoid                         () const;
        void                    SetvGroundAvoid                         ( float value );

        float                   GetvGrouping                            () const;
        void                    SetvGrouping                            ( float value );

        float                   GetvMatching                            () const;
        void                    SetvMatching                            ( float value );

