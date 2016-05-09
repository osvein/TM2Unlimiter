        enum { CLASSID = 0x090B6000 };

        static CPlugParticleImpactModel* CreateInstance ();

        Id                      GetDecal2dGroupId                       () const;
        void                    SetDecal2dGroupId                       ( Id value );

        class CPlugDecalModel*  GetDecal2dModel                         () const;
        void                    SetDecal2dModel                         ( class CPlugDecalModel* value );

        float                   GetDecal2dSize                          () const;
        void                    SetDecal2dSize                          ( float value );

        uint                    GetDecal3dDiscardDelayMs                () const;
        void                    SetDecal3dDiscardDelayMs                ( uint value );

        float                   GetDecal3dDiscardRadius                 () const;
        void                    SetDecal3dDiscardRadius                 ( float value );

        class CPlugParticleEmitterModel* GetParticleModel                        () const;
        void                    SetParticleModel                        ( class CPlugParticleEmitterModel* value );

        class CPlugSound*       GetSound                                () const;
        void                    SetSound                                ( class CPlugSound* value );

