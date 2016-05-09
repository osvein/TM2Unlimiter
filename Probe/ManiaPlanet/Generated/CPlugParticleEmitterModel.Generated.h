        enum { CLASSID = 0x090B3000 };

        static CPlugParticleEmitterModel* CreateInstance ();

        bool                    GetIsSplashMode                         () const;
        void                    SetIsSplashMode                         ( bool value );

        List < nodptr<class CPlugParticleEmitterSubModel> >& GetParticleEmitterSubModels             () const;
        void                    SetParticleEmitterSubModels             ( List < nodptr<class CPlugParticleEmitterSubModel> >& value );

