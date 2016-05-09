        enum { CLASSID = 0x0A10A000 };

        static CSceneToySeaHoule* CreateInstance ();

        float                   GetAmplitude                            () const;
        void                    SetAmplitude                            ( float value );

        float                   GetAngleWindDeltaInDegree               () const;
        void                    SetAngleWindDeltaInDegree               ( float value );

        float                   GetDistorFactorXZ                       () const;
        void                    SetDistorFactorXZ                       ( float value );

        float                   GetFoamMin                              () const;
        void                    SetFoamMin                              ( float value );

        float                   GetFoamScale                            () const;
        void                    SetFoamScale                            ( float value );

        float                   GetRepresentedX                         () const;
        void                    SetRepresentedX                         ( float value );

        float                   GetRepresentedZ                         () const;
        void                    SetRepresentedZ                         ( float value );

        float                   GetSpeed                                () const;
        void                    SetSpeed                                ( float value );

        class CPlugBitmap*      GetTextureCPU                           () const;
        void                    SetTextureCPU                           ( class CPlugBitmap* value );

        bool                    GetUsedForAssiette                      () const;
        void                    SetUsedForAssiette                      ( bool value );

