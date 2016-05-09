        enum { CLASSID = 0x0A104000 };

        static CSceneToyStem*   CreateInstance ();

        float                   GetBoatSpeedRef                         () const;
        void                    SetBoatSpeedRef                         ( float value );

        float                   GetEjectSpeedScale                      () const;
        void                    SetEjectSpeedScale                      ( float value );

        float                   GetEndWidth                             () const;
        void                    SetEndWidth                             ( float value );

        Vec3D                   GetGravity                              () const;
        void                    SetGravity                              ( Vec3D value );

        Vec3D                   GetInitialSpeedDir                      () const;
        void                    SetInitialSpeedDir                      ( Vec3D value );

        bool                    GetIsActive                             () const;
        void                    SetIsActive                             ( bool value );

        class CPlugMaterial*    GetMaterialStem                         () const;
        void                    SetMaterialStem                         ( class CPlugMaterial* value );

        float                   GetMaxCoefSize                          () const;
        void                    SetMaxCoefSize                          ( float value );

        uint                    GetNbPointZ                             () const;
        void                    SetNbPointZ                             ( uint value );

        bool                    GetOnlyUnderSea                         () const;
        void                    SetOnlyUnderSea                         ( bool value );

        Vec3D                   GetRelativePos                          () const;
        void                    SetRelativePos                          ( Vec3D value );

        Vec3D                   GetRelativePos2                         () const;
        void                    SetRelativePos2                         ( Vec3D value );

        class CSceneToySea*     GetSea                                  () const;
        void                    SetSea                                  ( class CSceneToySea* value );

        float                   GetSeaLevel                             () const;
        void                    SetSeaLevel                             ( float value );

        float                   GetSplashCoef                           () const;
        void                    SetSplashCoef                           ( float value );

        float                   GetStartWidth                           () const;
        void                    SetStartWidth                           ( float value );

        color                   GetStemColor                            () const;
        void                    SetStemColor                            ( color value );

        uint                    GetStemDuration                         () const;
        void                    SetStemDuration                         ( uint value );

        float                   GetTextureSizeInMeter                   () const;
        void                    SetTextureSizeInMeter                   ( float value );

        bool                    GetUseRelativePos2                      () const;
        void                    SetUseRelativePos2                      ( bool value );

        bool                    GetUseSeaElevation                      () const;
        void                    SetUseSeaElevation                      ( bool value );

        bool                    GetUseWaveProjection                    () const;
        void                    SetUseWaveProjection                    ( bool value );

        float                   GetValTest1                             () const;
        void                    SetValTest1                             ( float value );

