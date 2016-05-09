        enum { CLASSID = 0x0306D000 };

        static CGameControlCameraFree* CreateInstance ();

        float                   GetAcceleration                         () const;
        void                    SetAcceleration                         ( float value );

        bool                    GetClampPitch                           () const;
        void                    SetClampPitch                           ( bool value );

        float                   GetClampPitchMax                        () const;
        void                    SetClampPitchMax                        ( float value );

        float                   GetClampPitchMin                        () const;
        void                    SetClampPitchMin                        ( float value );

        bool                    GetDisableMouseZ                        () const;
        void                    SetDisableMouseZ                        ( bool value );

        float                   GetDofFocusZ                            () const;
        void                    SetDofFocusZ                            ( float value );

        float                   GetDofLensSize                          () const;
        void                    SetDofLensSize                          ( float value );

        float                   GetForcedRoll                           () const;
        void                    SetForcedRoll                           ( float value );

        float                   GetFovY                                 () const;
        void                    SetFovY                                 ( float value );

        float                   GetMoveInertia                          () const;
        void                    SetMoveInertia                          ( float value );

        float                   GetMoveSpeed                            () const;
        void                    SetMoveSpeed                            ( float value );

        uint                    GetMoveSpeedCoef                        () const;
        void                    SetMoveSpeedCoef                        ( uint value );

        float                   GetPitch                                () const;
        void                    SetPitch                                ( float value );

        float                   GetRadius                               () const;
        void                    SetRadius                               ( float value );

        float                   GetRoll                                 () const;
        void                    SetRoll                                 ( float value );

        float                   GetRotateInertia                        () const;
        void                    SetRotateInertia                        ( float value );

        float                   GetRotateSpeed                          () const;
        void                    SetRotateSpeed                          ( float value );

        float                   GetStartMoveSpeed                       () const;
        void                    SetStartMoveSpeed                       ( float value );

        bool                    GetTargetIsEnabled                      () const;
        void                    SetTargetIsEnabled                      ( bool value );

        Vec3D                   GetTargetPos                            () const;
        void                    SetTargetPos                            ( Vec3D value );

        Vec3D                   GetTranslation                          () const;
        void                    SetTranslation                          ( Vec3D value );

        bool                    GetUseForcedRoll                        () const;
        void                    SetUseForcedRoll                        ( bool value );

        float                   GetX                                    () const;
        void                    SetX                                    ( float value );

        float                   GetY                                    () const;
        void                    SetY                                    ( float value );

        float                   GetYaw                                  () const;
        void                    SetYaw                                  ( float value );

        float                   GetZ                                    () const;
        void                    SetZ                                    ( float value );

