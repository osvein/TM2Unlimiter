        enum { CLASSID = 0x0A08C000 };

        static CSceneMgrTrafficPhy* CreateInstance ();

        float                   GetAirGravityCoef                       () const;
        void                    SetAirGravityCoef                       ( float value );

        Vec3D                   GetCar_BackLeftWheelRelativePos         () const;
        void                    SetCar_BackLeftWheelRelativePos         ( Vec3D value );

        Vec3D                   GetCar_BackRightWheelRelativePos        () const;
        void                    SetCar_BackRightWheelRelativePos        ( Vec3D value );

        Vec3D                   GetCar_FrontLeftWheelRelativePos        () const;
        void                    SetCar_FrontLeftWheelRelativePos        ( Vec3D value );

        Vec3D                   GetCar_FrontRightWheelRelativePos       () const;
        void                    SetCar_FrontRightWheelRelativePos       ( Vec3D value );

        float                   GetMaxUnevenWithoutJump                 () const;
        void                    SetMaxUnevenWithoutJump                 ( float value );

        float                   GetPhysicallisationCollSurfScale        () const;
        void                    SetPhysicallisationCollSurfScale        ( float value );

        List < nodptr<class CPlugTrafficShapedTrajectory> >& GetShapedTrajectories                   () const;
        void                    SetShapedTrajectories                   ( List < nodptr<class CPlugTrafficShapedTrajectory> >& value );

        class CPlugTrafficGraph* GetTrafficGraph                         () const;
        void                    SetTrafficGraph                         ( class CPlugTrafficGraph* value );

        class _0A02D000*        GetVehiclePhyModel                      () const;
        void                    SetVehiclePhyModel                      ( class _0A02D000* value );

        float                   GetVelMaxSqrTobeConsideredStatic        () const;
        void                    SetVelMaxSqrTobeConsideredStatic        ( float value );

        Vec3D                   GetVertiDownMaxHeight                   () const;
        void                    SetVertiDownMaxHeight                   ( Vec3D value );

        void                    CheckPointWholeTrafficFlow              ();
        void                    PhysicallizeAll                         ();
        void                    ResetTraffic                            ();
        void                    UnPhysicallizeAll                       ();
