        enum { CLASSID = 0x090C6000 };

        static CPlugParticleGpuModel* CreateInstance ();

        bool                    GetAnimateGrid                          () const;
        void                    SetAnimateGrid                          ( bool value );

        uint                    GetAtlasGridCountX                      () const;
        void                    SetAtlasGridCountX                      ( uint value );

        uint                    GetAtlasGridCountY                      () const;
        void                    SetAtlasGridCountY                      ( uint value );

        float                   GetBirthBegin                           () const;
        void                    SetBirthBegin                           ( float value );

        float                   GetBirthDuration                        () const;
        void                    SetBirthDuration                        ( float value );

        class CPlugBitmap*      GetBitmap                               () const;
        void                    SetBitmap                               ( class CPlugBitmap* value );

        float                   GetElasticity                           () const;
        void                    SetElasticity                           ( float value );

        float                   GetIntensity                            () const;
        void                    SetIntensity                            ( float value );

        float                   GetIntensityAgeIn                       () const;
        void                    SetIntensityAgeIn                       ( float value );

        float                   GetIntensityAgeOut                      () const;
        void                    SetIntensityAgeOut                      ( float value );

        float                   GetIntensityAgePower                    () const;
        void                    SetIntensityAgePower                    ( float value );

        float                   GetIntensityVariation                   () const;
        void                    SetIntensityVariation                   ( float value );

        float                   GetLife                                 () const;
        void                    SetLife                                 ( float value );

        float                   GetLifeVariation                        () const;
        void                    SetLifeVariation                        ( float value );

        float                   GetPersistenceTime                      () const;
        void                    SetPersistenceTime                      ( float value );

        float                   GetRestSpeed                            () const;
        void                    SetRestSpeed                            ( float value );

        float                   GetSize                                 () const;
        void                    SetSize                                 ( float value );

        float                   GetSizeEndScale                         () const;
        void                    SetSizeEndScale                         ( float value );

        float                   GetSizeVariation                        () const;
        void                    SetSizeVariation                        ( float value );

        bool                    GetUseDxDy0A                            () const;
        void                    SetUseDxDy0A                            ( bool value );

        bool                    GetUseHueShift                          () const;
        void                    SetUseHueShift                          ( bool value );

        float                   GetVelScaleRot2d                        () const;
        void                    SetVelScaleRot2d                        ( float value );

        float                   GetVelScaleRot2dVar                     () const;
        void                    SetVelScaleRot2dVar                     ( float value );

        float                   GetViscosity                            () const;
        void                    SetViscosity                            ( float value );

        float                   GetWeight                               () const;
        void                    SetWeight                               ( float value );

