        enum { CLASSID = 0x07011000 };

        static CControlEffectMotion* CreateInstance ();

        float                   GetChargeTime                           () const;
        void                    SetChargeTime                           ( float value );

        Vec3D                   GetEmitterPosOffset                     () const;
        void                    SetEmitterPosOffset                     ( Vec3D value );

        class CFuncEnvelope*    GetEnvelope                             () const;
        void                    SetEnvelope                             ( class CFuncEnvelope* value );

        float                   GetEnveloppePosCharged                  () const;
        void                    SetEnveloppePosCharged                  ( float value );

        float                   GetEnveloppePosStart                    () const;
        void                    SetEnveloppePosStart                    ( float value );

        float                   GetIntensityCharged                     () const;
        void                    SetIntensityCharged                     ( float value );

        float                   GetIntensityStart                       () const;
        void                    SetIntensityStart                       ( float value );

        Id                      GetParticleEmitterId                    () const;
        void                    SetParticleEmitterId                    ( Id value );

        class CPlugParticleEmitterModel* GetParticleEmitterModel                 () const;
        void                    SetParticleEmitterModel                 ( class CPlugParticleEmitterModel* value );

        float                   GetPeriod                               () const;
        void                    SetPeriod                               ( float value );

        float                   GetSpeedCharged                         () const;
        void                    SetSpeedCharged                         ( float value );

        Vec3D                   GetSpeedDirection                       () const;
        void                    SetSpeedDirection                       ( Vec3D value );

        float                   GetSpeedStart                           () const;
        void                    SetSpeedStart                           ( float value );

