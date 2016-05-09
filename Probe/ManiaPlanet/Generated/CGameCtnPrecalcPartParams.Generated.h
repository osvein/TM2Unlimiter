        enum { CLASSID = 0x0311C000 };

        static CGameCtnPrecalcPartParams* CreateInstance ();

        uint                    GetCollGroupFlags                       () const;
        void                    SetCollGroupFlags                       ( uint value );

        class CPlugSurfaceGeom* GetCollSurf                             () const;
        void                    SetCollSurf                             ( class CPlugSurfaceGeom* value );

        float                   GetDecalBoxDepth                        () const;
        void                    SetDecalBoxDepth                        ( float value );

        class CPlugDecalModel*  GetDecalModel                           () const;
        void                    SetDecalModel                           ( class CPlugDecalModel* value );

        float                   GetDecalSizeBase                        () const;
        void                    SetDecalSizeBase                        ( float value );

        float                   GetDecalSizeVar                         () const;
        void                    SetDecalSizeVar                         ( float value );

        uint                    GetEmitCount                            () const;
        void                    SetEmitCount                            ( uint value );

        Matrix43                GetEmitLoc                              () const;
        void                    SetEmitLoc                              ( Matrix43 value );

        Vec3D                   GetEmitZoneSize                         () const;
        void                    SetEmitZoneSize                         ( Vec3D value );

        float                   GetFluidFriction                        () const;
        void                    SetFluidFriction                        ( float value );

        float                   GetFriction                             () const;
        void                    SetFriction                             ( float value );

        uint                    GetIterCount                            () const;
        void                    SetIterCount                            ( uint value );

        bool                    GetLeafMotion                           () const;
        void                    SetLeafMotion                           ( bool value );

        float                   GetLeafMotionFreq                       () const;
        void                    SetLeafMotionFreq                       ( float value );

        float                   GetLeafMotionScale                      () const;
        void                    SetLeafMotionScale                      ( float value );

        float                   GetMass                                 () const;
        void                    SetMass                                 ( float value );

        Vec3D                   GetPhyZoneGravity                       () const;
        void                    SetPhyZoneGravity                       ( Vec3D value );

        Vec3D                   GetPhyZoneWind                          () const;
        void                    SetPhyZoneWind                          ( Vec3D value );

        uint                    GetRandValSeed                          () const;
        void                    SetRandValSeed                          ( uint value );

        float                   GetRestitution                          () const;
        void                    SetRestitution                          ( float value );

        float                   GetTimeStep                             () const;
        void                    SetTimeStep                             ( float value );

