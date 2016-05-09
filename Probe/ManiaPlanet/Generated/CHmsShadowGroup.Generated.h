        enum { CLASSID = 0x06012000 };

        static CHmsShadowGroup* CreateInstance ();

        enum eDepthBiasScale
        {
            DEPTHBIASSCALE_OLD0,
            DEPTHBIASSCALE_2008_07,
            DEPTHBIASSCALE_2009_SLOPE1
        };
        static std::wstring     DepthBiasScaleToString                  ( eDepthBiasScale value );
        static eDepthBiasScale  ParseDepthBiasScale                     ( const std::wstring& wstrName );

        bool                    GetAllStaticItemAreCaster               () const;
        void                    SetAllStaticItemAreCaster               ( bool value );

        uint                    GetDepthBiasConst                       () const;
        void                    SetDepthBiasConst                       ( uint value );

        float                   GetDepthBiasConstShaderExtra            () const;
        void                    SetDepthBiasConstShaderExtra            ( float value );

        eDepthBiasScale         GetDepthBiasScale                       () const;
        void                    SetDepthBiasScale                       ( eDepthBiasScale value );

        float                   GetDepthBiasSlope                       () const;
        void                    SetDepthBiasSlope                       ( float value );

        bool                    GetDepthNeed32b                         () const;
        void                    SetDepthNeed32b                         ( bool value );

        bool                    GetDepthTestMaskRender                  () const;
        void                    SetDepthTestMaskRender                  ( bool value );

        bool                    GetEnable                               () const;
        void                    SetEnable                               ( bool value );

        bool                    GetEnableLightDir                       () const;
        void                    SetEnableLightDir                       ( bool value );

        bool                    GetEnableLightPos                       () const;
        void                    SetEnableLightPos                       ( bool value );

        bool                    GetForceShadowMask                      () const;
        void                    SetForceShadowMask                      ( bool value );

        bool                    GetForceWorldAlign                      () const;
        void                    SetForceWorldAlign                      ( bool value );

        bool                    GetIsStatic                             () const;
        void                    SetIsStatic                             ( bool value );

        bool                    GetIsStaticDirty                        () const;
        void                    SetIsStaticDirty                        ( bool value );

        float                   GetLocalIntensity                       () const;
        void                    SetLocalIntensity                       ( float value );

        uint                    GetMaskBlurTexelCount                   () const;
        void                    SetMaskBlurTexelCount                   ( uint value );

        uint                    GetMaxShadowCountGrp0                   () const;
        void                    SetMaxShadowCountGrp0                   ( uint value );

        bool                    GetNeedSelfShadow                       () const;
        void                    SetNeedSelfShadow                       ( bool value );

        float                   GetPssmDistNF0                          () const;
        void                    SetPssmDistNF0                          ( float value );

        float                   GetPssmDistNF1                          () const;
        void                    SetPssmDistNF1                          ( float value );

        float                   GetPssmDistNF2                          () const;
        void                    SetPssmDistNF2                          ( float value );

        float                   GetPssmDistNF3                          () const;
        void                    SetPssmDistNF3                          ( float value );

        float                   GetPssmDistNF4                          () const;
        void                    SetPssmDistNF4                          ( float value );

        float                   GetPssmDistScale                        () const;
        void                    SetPssmDistScale                        ( float value );

        float                   GetPssmOverlapIn01                      () const;
        void                    SetPssmOverlapIn01                      ( float value );

        float                   GetPssmSkipCmpStaticScale               () const;
        void                    SetPssmSkipCmpStaticScale               ( float value );

        uint                    GetPssmTexCount                         () const;
        void                    SetPssmTexCount                         ( uint value );

        uint                    GetPssmTexCountActive                   () const;
        void                    SetPssmTexCountActive                   ( uint value );

        uint                    GetPssmTexelCountX                      () const;
        void                    SetPssmTexelCountX                      ( uint value );

        float                   GetShadeSlope                           () const;
        void                    SetShadeSlope                           ( float value );

        bool                    GetShadowInShader                       () const;
        void                    SetShadowInShader                       ( bool value );

        float                   GetSoft2dSlope                          () const;
        void                    SetSoft2dSlope                          ( float value );

        Vec2D                   GetSoftSizeInW                          () const;
        void                    SetSoftSizeInW                          ( Vec2D value );

        uint                    GetTexelCountX                          () const;
        void                    SetTexelCountX                          ( uint value );

        uint                    GetTexelCountY                          () const;
        void                    SetTexelCountY                          ( uint value );

        bool                    GetTmBackgroundCast                     () const;
        void                    SetTmBackgroundCast                     ( bool value );

        bool                    GetTmBackgroundReceives                 () const;
        void                    SetTmBackgroundReceives                 ( bool value );

        bool                    GetUseHqCasterBBox                      () const;
        void                    SetUseHqCasterBBox                      ( bool value );

