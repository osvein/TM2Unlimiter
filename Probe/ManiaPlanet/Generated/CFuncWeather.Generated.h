        enum { CLASSID = 0x05034000 };

        static CFuncWeather*    CreateInstance ();

        enum eFogFormula
        {
            FOGFORMULA_NONE,
            FOGFORMULA_EXP,
            FOGFORMULA_EXP2,
            FOGFORMULA_LINEAR
        };
        static std::wstring     FogFormulaToString                      ( eFogFormula value );
        static eFogFormula      ParseFogFormula                         ( const std::wstring& wstrName );

        enum eFogSpace
        {
            FOGSPACE_CAMERAFARZ,
            FOGSPACE_WORLD
        };
        static std::wstring     FogSpaceToString                        ( eFogSpace value );
        static eFogSpace        ParseFogSpace                           ( const std::wstring& wstrName );

        class CPlugBitmap*      GetBitmapFlareMoon                      () const;
        void                    SetBitmapFlareMoon                      ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapFlareSun                       () const;
        void                    SetBitmapFlareSun                       ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapRainFid                        () const;
        void                    SetBitmapRainFid                        ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapSkyGradV                       () const;
        void                    SetBitmapSkyGradV                       ( class CPlugBitmap* value );

        float                   GetCameraFarZ                           () const;
        void                    SetCameraFarZ                           ( float value );

        color                   GetDayFogColor                          () const;
        void                    SetDayFogColor                          ( color value );

        float                   GetDayFogDensity                        () const;
        void                    SetDayFogDensity                        ( float value );

        float                   GetDayFogEnd                            () const;
        void                    SetDayFogEnd                            ( float value );

        float                   GetDayFogStart                          () const;
        void                    SetDayFogStart                          ( float value );

        float                   GetFlareAngularSizeMoon                 () const;
        void                    SetFlareAngularSizeMoon                 ( float value );

        float                   GetFlareAngularSizeSun                  () const;
        void                    SetFlareAngularSizeSun                  ( float value );

        class GxFogBlender*     GetFogBlender                           () const;
        void                    SetFogBlender                           ( class GxFogBlender* value );

        bool                    GetFogByVertex                          () const;
        void                    SetFogByVertex                          ( bool value );

        float                   GetFogExpDensity                        () const;
        void                    SetFogExpDensity                        ( float value );

        eFogFormula             GetFogFormula                           () const;
        void                    SetFogFormula                           ( eFogFormula value );

        float                   GetFogLinearEnd                         () const;
        void                    SetFogLinearEnd                         ( float value );

        float                   GetFogLinearStart                       () const;
        void                    SetFogLinearStart                       ( float value );

        color                   GetFogRGB                               () const;
        void                    SetFogRGB                               ( color value );

        eFogSpace               GetFogSpace                             () const;
        void                    SetFogSpace                             ( eFogSpace value );

        class CFuncClouds*      GetFuncClouds                           () const;
        void                    SetFuncClouds                           ( class CFuncClouds* value );

        class CPlugFileImg*     GetImageFogColor                        () const;
        void                    SetImageFogColor                        ( class CPlugFileImg* value );

        class CPlugFileImg*     GetImageLightAmb                        () const;
        void                    SetImageLightAmb                        ( class CPlugFileImg* value );

        class CPlugFileImg*     GetImageLightDirDblSided                () const;
        void                    SetImageLightDirDblSided                ( class CPlugFileImg* value );

        class CPlugFileImg*     GetImageLightDirMoon                    () const;
        void                    SetImageLightDirMoon                    ( class CPlugFileImg* value );

        class CPlugFileImg*     GetImageLightDirSun                     () const;
        void                    SetImageLightDirSun                     ( class CPlugFileImg* value );

        class CPlugFileImg*     GetImageSeaColor                        () const;
        void                    SetImageSeaColor                        ( class CPlugFileImg* value );

        Vec2D                   GetLDirSpecIntens                       () const;
        void                    SetLDirSpecIntens                       ( Vec2D value );

        Vec2D                   GetLDirSpecPower                        () const;
        void                    SetLDirSpecPower                        ( Vec2D value );

        class CPlugMaterial*    GetMaterialSea0                         () const;
        void                    SetMaterialSea0                         ( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterialSea1                         () const;
        void                    SetMaterialSea1                         ( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterialSky_Day                      () const;
        void                    SetMaterialSky_Day                      ( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterialSky_Night                    () const;
        void                    SetMaterialSky_Night                    ( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterialSky_SunFall                  () const;
        void                    SetMaterialSky_SunFall                  ( class CPlugMaterial* value );

        class CPlugMaterial*    GetMaterialSky_SunRise                  () const;
        void                    SetMaterialSky_SunRise                  ( class CPlugMaterial* value );

        class CMwNod*           GetSceneFxFid                           () const;
        void                    SetSceneFxFid                           ( class CMwNod* value );

        float                   GetSeaTwkReflecIntensDay                () const;
        void                    SetSeaTwkReflecIntensDay                ( float value );

        float                   GetSeaTwkReflecIntensMidDay             () const;
        void                    SetSeaTwkReflecIntensMidDay             ( float value );

        float                   GetSeaTwkReflecIntensMidNight           () const;
        void                    SetSeaTwkReflecIntensMidNight           ( float value );

        float                   GetSeaTwkReflecIntensNight              () const;
        void                    SetSeaTwkReflecIntensNight              ( float value );

        float                   GetSeaTwkReflecIntensTMDay              () const;
        void                    SetSeaTwkReflecIntensTMDay              ( float value );

        float                   GetSeaTwkReflecIntensTMNight            () const;
        void                    SetSeaTwkReflecIntensTMNight            ( float value );

        float                   GetSeaTwkReflecIntensTMmidDay           () const;
        void                    SetSeaTwkReflecIntensTMmidDay           ( float value );

        float                   GetSeaTwkReflecIntensTMmidNight         () const;
        void                    SetSeaTwkReflecIntensTMmidNight         ( float value );

        color                   GetSeaTwkWaterColor_Day                 () const;
        void                    SetSeaTwkWaterColor_Day                 ( color value );

        color                   GetSeaTwkWaterColor_Night               () const;
        void                    SetSeaTwkWaterColor_Night               ( color value );

        void                    SeaTwkResetToShaderDefaults             ();
