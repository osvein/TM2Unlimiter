        enum { CLASSID = 0x0A034000 };

        static CSceneFxColors*  CreateInstance ();

        class CPlugBitmap*      GetBitmapDepth                          () const;
        void                    SetBitmapDepth                          ( class CPlugBitmap* value );

        Vec2D                   GetBitmapRangeA                         () const;
        void                    SetBitmapRangeA                         ( Vec2D value );

        Vec2D                   GetBitmapRangeB                         () const;
        void                    SetBitmapRangeB                         ( Vec2D value );

        Vec2D                   GetBitmapRangeG                         () const;
        void                    SetBitmapRangeG                         ( Vec2D value );

        Vec2D                   GetBitmapRangeR                         () const;
        void                    SetBitmapRangeR                         ( Vec2D value );

        class CPlugBitmap*      GetBitmapSbch                           () const;
        void                    SetBitmapSbch                           ( class CPlugBitmap* value );

        Vec2D                   GetBitmapTcPeriod                       () const;
        void                    SetBitmapTcPeriod                       ( Vec2D value );

        Vec2D                   GetBitmapTcScale                        () const;
        void                    SetBitmapTcScale                        ( Vec2D value );

        float                   GetCloudsIntensity                      () const;
        void                    SetCloudsIntensity                      ( float value );

        class CPlugMaterial*    GetMaterialColors                       () const;
        void                    SetMaterialColors                       ( class CPlugMaterial* value );

        float                   GetParamBlendAlpha                      () const;
        void                    SetParamBlendAlpha                      ( float value );

        color                   GetParamBlendRGB                        () const;
        void                    SetParamBlendRGB                        ( color value );

        float                   GetParamBrightness                      () const;
        void                    SetParamBrightness                      ( float value );

        float                   GetParamContrast                        () const;
        void                    SetParamContrast                        ( float value );

        float                   GetParamHue                             () const;
        void                    SetParamHue                             ( float value );

        float                   GetParamInverseRGB                      () const;
        void                    SetParamInverseRGB                      ( float value );

        float                   GetParamModulateB                       () const;
        void                    SetParamModulateB                       ( float value );

        float                   GetParamModulateG                       () const;
        void                    SetParamModulateG                       ( float value );

        float                   GetParamModulateR                       () const;
        void                    SetParamModulateR                       ( float value );

        color                   GetParamModulateRGB                     () const;
        void                    SetParamModulateRGB                     ( color value );

        float                   GetParamSaturation                      () const;
        void                    SetParamSaturation                      ( float value );

        bool                    GetParamUserEnable                      () const;
        void                    SetParamUserEnable                      ( bool value );

        float                   GetParamZFarBlendAlpha                  () const;
        void                    SetParamZFarBlendAlpha                  ( float value );

        color                   GetParamZFarBlendRGB                    () const;
        void                    SetParamZFarBlendRGB                    ( color value );

        float                   GetParamZFarBrightness                  () const;
        void                    SetParamZFarBrightness                  ( float value );

        float                   GetParamZFarContrast                    () const;
        void                    SetParamZFarContrast                    ( float value );

        float                   GetParamZFarHue                         () const;
        void                    SetParamZFarHue                         ( float value );

        float                   GetParamZFarInverseRGB                  () const;
        void                    SetParamZFarInverseRGB                  ( float value );

        float                   GetParamZFarModulateB                   () const;
        void                    SetParamZFarModulateB                   ( float value );

        float                   GetParamZFarModulateG                   () const;
        void                    SetParamZFarModulateG                   ( float value );

        float                   GetParamZFarModulateR                   () const;
        void                    SetParamZFarModulateR                   ( float value );

        color                   GetParamZFarModulateRGB                 () const;
        void                    SetParamZFarModulateRGB                 ( color value );

        float                   GetParamZFarSaturation                  () const;
        void                    SetParamZFarSaturation                  ( float value );

        float                   GetParamZFar_StartZ                     () const;
        void                    SetParamZFar_StartZ                     ( float value );

        float                   GetParamZFar_StopZ                      () const;
        void                    SetParamZFar_StopZ                      ( float value );

        class CPlugShaderApply* GetShaderAutoSaturateWithLight          () const;
        void                    SetShaderAutoSaturateWithLight          ( class CPlugShaderApply* value );

        float                   GetUserIntensity                        () const;
        void                    SetUserIntensity                        ( float value );

        float                   GetZFarIntensity                        () const;
        void                    SetZFarIntensity                        ( float value );

