        enum { CLASSID = 0x0A02D000 };

        static _0A02D000*       CreateInstance ();

        Vec3D                   GetBBoxCenter                           () const;
        void                    SetBBoxCenter                           ( Vec3D value );

        Vec3D                   GetBBoxHDiag                            () const;
        void                    SetBBoxHDiag                            ( Vec3D value );

        float                   GetBackWheelHalfWidth                   () const;
        void                    SetBackWheelHalfWidth                   ( float value );

        float                   GetBackWheelRadius                      () const;
        void                    SetBackWheelRadius                      ( float value );

        float                   GetBackWheelX                           () const;
        void                    SetBackWheelX                           ( float value );

        float                   GetBackWheelZ                           () const;
        void                    SetBackWheelZ                           ( float value );

        float                   GetBigCollisionSpringStiffness          () const;
        void                    SetBigCollisionSpringStiffness          ( float value );

        Vec3D                   GetCollisionVsBBoxCenter                () const;
        void                    SetCollisionVsBBoxCenter                ( Vec3D value );

        Vec3D                   GetCollisionVsBBoxHDiag                 () const;
        void                    SetCollisionVsBBoxHDiag                 ( Vec3D value );

        bool                    GetDoApplyFriction                      () const;
        void                    SetDoApplyFriction                      ( bool value );

        bool                    GetDoCreateForcesInCollisionResponse    () const;
        void                    SetDoCreateForcesInCollisionResponse    ( bool value );

        bool                    GetDoLimitPenetration                   () const;
        void                    SetDoLimitPenetration                   ( bool value );

        bool                    GetDoRestituteMTV                       () const;
        void                    SetDoRestituteMTV                       ( bool value );

        float                   GetFrictionCoeff                        () const;
        void                    SetFrictionCoeff                        ( float value );

        float                   GetFrontWheelHalfWidth                  () const;
        void                    SetFrontWheelHalfWidth                  ( float value );

        float                   GetFrontWheelRadius                     () const;
        void                    SetFrontWheelRadius                     ( float value );

        float                   GetFrontWheelX                          () const;
        void                    SetFrontWheelX                          ( float value );

        float                   GetFrontWheelZ                          () const;
        void                    SetFrontWheelZ                          ( float value );

        float                   GetGroundY                              () const;
        void                    SetGroundY                              ( float value );

        float                   GetImpactRelVelDtCoeff                  () const;
        void                    SetImpactRelVelDtCoeff                  ( float value );

        class CMwRefBuffer*     GetMaterials                            () const;
        void                    SetMaterials                            ( class CMwRefBuffer* value );

        float                   GetOffsetX                              () const;
        void                    SetOffsetX                              ( float value );

        float                   GetPenetrationDepthMax                  () const;
        void                    SetPenetrationDepthMax                  ( float value );

        float                   GetPlayerAgstTrafficMinRelVelToPhysicallize() const;
        void                    SetPlayerAgstTrafficMinRelVelToPhysicallize( float value );

        float                   GetSmallCollisionSpringStiffness        () const;
        void                    SetSmallCollisionSpringStiffness        ( float value );

        class CPlugSolid*       GetSurfSolid                            () const;
        void                    SetSurfSolid                            ( class CPlugSolid* value );

        float                   GetTrafficAgstTrafficMinRelVelToPhysicallize() const;
        void                    SetTrafficAgstTrafficMinRelVelToPhysicallize( float value );

        class _0A030000*        GetTunings                              () const;
        void                    SetTunings                              ( class _0A030000* value );

        bool                    GetUsePenetration_InSpringCompute       () const;
        void                    SetUsePenetration_InSpringCompute       ( bool value );

        bool                    GetUseRelVel_InSpringCompute            () const;
        void                    SetUseRelVel_InSpringCompute            ( bool value );

        uint                    GetWheelCount                           () const;
        void                    SetWheelCount                           ( uint value );

        bool                    GetWheelIsDriving                       () const;
        void                    SetWheelIsDriving                       ( bool value );

        bool                    GetWheelIsSteering                      () const;
        void                    SetWheelIsSteering                      ( bool value );

        StringA                 GetWheelSurfaceTreeId                   () const;
        void                    SetWheelSurfaceTreeId                   ( StringA value );

        bool                    Getm_UseSimplifiedCarModel              () const;
        void                    Setm_UseSimplifiedCarModel              ( bool value );

