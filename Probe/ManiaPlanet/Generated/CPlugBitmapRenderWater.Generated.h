        enum { CLASSID = 0x09087000 };

        static CPlugBitmapRenderWater* CreateInstance ();

        enum eQualityTech3
        {
            QUALITYTECH3_NONE,
            QUALITYTECH3_LOW,
            QUALITYTECH3_HIGH
        };
        static std::wstring     QualityTech3ToString                    ( eQualityTech3 value );
        static eQualityTech3    ParseQualityTech3                       ( const std::wstring& wstrName );

        enum eReflectNoGeom
        {
            REFLECTNOGEOM_ITEMISBACKGND_TMO_TMS,
            REFLECTNOGEOM_ITEMFILTERBACKGND_VSK
        };
        static std::wstring     ReflectNoGeomToString                   ( eReflectNoGeom value );
        static eReflectNoGeom   ParseReflectNoGeom                      ( const std::wstring& wstrName );

        enum eWaterHeight
        {
            WATERHEIGHT_IMPLICIT,
            WATERHEIGHT_EXPLICIT,
            WATERHEIGHT_VERTEXPOSAVG
        };
        static std::wstring     WaterHeightToString                     ( eWaterHeight value );
        static eWaterHeight     ParseWaterHeight                        ( const std::wstring& wstrName );

        enum eWaterType
        {
            WATERTYPE_REFRACTION,
            WATERTYPE_REFLECTION
        };
        static std::wstring     WaterTypeToString                       ( eWaterType value );
        static eWaterType       ParseWaterType                          ( const std::wstring& wstrName );

        bool                    GetAddWaterFog                          () const;
        void                    SetAddWaterFog                          ( bool value );

        class CPlugBitmap*      GetBitmapDepth                          () const;
        void                    SetBitmapDepth                          ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapSplitSky                       () const;
        void                    SetBitmapSplitSky                       ( class CPlugBitmap* value );

        bool                    GetBlitCubeAtFarZ                       () const;
        void                    SetBlitCubeAtFarZ                       ( bool value );

        float                   GetClipPlaneHeight                      () const;
        void                    SetClipPlaneHeight                      ( float value );

        bool                    GetDisableConfigQuality                 () const;
        void                    SetDisableConfigQuality                 ( bool value );

        bool                    GetDisableGeomOptim                     () const;
        void                    SetDisableGeomOptim                     ( bool value );

        float                   GetFHMargin                             () const;
        void                    SetFHMargin                             ( float value );

        float                   GetFMargin                              () const;
        void                    SetFMargin                              ( float value );

        float                   GetFogClampAboveDist                    () const;
        void                    SetFogClampAboveDist                    ( float value );

        float                   GetFogMaxDepth                          () const;
        void                    SetFogMaxDepth                          ( float value );

        bool                    GetFogUseSharedParams                   () const;
        void                    SetFogUseSharedParams                   ( bool value );

        float                   GetFrameRenderRatio                     () const;
        void                    SetFrameRenderRatio                     ( float value );

        bool                    GetFrustumUseHorizon                    () const;
        void                    SetFrustumUseHorizon                    ( bool value );

        bool                    GetHqSplitSkyOutDepth                   () const;
        void                    SetHqSplitSkyOutDepth                   ( bool value );

        float                   GetInvisibleRatio                       () const;
        void                    SetInvisibleRatio                       ( float value );

        uint                    GetInvisibleSleepPeriod                 () const;
        void                    SetInvisibleSleepPeriod                 ( uint value );

        bool                    GetMaskWater2d                          () const;
        void                    SetMaskWater2d                          ( bool value );

        float                   GetMaxCameraDeltaPos                    () const;
        void                    SetMaxCameraDeltaPos                    ( float value );

        float                   GetMaxDistPlaneToAlpha                  () const;
        void                    SetMaxDistPlaneToAlpha                  ( float value );

        uint                    GetMaxUpdatePeriod                      () const;
        void                    SetMaxUpdatePeriod                      ( uint value );

        float                   GetMinCameraDeltaCos                    () const;
        void                    SetMinCameraDeltaCos                    ( float value );

        bool                    GetMirrorGeom                           () const;
        void                    SetMirrorGeom                           ( bool value );

        float                   GetMirrorScaleY                         () const;
        void                    SetMirrorScaleY                         ( float value );

        bool                    GetNoSubWaterOptim                      () const;
        void                    SetNoSubWaterOptim                      ( bool value );

        eQualityTech3           GetQualityTech3                         () const;
        void                    SetQualityTech3                         ( eQualityTech3 value );

        eReflectNoGeom          GetReflectNoGeom                        () const;
        void                    SetReflectNoGeom                        ( eReflectNoGeom value );

        bool                    GetRndLDirSpecInA                       () const;
        void                    SetRndLDirSpecInA                       ( bool value );

        float                   GetTmpWaterVisibilityRatio              () const;
        void                    SetTmpWaterVisibilityRatio              ( float value );

        bool                    GetUseBufferRefract                     () const;
        void                    SetUseBufferRefract                     ( bool value );

        bool                    GetUseCameraZClip                       () const;
        void                    SetUseCameraZClip                       ( bool value );

        bool                    GetUseClipPlane                         () const;
        void                    SetUseClipPlane                         ( bool value );

        bool                    GetUseFMargin                           () const;
        void                    SetUseFMargin                           ( bool value );

        eWaterHeight            GetWaterHeight                          () const;
        void                    SetWaterHeight                          ( eWaterHeight value );

        eWaterType              GetWaterType                            () const;
        void                    SetWaterType                            ( eWaterType value );

        float                   Getm_WaterHeightInW                     () const;
        void                    Setm_WaterHeightInW                     ( float value );

