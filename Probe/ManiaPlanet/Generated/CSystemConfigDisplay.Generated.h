        enum { CLASSID = 0x0B013000 };

        static CSystemConfigDisplay* CreateInstance ();

        enum eAntialiasing
        {
            ANTIALIASING_ANTIALIASING_NONE,
            ANTIALIASING_ANTIALIASING_2_SAMPLES,
            ANTIALIASING_ANTIALIASING_4_SAMPLES,
            ANTIALIASING_ANTIALIASING_6_SAMPLES,
            ANTIALIASING_ANTIALIASING_8_SAMPLES,
            ANTIALIASING_ANTIALIASING_16_SAMPLES
        };
        static std::wstring     AntialiasingToString                    ( eAntialiasing value );
        static eAntialiasing    ParseAntialiasing                       ( const std::wstring& wstrName );

        enum eAutoScale
        {
            AUTOSCALE_GFXAUTO_FASTER,
            AUTOSCALE_GFXAUTO_NORMAL,
            AUTOSCALE_GFXAUTO_NICER
        };
        static std::wstring     AutoScaleToString                       ( eAutoScale value );
        static eAutoScale       ParseAutoScale                          ( const std::wstring& wstrName );

        enum eDeferredAA
        {
            DEFERREDAA_DEFERREDANTIALIASING_NONE,
            DEFERREDAA_DEFERREDANTIALIASING_FXAA
        };
        static std::wstring     DeferredAAToString                      ( eDeferredAA value );
        static eDeferredAA      ParseDeferredAA                         ( const std::wstring& wstrName );

        enum eDisplayMode
        {
            DISPLAYMODE_DISPLAYMODE_FULLSCREEN,
            DISPLAYMODE_DISPLAYMODE_WINDOWED,
            DISPLAYMODE_DISPLAYMODE_WINDOWEDFULL
        };
        static std::wstring     DisplayModeToString                     ( eDisplayMode value );
        static eDisplayMode     ParseDisplayMode                        ( const std::wstring& wstrName );

        enum eDisplaySync
        {
            DISPLAYSYNC_DISPLAYSYNC_NONE,
            DISPLAYSYNC_DISPLAYSYNC_1_INTERVAL,
            DISPLAYSYNC_DISPLAYSYNC_2_INTERVALS,
            DISPLAYSYNC_DISPLAYSYNC_3_INTERVALS
        };
        static std::wstring     DisplaySyncToString                     ( eDisplaySync value );
        static eDisplaySync     ParseDisplaySync                        ( const std::wstring& wstrName );

        enum eFilterAnisoQ
        {
            FILTERANISOQ_MAXFILTERING_BILINEAR,
            FILTERANISOQ_MAXFILTERING_TRILINEAR,
            FILTERANISOQ_MAXFILTERING_ANISOTROPIC_2X,
            FILTERANISOQ_MAXFILTERING_ANISOTROPIC_4X,
            FILTERANISOQ_MAXFILTERING_ANISOTROPIC_8X,
            FILTERANISOQ_MAXFILTERING_ANISOTROPIC_16X,
            FILTERANISOQ_MAXFILTERING_ANISO_16X_EVERYWHERE
        };
        static std::wstring     FilterAnisoQToString                    ( eFilterAnisoQ value );
        static eFilterAnisoQ    ParseFilterAnisoQ                       ( const std::wstring& wstrName );

        enum eFxBloomHdr
        {
            FXBLOOMHDR_FXBLOOMHDR_NONE,
            FXBLOOMHDR_FXBLOOMHDR_MEDIUM,
            FXBLOOMHDR_FXBLOOMHDR_HIGH
        };
        static std::wstring     FxBloomHdrToString                      ( eFxBloomHdr value );
        static eFxBloomHdr      ParseFxBloomHdr                         ( const std::wstring& wstrName );

        enum eFxMotionBlur
        {
            FXMOTIONBLUR_FXMOTIONBLUR_OFF,
            FXMOTIONBLUR_FXMOTIONBLUR_ON
        };
        static std::wstring     FxMotionBlurToString                    ( eFxMotionBlur value );
        static eFxMotionBlur    ParseFxMotionBlur                       ( const std::wstring& wstrName );

        enum eGpuSync
        {
            GPUSYNC_GPUSYNC_NONE,
            GPUSYNC_GPUSYNC_3_FRAMES,
            GPUSYNC_GPUSYNC_2_FRAMES,
            GPUSYNC_GPUSYNC_1_FRAME,
            GPUSYNC_GPUSYNC_IMMEDIATE
        };
        static std::wstring     GpuSyncToString                         ( eGpuSync value );
        static eGpuSync         ParseGpuSync                            ( const std::wstring& wstrName );

        enum eLightFromMap
        {
            LIGHTFROMMAP_LIGHTFROMMAP_NONE,
            LIGHTFROMMAP_LIGHTFROMMAP_MY_VEHICLE,
            LIGHTFROMMAP_LIGHTFROMMAP_ALL_VEHICLES
        };
        static std::wstring     LightFromMapToString                    ( eLightFromMap value );
        static eLightFromMap    ParseLightFromMap                       ( const std::wstring& wstrName );

        enum eLightMapQuality
        {
            LIGHTMAPQUALITY_LIGHTMAPQUALITY_NONE,
            LIGHTMAPQUALITY_LIGHTMAPQUALITY_VERY_FAST,
            LIGHTMAPQUALITY_LIGHTMAPQUALITY_FAST,
            LIGHTMAPQUALITY_LIGHTMAPQUALITY_DEFAULT,
            LIGHTMAPQUALITY_LIGHTMAPQUALITY_HIGH
        };
        static std::wstring     LightMapQualityToString                 ( eLightMapQuality value );
        static eLightMapQuality ParseLightMapQuality                    ( const std::wstring& wstrName );

        enum eLightMapSizeMax
        {
            LIGHTMAPSIZEMAX_LIGHTMAPSIZEMAX_AUTO,
            LIGHTMAPSIZEMAX_LIGHTMAPSIZEMAX_1K_2
        };
        static std::wstring     LightMapSizeMaxToString                 ( eLightMapSizeMax value );
        static eLightMapSizeMax ParseLightMapSizeMax                    ( const std::wstring& wstrName );

        enum ePreset
        {
            PRESET_DISPLAYPRESET_NONE,
            PRESET_DISPLAYPRESET_VERY_FAST,
            PRESET_DISPLAYPRESET_FAST,
            PRESET_DISPLAYPRESET_NICE,
            PRESET_DISPLAYPRESET_VERY_NICE
        };
        static std::wstring     PresetToString                          ( ePreset value );
        static ePreset          ParsePreset                             ( const std::wstring& wstrName );

        enum eShaderQuality
        {
            SHADERQUALITY_SHADERQUALITY_VERY_FAST,
            SHADERQUALITY_SHADERQUALITY_FAST,
            SHADERQUALITY_SHADERQUALITY_NICE,
            SHADERQUALITY_SHADERQUALITY_VERY_NICE
        };
        static std::wstring     ShaderQualityToString                   ( eShaderQuality value );
        static eShaderQuality   ParseShaderQuality                      ( const std::wstring& wstrName );

        enum eShadows
        {
            SHADOWS_SHADOWS_NONE,
            SHADOWS_SHADOWS_MINIMUM,
            SHADOWS_SHADOWS_MEDIUM,
            SHADOWS_SHADOWS_HIGH,
            SHADOWS_SHADOWS_VERY_HIGH
        };
        static std::wstring     ShadowsToString                         ( eShadows value );
        static eShadows         ParseShadows                            ( const std::wstring& wstrName );

        enum eTexturesQuality
        {
            TEXTURESQUALITY_TEXTURESQUALITY_VERY_LOW,
            TEXTURESQUALITY_TEXTURESQUALITY_LOW,
            TEXTURESQUALITY_TEXTURESQUALITY_MEDIUM,
            TEXTURESQUALITY_TEXTURESQUALITY_HIGH
        };
        static std::wstring     TexturesQualityToString                 ( eTexturesQuality value );
        static eTexturesQuality ParseTexturesQuality                    ( const std::wstring& wstrName );

        enum eTripleBuffer
        {
            TRIPLEBUFFER_TRIPLEBUFFERING_OFF,
            TRIPLEBUFFER_TRIPLEBUFFERING_ON
        };
        static std::wstring     TripleBufferToString                    ( eTripleBuffer value );
        static eTripleBuffer    ParseTripleBuffer                       ( const std::wstring& wstrName );

        enum eVehicleReflect
        {
            VEHICLEREFLECT_VEHICLEREFLECT_LOW,
            VEHICLEREFLECT_VEHICLEREFLECT_HIGHINREPLAY,
            VEHICLEREFLECT_VEHICLEREFLECT_HIGH
        };
        static std::wstring     VehicleReflectToString                  ( eVehicleReflect value );
        static eVehicleReflect  ParseVehicleReflect                     ( const std::wstring& wstrName );

        enum eVertexProcess
        {
            VERTEXPROCESS_VERTEXPROCESS_HARDWARE,
            VERTEXPROCESS_VERTEXPROCESS_SOFTWAREVERTEXSHADER,
            VERTEXPROCESS_VERTEXPROCESS_SOFTWARE
        };
        static std::wstring     VertexProcessToString                   ( eVertexProcess value );
        static eVertexProcess   ParseVertexProcess                      ( const std::wstring& wstrName );

        enum eWaterReflect
        {
            WATERREFLECT_WATERREFLECT_LOW,
            WATERREFLECT_WATERREFLECT_MEDIUM,
            WATERREFLECT_WATERREFLECT_HIGH
        };
        static std::wstring     WaterReflectToString                    ( eWaterReflect value );
        static eWaterReflect    ParseWaterReflect                       ( const std::wstring& wstrName );

        enum eZClip
        {
            ZCLIP_ZCLIP_DISABLE,
            ZCLIP_ZCLIP_AUTO,
            ZCLIP_ZCLIP_FIXED
        };
        static std::wstring     ZClipToString                           ( eZClip value );
        static eZClip           ParseZClip                              ( const std::wstring& wstrName );

        enum eZClipAuto
        {
            ZCLIPAUTO_ZCLIPAUTO_NEAR,
            ZCLIPAUTO_ZCLIPAUTO_MEDIUM,
            ZCLIPAUTO_ZCLIPAUTO_FAR
        };
        static std::wstring     ZClipAutoToString                       ( eZClipAuto value );
        static eZClipAuto       ParseZClipAuto                          ( const std::wstring& wstrName );

        float                   GetAgpUseFactor                         () const;
        void                    SetAgpUseFactor                         ( float value );

        eAntialiasing           GetAntialiasing                         () const;
        void                    SetAntialiasing                         ( eAntialiasing value );

        eAutoScale              GetAutoScale                            () const;
        void                    SetAutoScale                            ( eAutoScale value );

        bool                    GetCustomize                            () const;
        void                    SetCustomize                            ( bool value );

        eDeferredAA             GetDeferredAA                           () const;
        void                    SetDeferredAA                           ( eDeferredAA value );

        bool                    GetDisableHdrCubeRenderMipMap           () const;
        void                    SetDisableHdrCubeRenderMipMap           ( bool value );

        bool                    GetDisableWindowedAntiAlias             () const;
        void                    SetDisableWindowedAntiAlias             ( bool value );

        bool                    GetDisableZBufferRange                  () const;
        void                    SetDisableZBufferRange                  ( bool value );

        eDisplayMode            GetDisplayMode                          () const;
        void                    SetDisplayMode                          ( eDisplayMode value );

        eDisplaySync            GetDisplaySync                          () const;
        void                    SetDisplaySync                          ( eDisplaySync value );

        bool                    GetEmulateCursorGDI                     () const;
        void                    SetEmulateCursorGDI                     ( bool value );

        bool                    GetEnableCheckLags                      () const;
        void                    SetEnableCheckLags                      ( bool value );

        bool                    GetEnableD3D9Ex                         () const;
        void                    SetEnableD3D9Ex                         ( bool value );

        bool                    GetEnableFullscreenGDI                  () const;
        void                    SetEnableFullscreenGDI                  ( bool value );

        bool                    GetEnableRenderReadBack                 () const;
        void                    SetEnableRenderReadBack                 ( bool value );

        eFilterAnisoQ           GetFilterAnisoQ                         () const;
        void                    SetFilterAnisoQ                         ( eFilterAnisoQ value );

        eFxBloomHdr             GetFxBloomHdr                           () const;
        void                    SetFxBloomHdr                           ( eFxBloomHdr value );

        eFxMotionBlur           GetFxMotionBlur                         () const;
        void                    SetFxMotionBlur                         ( eFxMotionBlur value );

        float                   GetFxMotionBlurIntens                   () const;
        void                    SetFxMotionBlurIntens                   ( float value );

        float                   GetGeomLodScaleZ                        () const;
        void                    SetGeomLodScaleZ                        ( float value );

        eGpuSync                GetGpuSync                              () const;
        void                    SetGpuSync                              ( eGpuSync value );

        uint                    GetGpuSyncTimeOut                       () const;
        void                    SetGpuSyncTimeOut                       ( uint value );

        bool                    GetIgnoreDriverCrashes                  () const;
        void                    SetIgnoreDriverCrashes                  ( bool value );

        eLightFromMap           GetLightFromMap                         () const;
        void                    SetLightFromMap                         ( eLightFromMap value );

        bool                    GetLightMapLightIndex                   () const;
        void                    SetLightMapLightIndex                   ( bool value );

        eLightMapQuality        GetLightMapQuality                      () const;
        void                    SetLightMapQuality                      ( eLightMapQuality value );

        bool                    GetLightMapQualityUltra                 () const;
        void                    SetLightMapQualityUltra                 ( bool value );

        eLightMapSizeMax        GetLightMapSizeMax                      () const;
        void                    SetLightMapSizeMax                      ( eLightMapSizeMax value );

        uint                    GetMaxFps                               () const;
        void                    SetMaxFps                               ( uint value );

        uint                    GetMultiThreadCountMax                  () const;
        void                    SetMultiThreadCountMax                  ( uint value );

        bool                    GetMultiThreadEnable                    () const;
        void                    SetMultiThreadEnable                    ( bool value );

        bool                    GetOptimizePartDyna                     () const;
        void                    SetOptimizePartDyna                     ( bool value );

        bool                    GetPostFxEnable                         () const;
        void                    SetPostFxEnable                         ( bool value );

        ePreset                 GetPreset                               () const;
        void                    SetPreset                               ( ePreset value );

        uint                    GetRefreshRate                          () const;
        void                    SetRefreshRate                          ( uint value );

        eShaderQuality          GetShaderQuality                        () const;
        void                    SetShaderQuality                        ( eShaderQuality value );

        eShadows                GetShadows                              () const;
        void                    SetShadows                              ( eShadows value );

        bool                    GetStereoscopyAdvanced                  () const;
        void                    SetStereoscopyAdvanced                  ( bool value );

        bool                    GetStereoscopyByDefault                 () const;
        void                    SetStereoscopyByDefault                 ( bool value );

        bool                    GetTextureDecals_2D                     () const;
        void                    SetTextureDecals_2D                     ( bool value );

        bool                    GetTextureDecals_3D                     () const;
        void                    SetTextureDecals_3D                     ( bool value );

        eTexturesQuality        GetTexturesQuality                      () const;
        void                    SetTexturesQuality                      ( eTexturesQuality value );

        eTripleBuffer           GetTripleBuffer                         () const;
        void                    SetTripleBuffer                         ( eTripleBuffer value );

        eVehicleReflect         GetVehicleReflect                       () const;
        void                    SetVehicleReflect                       ( eVehicleReflect value );

        uint                    GetVehicleReflectMaxCount               () const;
        void                    SetVehicleReflectMaxCount               ( uint value );

        eVertexProcess          GetVertexProcess                        () const;
        void                    SetVertexProcess                        ( eVertexProcess value );

        bool                    GetWaterGeomStadium                     () const;
        void                    SetWaterGeomStadium                     ( bool value );

        eWaterReflect           GetWaterReflect                         () const;
        void                    SetWaterReflect                         ( eWaterReflect value );

        eZClip                  GetZClip                                () const;
        void                    SetZClip                                ( eZClip value );

        eZClipAuto              GetZClipAuto                            () const;
        void                    SetZClipAuto                            ( eZClipAuto value );

        uint                    GetZClipNbBlock                         () const;
        void                    SetZClipNbBlock                         ( uint value );

