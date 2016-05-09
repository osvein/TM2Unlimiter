        enum { CLASSID = 0x08058000 };

        static CMotionEmitterParticles* CreateInstance ();

        color                   GetEmitColor                            () const;
        void                    SetEmitColor                            ( color value );

        Vec3D                   GetEmitHalfSize                         () const;
        void                    SetEmitHalfSize                         ( Vec3D value );

        float                   GetEmitIntensity                        () const;
        void                    SetEmitIntensity                        ( float value );

        Matrix43                GetEmitLoc                              () const;
        void                    SetEmitLoc                              ( Matrix43 value );

        Vec3D                   GetEmitVel                              () const;
        void                    SetEmitVel                              ( Vec3D value );

        class CPlugParticleEmitterModel* GetEmitterModel                         () const;
        void                    SetEmitterModel                         ( class CPlugParticleEmitterModel* value );

        bool                    GetIsActive                             () const;
        void                    SetIsActive                             ( bool value );

        bool                    GetIsEventMode                          () const;
        void                    SetIsEventMode                          ( bool value );

        bool                    GetUseOwnerLoc                          () const;
        void                    SetUseOwnerLoc                          ( bool value );

