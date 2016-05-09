        enum { CLASSID = 0x09086000 };

        static CPlugBitmapRender* CreateInstance ();

        enum eBitmapClearMode
        {
            BITMAPCLEARMODE_FIXED,
            BITMAPCLEARMODE_DAYTIMEREMAPINU
        };
        static std::wstring     BitmapClearModeToString                 ( eBitmapClearMode value );
        static eBitmapClearMode ParseBitmapClearMode                    ( const std::wstring& wstrName );

        enum eClearFogColor
        {
            CLEARFOGCOLOR_SEPARATE,
            CLEARFOGCOLOR_CLEAR_FOG,
            CLEARFOGCOLOR_FOG_CLEAR
        };
        static std::wstring     ClearFogColorToString                   ( eClearFogColor value );
        static eClearFogColor   ParseClearFogColor                      ( const std::wstring& wstrName );

        enum eRenderPath
        {
            RENDERPATH_NORMAL,
            RENDERPATH_DEPTHASALPHA,
            RENDERPATH_GLOWINPUT,
            RENDERPATH_OPACITY,
            RENDERPATH_SPECINTENS,
            RENDERPATH_LIGHTFROMMAP,
            RENDERPATH_PLANEDTOALPHA
        };
        static std::wstring     RenderPathToString                      ( eRenderPath value );
        static eRenderPath      ParseRenderPath                         ( const std::wstring& wstrName );

        enum eRenderPathFails
        {
            RENDERPATHFAILS_IGNORE,
            RENDERPATHFAILS_HIDE
        };
        static std::wstring     RenderPathFailsToString                 ( eRenderPathFails value );
        static eRenderPathFails ParseRenderPathFails                    ( const std::wstring& wstrName );

        enum eTriggerClearRGBA
        {
            TRIGGERCLEARRGBA_NONE,
            TRIGGERCLEARRGBA_ONCE,
            TRIGGERCLEARRGBA_EACHFRAME
        };
        static std::wstring     TriggerClearRGBAToString                ( eTriggerClearRGBA value );
        static eTriggerClearRGBA ParseTriggerClearRGBA                   ( const std::wstring& wstrName );

        enum eTriggerRender
        {
            TRIGGERRENDER_NONE,
            TRIGGERRENDER_ONCE,
            TRIGGERRENDER_EACHFRAME
        };
        static std::wstring     TriggerRenderToString                   ( eTriggerRender value );
        static eTriggerRender   ParseTriggerRender                      ( const std::wstring& wstrName );

        class CPlugBitmap*      GetBitmapClear                          () const;
        void                    SetBitmapClear                          ( class CPlugBitmap* value );

        eBitmapClearMode        GetBitmapClearMode                      () const;
        void                    SetBitmapClearMode                      ( eBitmapClearMode value );

        Vec2D                   GetBitmapClearUV                        () const;
        void                    SetBitmapClearUV                        ( Vec2D value );

        uint                    GetBlurTexelCount                       () const;
        void                    SetBlurTexelCount                       ( uint value );

        bool                    GetBlurWAlpha                           () const;
        void                    SetBlurWAlpha                           ( bool value );

        bool                    GetBlurWBlue                            () const;
        void                    SetBlurWBlue                            ( bool value );

        bool                    GetBlurWGreen                           () const;
        void                    SetBlurWGreen                           ( bool value );

        bool                    GetBlurWRed                             () const;
        void                    SetBlurWRed                             ( bool value );

        float                   GetClearAlpha                           () const;
        void                    SetClearAlpha                           ( float value );

        eClearFogColor          GetClearFogColor                        () const;
        void                    SetClearFogColor                        ( eClearFogColor value );

        color                   GetClearRGB                             () const;
        void                    SetClearRGB                             ( color value );

        bool                    GetCustomFog                            () const;
        void                    SetCustomFog                            ( bool value );

        float                   GetFogCustomFarZ                        () const;
        void                    SetFogCustomFarZ                        ( float value );

        bool                    GetForceAlphaToOne                      () const;
        void                    SetForceAlphaToOne                      ( bool value );

        bool                    GetForceAlphaToWrittenZ                 () const;
        void                    SetForceAlphaToWrittenZ                 ( bool value );

        uint                    GetGutterTexelCount                     () const;
        void                    SetGutterTexelCount                     ( uint value );

        bool                    GetHideSun                              () const;
        void                    SetHideSun                              ( bool value );

        bool                    GetIVIdMaskBackground                   () const;
        void                    SetIVIdMaskBackground                   ( bool value );

        bool                    GetIVIdMaskGrassRGB                     () const;
        void                    SetIVIdMaskGrassRGB                     ( bool value );

        bool                    GetIVIdMaskHideAlways                   () const;
        void                    SetIVIdMaskHideAlways                   ( bool value );

        bool                    GetIVIdMaskHideOnlyDirect               () const;
        void                    SetIVIdMaskHideOnlyDirect               ( bool value );

        bool                    GetIVIdMaskHideWhenOverground           () const;
        void                    SetIVIdMaskHideWhenOverground           ( bool value );

        bool                    GetIVIdMaskHideWhenUnderground          () const;
        void                    SetIVIdMaskHideWhenUnderground          ( bool value );

        bool                    GetIVIdMaskInvisibleStopBounce          () const;
        void                    SetIVIdMaskInvisibleStopBounce          ( bool value );

        bool                    GetIVIdMaskLightGenP                    () const;
        void                    SetIVIdMaskLightGenP                    ( bool value );

        bool                    GetIVIdMaskOnlyRefracted                () const;
        void                    SetIVIdMaskOnlyRefracted                ( bool value );

        bool                    GetIVIdMaskReflectMirror                () const;
        void                    SetIVIdMaskReflectMirror                ( bool value );

        bool                    GetIVIdMaskReflected                    () const;
        void                    SetIVIdMaskReflected                    ( bool value );

        bool                    GetIVIdMaskRefracted                    () const;
        void                    SetIVIdMaskRefracted                    ( bool value );

        bool                    GetIVIdMaskVehicle                      () const;
        void                    SetIVIdMaskVehicle                      ( bool value );

        bool                    GetIVIdMaskViewDepBump                  () const;
        void                    SetIVIdMaskViewDepBump                  ( bool value );

        bool                    GetIVIdMaskViewDepOcclusion             () const;
        void                    SetIVIdMaskViewDepOcclusion             ( bool value );

        bool                    GetIVIdMaskViewDepWindIntens            () const;
        void                    SetIVIdMaskViewDepWindIntens            ( bool value );

        bool                    GetIVIdRefBackground                    () const;
        void                    SetIVIdRefBackground                    ( bool value );

        bool                    GetIVIdRefGrassRGB                      () const;
        void                    SetIVIdRefGrassRGB                      ( bool value );

        bool                    GetIVIdRefHideAlways                    () const;
        void                    SetIVIdRefHideAlways                    ( bool value );

        bool                    GetIVIdRefHideOnlyDirect                () const;
        void                    SetIVIdRefHideOnlyDirect                ( bool value );

        bool                    GetIVIdRefHideWhenOverground            () const;
        void                    SetIVIdRefHideWhenOverground            ( bool value );

        bool                    GetIVIdRefHideWhenUnderground           () const;
        void                    SetIVIdRefHideWhenUnderground           ( bool value );

        bool                    GetIVIdRefInvisibleStopBounce           () const;
        void                    SetIVIdRefInvisibleStopBounce           ( bool value );

        bool                    GetIVIdRefLightGenP                     () const;
        void                    SetIVIdRefLightGenP                     ( bool value );

        bool                    GetIVIdRefOnlyRefracted                 () const;
        void                    SetIVIdRefOnlyRefracted                 ( bool value );

        bool                    GetIVIdRefReflectMirror                 () const;
        void                    SetIVIdRefReflectMirror                 ( bool value );

        bool                    GetIVIdRefReflected                     () const;
        void                    SetIVIdRefReflected                     ( bool value );

        bool                    GetIVIdRefRefracted                     () const;
        void                    SetIVIdRefRefracted                     ( bool value );

        bool                    GetIVIdRefVehicle                       () const;
        void                    SetIVIdRefVehicle                       ( bool value );

        bool                    GetIVIdRefViewDepBump                   () const;
        void                    SetIVIdRefViewDepBump                   ( bool value );

        bool                    GetIVIdRefViewDepOcclusion              () const;
        void                    SetIVIdRefViewDepOcclusion              ( bool value );

        bool                    GetIVIdRefViewDepWindIntens             () const;
        void                    SetIVIdRefViewDepWindIntens             ( bool value );

        bool                    GetIgnoreClearBitmap                    () const;
        void                    SetIgnoreClearBitmap                    ( bool value );

        bool                    GetInvertY                              () const;
        void                    SetInvertY                              ( bool value );

        bool                    GetNoShadowMPass                        () const;
        void                    SetNoShadowMPass                        ( bool value );

        bool                    GetOnePixBorder                         () const;
        void                    SetOnePixBorder                         ( bool value );

        bool                    GetRenderLightFlares                    () const;
        void                    SetRenderLightFlares                    ( bool value );

        bool                    GetRenderMultiLight                     () const;
        void                    SetRenderMultiLight                     ( bool value );

        eRenderPath             GetRenderPath                           () const;
        void                    SetRenderPath                           ( eRenderPath value );

        eRenderPathFails        GetRenderPathFails                      () const;
        void                    SetRenderPathFails                      ( eRenderPathFails value );

        bool                    GetRenderProjectors                     () const;
        void                    SetRenderProjectors                     ( bool value );

        bool                    GetRenderShadows                        () const;
        void                    SetRenderShadows                        ( bool value );

        class CPlugBitmapRenderSub* GetRenderSub                            () const;
        void                    SetRenderSub                            ( class CPlugBitmapRenderSub* value );

        bool                    GetRenderZoneFogG                       () const;
        void                    SetRenderZoneFogG                       ( bool value );

        bool                    GetSVIdMaskBackground                   () const;
        void                    SetSVIdMaskBackground                   ( bool value );

        bool                    GetSVIdMaskGrassRGB                     () const;
        void                    SetSVIdMaskGrassRGB                     ( bool value );

        bool                    GetSVIdMaskHideAlways                   () const;
        void                    SetSVIdMaskHideAlways                   ( bool value );

        bool                    GetSVIdMaskHideOnlyDirect               () const;
        void                    SetSVIdMaskHideOnlyDirect               ( bool value );

        bool                    GetSVIdMaskHideWhenOverground           () const;
        void                    SetSVIdMaskHideWhenOverground           ( bool value );

        bool                    GetSVIdMaskHideWhenUnderground          () const;
        void                    SetSVIdMaskHideWhenUnderground          ( bool value );

        bool                    GetSVIdMaskInvisibleStopBounce          () const;
        void                    SetSVIdMaskInvisibleStopBounce          ( bool value );

        bool                    GetSVIdMaskLightGenP                    () const;
        void                    SetSVIdMaskLightGenP                    ( bool value );

        bool                    GetSVIdMaskOnlyRefracted                () const;
        void                    SetSVIdMaskOnlyRefracted                ( bool value );

        bool                    GetSVIdMaskReflectMirror                () const;
        void                    SetSVIdMaskReflectMirror                ( bool value );

        bool                    GetSVIdMaskReflected                    () const;
        void                    SetSVIdMaskReflected                    ( bool value );

        bool                    GetSVIdMaskRefracted                    () const;
        void                    SetSVIdMaskRefracted                    ( bool value );

        bool                    GetSVIdMaskVehicle                      () const;
        void                    SetSVIdMaskVehicle                      ( bool value );

        bool                    GetSVIdMaskViewDepBump                  () const;
        void                    SetSVIdMaskViewDepBump                  ( bool value );

        bool                    GetSVIdMaskViewDepOcclusion             () const;
        void                    SetSVIdMaskViewDepOcclusion             ( bool value );

        bool                    GetSVIdMaskViewDepWindIntens            () const;
        void                    SetSVIdMaskViewDepWindIntens            ( bool value );

        bool                    GetSVIdRefBackground                    () const;
        void                    SetSVIdRefBackground                    ( bool value );

        bool                    GetSVIdRefGrassRGB                      () const;
        void                    SetSVIdRefGrassRGB                      ( bool value );

        bool                    GetSVIdRefHideAlways                    () const;
        void                    SetSVIdRefHideAlways                    ( bool value );

        bool                    GetSVIdRefHideOnlyDirect                () const;
        void                    SetSVIdRefHideOnlyDirect                ( bool value );

        bool                    GetSVIdRefHideWhenOverground            () const;
        void                    SetSVIdRefHideWhenOverground            ( bool value );

        bool                    GetSVIdRefHideWhenUnderground           () const;
        void                    SetSVIdRefHideWhenUnderground           ( bool value );

        bool                    GetSVIdRefInvisibleStopBounce           () const;
        void                    SetSVIdRefInvisibleStopBounce           ( bool value );

        bool                    GetSVIdRefLightGenP                     () const;
        void                    SetSVIdRefLightGenP                     ( bool value );

        bool                    GetSVIdRefOnlyRefracted                 () const;
        void                    SetSVIdRefOnlyRefracted                 ( bool value );

        bool                    GetSVIdRefReflectMirror                 () const;
        void                    SetSVIdRefReflectMirror                 ( bool value );

        bool                    GetSVIdRefReflected                     () const;
        void                    SetSVIdRefReflected                     ( bool value );

        bool                    GetSVIdRefRefracted                     () const;
        void                    SetSVIdRefRefracted                     ( bool value );

        bool                    GetSVIdRefVehicle                       () const;
        void                    SetSVIdRefVehicle                       ( bool value );

        bool                    GetSVIdRefViewDepBump                   () const;
        void                    SetSVIdRefViewDepBump                   ( bool value );

        bool                    GetSVIdRefViewDepOcclusion              () const;
        void                    SetSVIdRefViewDepOcclusion              ( bool value );

        bool                    GetSVIdRefViewDepWindIntens             () const;
        void                    SetSVIdRefViewDepWindIntens             ( bool value );

        uint                    GetSuperSampleLevel                     () const;
        void                    SetSuperSampleLevel                     ( uint value );

        bool                    GetTreeMipForceLowQ                     () const;
        void                    SetTreeMipForceLowQ                     ( bool value );

        eTriggerClearRGBA       GetTriggerClearRGBA                     () const;
        void                    SetTriggerClearRGBA                     ( eTriggerClearRGBA value );

        eTriggerRender          GetTriggerRender                        () const;
        void                    SetTriggerRender                        ( eTriggerRender value );

        bool                    GetUpdateForEachCamera                  () const;
        void                    SetUpdateForEachCamera                  ( bool value );

        bool                    GetUseZBuffer                           () const;
        void                    SetUseZBuffer                           ( bool value );

        bool                    GetWriteAlpha                           () const;
        void                    SetWriteAlpha                           ( bool value );

        bool                    GetWriteBlue                            () const;
        void                    SetWriteBlue                            ( bool value );

        bool                    GetWriteGreen                           () const;
        void                    SetWriteGreen                           ( bool value );

        bool                    GetWriteRed                             () const;
        void                    SetWriteRed                             ( bool value );

        uint                    GetcFrameToSkip                         () const;
        void                    SetcFrameToSkip                         ( uint value );

        void                    CleanRenderCache                        ();
