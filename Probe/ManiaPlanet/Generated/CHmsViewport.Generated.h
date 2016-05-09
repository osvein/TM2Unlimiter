        enum { CLASSID = 0x06010000 };

        static CHmsViewport*    CreateInstance ();

        enum eAmbientOcc
        {
            AMBIENTOCC_OFF,
            AMBIENTOCC_ON
        };
        static std::wstring     AmbientOccToString                      ( eAmbientOcc value );
        static eAmbientOcc      ParseAmbientOcc                         ( const std::wstring& wstrName );

        enum eBitmapQuality
        {
            BITMAPQUALITY_PC0,
            BITMAPQUALITY_PC1,
            BITMAPQUALITY_PC2,
            BITMAPQUALITY_PC3
        };
        static std::wstring     BitmapQualityToString                   ( eBitmapQuality value );
        static eBitmapQuality   ParseBitmapQuality                      ( const std::wstring& wstrName );

        enum eDeferredAA
        {
            DEFERREDAA_NONE,
            DEFERREDAA_FXAA,
            DEFERREDAA_SS_2X2,
            DEFERREDAA_SS_3X3
        };
        static std::wstring     DeferredAAToString                      ( eDeferredAA value );
        static eDeferredAA      ParseDeferredAA                         ( const std::wstring& wstrName );

        enum eDeviceKind
        {
            DEVICEKIND_PC0,
            DEVICEKIND_PC1,
            DEVICEKIND_PC2,
            DEVICEKIND_PC3
        };
        static std::wstring     DeviceKindToString                      ( eDeviceKind value );
        static eDeviceKind      ParseDeviceKind                         ( const std::wstring& wstrName );

        enum eFullScreenModeIndex
        {

        };
        static std::wstring     FullScreenModeIndexToString             ( eFullScreenModeIndex value );
        static eFullScreenModeIndex ParseFullScreenModeIndex                ( const std::wstring& wstrName );

        enum eFullScreenMultiSample
        {

        };
        static std::wstring     FullScreenMultiSampleToString           ( eFullScreenMultiSample value );
        static eFullScreenMultiSample ParseFullScreenMultiSample              ( const std::wstring& wstrName );

        enum eFullScreenRefreshRate
        {

        };
        static std::wstring     FullScreenRefreshRateToString           ( eFullScreenRefreshRate value );
        static eFullScreenRefreshRate ParseFullScreenRefreshRate              ( const std::wstring& wstrName );

        enum eMaxFiltering
        {
            MAXFILTERING_POINT,
            MAXFILTERING_BILINEAR,
            MAXFILTERING_TRILINEAR,
            MAXFILTERING_ANISOTROPIC,
            MAXFILTERING_FORCEANISO
        };
        static std::wstring     MaxFilteringToString                    ( eMaxFiltering value );
        static eMaxFiltering    ParseMaxFiltering                       ( const std::wstring& wstrName );

        enum eMultiSampleType
        {

        };
        static std::wstring     MultiSampleTypeToString                 ( eMultiSampleType value );
        static eMultiSampleType ParseMultiSampleType                    ( const std::wstring& wstrName );

        enum ePC3_Quality
        {
            PC3_QUALITY_VERYLOW,
            PC3_QUALITY_LOW,
            PC3_QUALITY_MEDIUM,
            PC3_QUALITY_HIGH,
            PC3_QUALITY_VERYHIGH
        };
        static std::wstring     PC3_QualityToString                     ( ePC3_Quality value );
        static ePC3_Quality     ParsePC3_Quality                        ( const std::wstring& wstrName );

        enum ePixelOutput
        {
            PIXELOUTPUT_DEFAULT,
            PIXELOUTPUT_DEPTH,
            PIXELOUTPUT_DEPTH_DOFBLUR,
            PIXELOUTPUT_DEPTH_MOTION_MOTIONLEN,
            PIXELOUTPUT_SHADOWDYNAINALPHA,
            PIXELOUTPUT_SPECINTENS,
            PIXELOUTPUT_FACENORMALINC,
            PIXELOUTPUT_MOTIONRBX
        };
        static std::wstring     PixelOutputToString                     ( ePixelOutput value );
        static ePixelOutput     ParsePixelOutput                        ( const std::wstring& wstrName );

        enum eRenderProjectors
        {
            RENDERPROJECTORS_DISABLE,
            RENDERPROJECTORS_RENDERCUBE,
            RENDERPROJECTORS_2DNOCLIPZ
        };
        static std::wstring     RenderProjectorsToString                ( eRenderProjectors value );
        static eRenderProjectors ParseRenderProjectors                   ( const std::wstring& wstrName );

        enum eRenderShadows
        {
            RENDERSHADOWS_DISABLE,
            RENDERSHADOWS_FAKE,
            RENDERSHADOWS_MASK,
            RENDERSHADOWS_DEPTH,
            RENDERSHADOWS_PSSM,
            RENDERSHADOWS_PSSMAO
        };
        static std::wstring     RenderShadowsToString                   ( eRenderShadows value );
        static eRenderShadows   ParseRenderShadows                      ( const std::wstring& wstrName );

        enum eSelectTnL
        {
            SELECTTNL_HARDWARE,
            SELECTTNL_SOFTWARE
        };
        static std::wstring     SelectTnLToString                       ( eSelectTnL value );
        static eSelectTnL       ParseSelectTnL                          ( const std::wstring& wstrName );

        enum eTextureRender
        {
            TEXTURERENDER_NONE,
            TEXTURERENDER_CAMERAFX,
            TEXTURERENDER_ALL
        };
        static std::wstring     TextureRenderToString                   ( eTextureRender value );
        static eTextureRender   ParseTextureRender                      ( const std::wstring& wstrName );

        bool                    GetAlpha01BlendEdges                    () const;
        void                    SetAlpha01BlendEdges                    ( bool value );

        uint                    GetAlpha01ClipRef                       () const;
        void                    SetAlpha01ClipRef                       ( uint value );

        eAmbientOcc             GetAmbientOcc                           () const;
        void                    SetAmbientOcc                           ( eAmbientOcc value );

        uint                    GetAnisotropicLevel                     () const;
        void                    SetAnisotropicLevel                     ( uint value );

        bool                    GetArePortalsActive                     () const;
        void                    SetArePortalsActive                     ( bool value );

        float                   GetAverageFps                           () const;
        void                    SetAverageFps                           ( float value );

        eBitmapQuality          GetBitmapQuality                        () const;
        void                    SetBitmapQuality                        ( eBitmapQuality value );

        List < nodptr<class CHmsCamera> >& GetCameras                              () const;
        void                    SetCameras                              ( List < nodptr<class CHmsCamera> >& value );

        class CHmsConfig*       GetConfig                               () const;
        void                    SetConfig                               ( class CHmsConfig* value );

        eDeferredAA             GetDeferredAA                           () const;
        void                    SetDeferredAA                           ( eDeferredAA value );

        eDeviceKind             GetDeviceKind                           () const;
        void                    SetDeviceKind                           ( eDeviceKind value );

        uint                    GetDisplaySyncIntervalCount             () const;
        void                    SetDisplaySyncIntervalCount             ( uint value );

        bool                    GetEmulateCursor                        () const;
        void                    SetEmulateCursor                        ( bool value );

        bool                    GetEnableLightFlares                    () const;
        void                    SetEnableLightFlares                    ( bool value );

        bool                    GetEnableTessellation                   () const;
        void                    SetEnableTessellation                   ( bool value );

        bool                    GetEnableTripleBuffer                   () const;
        void                    SetEnableTripleBuffer                   ( bool value );

        float                   GetFullScreenBrightness                 () const;
        void                    SetFullScreenBrightness                 ( float value );

        float                   GetFullScreenContrast                   () const;
        void                    SetFullScreenContrast                   ( float value );

        float                   GetFullScreenGamma                      () const;
        void                    SetFullScreenGamma                      ( float value );

        eFullScreenModeIndex    GetFullScreenModeIndex                  () const;
        void                    SetFullScreenModeIndex                  ( eFullScreenModeIndex value );

        eFullScreenMultiSample  GetFullScreenMultiSample                () const;
        void                    SetFullScreenMultiSample                ( eFullScreenMultiSample value );

        eFullScreenRefreshRate  GetFullScreenRefreshRate                () const;
        void                    SetFullScreenRefreshRate                ( eFullScreenRefreshRate value );

        float                   GetGlobalMipMapLodBias                  () const;
        void                    SetGlobalMipMapLodBias                  ( float value );

        class CHmsAmbientOcc*   GetHmsAmbientOcc                        () const;
        void                    SetHmsAmbientOcc                        ( class CHmsAmbientOcc* value );

        bool                    GetIsPickingPossible                    () const;
        void                    SetIsPickingPossible                    ( bool value );

        bool                    GetIsPureDevice                         () const;
        void                    SetIsPureDevice                         ( bool value );

        eMaxFiltering           GetMaxFiltering                         () const;
        void                    SetMaxFiltering                         ( eMaxFiltering value );

        bool                    GetMgrParticle_PauseKeepCameraMotion    () const;
        void                    SetMgrParticle_PauseKeepCameraMotion    ( bool value );

        bool                    GetMgrParticle_UseCameraMotion          () const;
        void                    SetMgrParticle_UseCameraMotion          ( bool value );

        float                   GetMinMipMapLodBias                     () const;
        void                    SetMinMipMapLodBias                     ( float value );

        float                   GetMipScaleZ                            () const;
        void                    SetMipScaleZ                            ( float value );

        eMultiSampleType        GetMultiSampleType                      () const;
        void                    SetMultiSampleType                      ( eMultiSampleType value );

        List < nodptr<class CHmsZoneOverlay> >& GetOverlays                             () const;
        void                    SetOverlays                             ( List < nodptr<class CHmsZoneOverlay> >& value );

        ePC3_Quality            GetPC3_Quality                          () const;
        void                    SetPC3_Quality                          ( ePC3_Quality value );

        class CHmsViewportPerfDbg* GetPerfDbg                              () const;
        void                    SetPerfDbg                              ( class CHmsViewportPerfDbg* value );

        class CHmsPicker*       GetPicker                               () const;
        void                    SetPicker                               ( class CHmsPicker* value );

        ePixelOutput            GetPixelOutput                          () const;
        void                    SetPixelOutput                          ( ePixelOutput value );

        uint                    GetPortalMaxRecur                       () const;
        void                    SetPortalMaxRecur                       ( uint value );

        bool                    GetPreLoadProjectors                    () const;
        void                    SetPreLoadProjectors                    ( bool value );

        eRenderProjectors       GetRenderProjectors                     () const;
        void                    SetRenderProjectors                     ( eRenderProjectors value );

        eRenderShadows          GetRenderShadows                        () const;
        void                    SetRenderShadows                        ( eRenderShadows value );

        bool                    GetRenderZoneVPacker                    () const;
        void                    SetRenderZoneVPacker                    ( bool value );

        bool                    GetScreenShotForceRes                   () const;
        void                    SetScreenShotForceRes                   ( bool value );

        StringW                 GetScreenShotFullName                   () const;
        void                    SetScreenShotFullName                   ( StringW value );

        uint                    GetScreenShotHeight                     () const;
        void                    SetScreenShotHeight                     ( uint value );

        uint                    GetScreenShotTileX                      () const;
        void                    SetScreenShotTileX                      ( uint value );

        uint                    GetScreenShotTileY                      () const;
        void                    SetScreenShotTileY                      ( uint value );

        bool                    GetScreenShotUseAlpha                   () const;
        void                    SetScreenShotUseAlpha                   ( bool value );

        uint                    GetScreenShotWidth                      () const;
        void                    SetScreenShotWidth                      ( uint value );

        eSelectTnL              GetSelectTnL                            () const;
        void                    SetSelectTnL                            ( eSelectTnL value );

        bool                    GetShadowCastBack                       () const;
        void                    SetShadowCastBack                       ( bool value );

        class CHmsViewportStat* GetStat                                 () const;
        void                    SetStat                                 ( class CHmsViewportStat* value );

        bool                    GetStatCaptureOutside                   () const;
        void                    SetStatCaptureOutside                   ( bool value );

        class CHmsViewportStat* GetStatOutside                          () const;
        void                    SetStatOutside                          ( class CHmsViewportStat* value );

        class CSystemWindow*    GetSystemWindow                         () const;
        void                    SetSystemWindow                         ( class CSystemWindow* value );

        uint                    GetTargetFps                            () const;
        void                    SetTargetFps                            ( uint value );

        bool                    GetTargetFpsEnable                      () const;
        void                    SetTargetFpsEnable                      ( bool value );

        float                   GetTargetFpsMaxScaleZ                   () const;
        void                    SetTargetFpsMaxScaleZ                   ( float value );

        float                   GetTargetFpsMinScaleZ                   () const;
        void                    SetTargetFpsMinScaleZ                   ( float value );

        float                   GetTargetFpsSpeed                       () const;
        void                    SetTargetFpsSpeed                       ( float value );

        eTextureRender          GetTextureRender                        () const;
        void                    SetTextureRender                        ( eTextureRender value );

        uint                    GetTimeQueryIssueToFinish               () const;
        void                    SetTimeQueryIssueToFinish               ( uint value );

        uint                    GetTimeTickToPresent                    () const;
        void                    SetTimeTickToPresent                    ( uint value );

        List < nodptr<class CHmsZoneOverlay> >& GetUnderlays                            () const;
        void                    SetUnderlays                            ( List < nodptr<class CHmsZoneOverlay> >& value );

        uint                    GetiSubDevice                           () const;
        void                    SetiSubDevice                           ( uint value );

        void                    ScreenShotDoCaptureBMP                  ();
        void                    ScreenShotDoCaptureDDS                  ();
        void                    ScreenShotDoCaptureJPG                  ();
        void                    ScreenShotDoCapturePNG                  ();
        void                    ShaderConstantLogBindedValues           ();
