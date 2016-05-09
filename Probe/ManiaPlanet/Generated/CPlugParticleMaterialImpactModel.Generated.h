        enum { CLASSID = 0x090B7000 };

        static CPlugParticleMaterialImpactModel* CreateInstance ();

        uint                    GetDefaultMaterial                      () const;
        void                    SetDefaultMaterial                      ( uint value );

        List < nodptr<class CPlugParticleImpactModel> >& GetImpactModels                         () const;
        void                    SetImpactModels                         ( List < nodptr<class CPlugParticleImpactModel> >& value );

