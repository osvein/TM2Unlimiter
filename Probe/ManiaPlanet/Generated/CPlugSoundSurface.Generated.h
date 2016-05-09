        enum { CLASSID = 0x0905E000 };

        static CPlugSoundSurface* CreateInstance ();

        Array < class CPlugFileSnd* >& GetBigImpact                            () const;
        void                    SetBigImpact                            ( Array < class CPlugFileSnd* >& value );

        float                   GetBigImpactAttenuation                 () const;
        void                    SetBigImpactAttenuation                 ( float value );

        bool                    GetImpactOnlyMode                       () const;
        void                    SetImpactOnlyMode                       ( bool value );

        float                   GetImpactPitchVariance                  () const;
        void                    SetImpactPitchVariance                  ( float value );

        float                   GetImpactVolumeVariance                 () const;
        void                    SetImpactVolumeVariance                 ( float value );

        float                   GetMaxSpeed                             () const;
        void                    SetMaxSpeed                             ( float value );

        Array < class CMwNod* >& GetSkid                                 () const;
        void                    SetSkid                                 ( Array < class CMwNod* >& value );

        Array < class CPlugFileSnd* >& GetSmallImpact                          () const;
        void                    SetSmallImpact                          ( Array < class CPlugFileSnd* >& value );

        float                   GetSmallImpactAttenuation               () const;
        void                    SetSmallImpactAttenuation               ( float value );

        Array < class CMwNod* >& GetTexture                              () const;
        void                    SetTexture                              ( Array < class CMwNod* >& value );

