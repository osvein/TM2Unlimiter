        enum { CLASSID = 0x0A07F000 };

        static CSceneFxBloomHdr* CreateInstance ();

        enum eBlurTexAddress
        {
            BLURTEXADDRESS_WRAP,
            BLURTEXADDRESS_MIRROR,
            BLURTEXADDRESS_CLAMP,
            BLURTEXADDRESS_BORDERSM3
        };
        static std::wstring     BlurTexAddressToString                  ( eBlurTexAddress value );
        static eBlurTexAddress  ParseBlurTexAddress                     ( const std::wstring& wstrName );

        bool                    GetBloomIntensUseCurve                  () const;
        void                    SetBloomIntensUseCurve                  ( bool value );

        float                   GetBloomIntensity                       () const;
        void                    SetBloomIntensity                       ( float value );

        float                   GetBlurCenterOverEdges                  () const;
        void                    SetBlurCenterOverEdges                  ( float value );

        uint                    GetBlurSizeDown1                        () const;
        void                    SetBlurSizeDown1                        ( uint value );

        uint                    GetBlurSizeDown1_2x2                    () const;
        void                    SetBlurSizeDown1_2x2                    ( uint value );

        uint                    GetBlurSizeDown2                        () const;
        void                    SetBlurSizeDown2                        ( uint value );

        uint                    GetBlurSizeDown3                        () const;
        void                    SetBlurSizeDown3                        ( uint value );

        uint                    GetBlurSizeDown4                        () const;
        void                    SetBlurSizeDown4                        ( uint value );

        uint                    GetBlurSizeDown5                        () const;
        void                    SetBlurSizeDown5                        ( uint value );

        float                   GetBlurSizeScaleByLevel                 () const;
        void                    SetBlurSizeScaleByLevel                 ( float value );

        eBlurTexAddress         GetBlurTexAddress                       () const;
        void                    SetBlurTexAddress                       ( eBlurTexAddress value );

        bool                    GetDistorEnable                         () const;
        void                    SetDistorEnable                         ( bool value );

        uint                    GetDistorPeriodTime                     () const;
        void                    SetDistorPeriodTime                     ( uint value );

        float                   GetDistorRedSelectRatio                 () const;
        void                    SetDistorRedSelectRatio                 ( float value );

        bool                    GetDistorUseDepth                       () const;
        void                    SetDistorUseDepth                       ( bool value );

        uint                    GetDownCount                            () const;
        void                    SetDownCount                            ( uint value );

        class CFuncKeysReal*    GetFuncIntensAtHdrNorm                  () const;
        void                    SetFuncIntensAtHdrNorm                  ( class CFuncKeysReal* value );

        float                   GetLensDirtIntens                       () const;
        void                    SetLensDirtIntens                       ( float value );

        float                   GetMinIntensInBloomSrc                  () const;
        void                    SetMinIntensInBloomSrc                  ( float value );

        bool                    GetPreDown4x4_Else2x2                   () const;
        void                    SetPreDown4x4_Else2x2                   ( bool value );

        class CPlugShaderApply* GetShaderBloomSelectFilterDown2         () const;
        void                    SetShaderBloomSelectFilterDown2         ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderBloomSelectFilterDown4         () const;
        void                    SetShaderBloomSelectFilterDown4         ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDistorAtDepth                  () const;
        void                    SetShaderDistorAtDepth                  ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDistorGetDepthIntens           () const;
        void                    SetShaderDistorGetDepthIntens           ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDistorImageSpace               () const;
        void                    SetShaderDistorImageSpace               ( class CPlugShaderApply* value );

        float                   GetStreaksAttenuation                   () const;
        void                    SetStreaksAttenuation                   ( float value );

        float                   GetStreaksIntensity                     () const;
        void                    SetStreaksIntensity                     ( float value );

        uint                    GetStreaksPassCount                     () const;
        void                    SetStreaksPassCount                     ( uint value );

        float                   GetStreaksRotation                      () const;
        void                    SetStreaksRotation                      ( float value );

        uint                    GetStreaksRotationCount                 () const;
        void                    SetStreaksRotationCount                 ( uint value );

        float                   GetStreaksSrcMin                        () const;
        void                    SetStreaksSrcMin                        ( float value );

        float                   GetUpScale                              () const;
        void                    SetUpScale                              ( float value );

        float                   GetUpScaleAlpha                         () const;
        void                    SetUpScaleAlpha                         ( float value );

        bool                    GetUseFakedFlares                       () const;
        void                    SetUseFakedFlares                       ( bool value );

