        enum { CLASSID = 0x0C012000 };

        static CVisionResourceFile* CreateInstance ();

        class CPlugBitmap*      GetBitmapDeferredFaceNormalInC          () const;
        void                    SetBitmapDeferredFaceNormalInC          ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapDeferredLightMask              () const;
        void                    SetBitmapDeferredLightMask              ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapDeferredMDiffuse               () const;
        void                    SetBitmapDeferredMDiffuse               ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapDeferredMSpecular              () const;
        void                    SetBitmapDeferredMSpecular              ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapDeferredPixelNormalInC         () const;
        void                    SetBitmapDeferredPixelNormalInC         ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapDeferredPreShade               () const;
        void                    SetBitmapDeferredPreShade               ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapDeferredVertexNormalInC        () const;
        void                    SetBitmapDeferredVertexNormalInC        ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapDeferredZ                      () const;
        void                    SetBitmapDeferredZ                      ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapImageSpaceReflectCube          () const;
        void                    SetBitmapImageSpaceReflectCube          ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapReflectCubeHdr                 () const;
        void                    SetBitmapReflectCubeHdr                 ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapReflectCubeHdrLQ               () const;
        void                    SetBitmapReflectCubeHdrLQ               ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapShadowLDir0                    () const;
        void                    SetBitmapShadowLDir0                    ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapTranslucentDown                () const;
        void                    SetBitmapTranslucentDown                ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapVehicleLAmbientSH3             () const;
        void                    SetBitmapVehicleLAmbientSH3             ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapWaterRefract                   () const;
        void                    SetBitmapWaterRefract                   ( class CPlugBitmap* value );

        float                   GetBlurDepthTestMaxDist                 () const;
        void                    SetBlurDepthTestMaxDist                 ( float value );

        class CSystemFidsFolder* GetFolderShaderBench                    () const;
        void                    SetFolderShaderBench                    ( class CSystemFidsFolder* value );

        class CPlugFont*        GetFontDebugText                        () const;
        void                    SetFontDebugText                        ( class CPlugFont* value );

        class CPlugFxLensFlareArray* GetFxLensFlareArray                     () const;
        void                    SetFxLensFlareArray                     ( class CPlugFxLensFlareArray* value );

        class CPlugFilePHlsl*   GetPHlslBlurHV                          () const;
        void                    SetPHlslBlurHV                          ( class CPlugFilePHlsl* value );

        class CPlugFilePHlsl*   GetPHlslBlurHV_DepthMask                () const;
        void                    SetPHlslBlurHV_DepthMask                ( class CPlugFilePHlsl* value );

        class CPlugFilePHlsl*   GetPHlslBlurHV_DepthTest                () const;
        void                    SetPHlslBlurHV_DepthTest                ( class CPlugFilePHlsl* value );

        class CPlugFilePHlsl*   GetPHlslDebugText                       () const;
        void                    SetPHlslDebugText                       ( class CPlugFilePHlsl* value );

        class CPlugFilePHlsl*   GetPHlslFillAlpha                       () const;
        void                    SetPHlslFillAlpha                       ( class CPlugFilePHlsl* value );

        class CPlugFilePHlsl*   GetPHlslFillColor                       () const;
        void                    SetPHlslFillColor                       ( class CPlugFilePHlsl* value );

        class CPlugFilePHlsl*   GetPHlslFillColor_Alpha01               () const;
        void                    SetPHlslFillColor_Alpha01               ( class CPlugFilePHlsl* value );

        class CPlugFilePHlsl*   GetPHlslFillConst                       () const;
        void                    SetPHlslFillConst                       ( class CPlugFilePHlsl* value );

        class CPlugFilePHlsl*   GetPHlslFillDepthMask                   () const;
        void                    SetPHlslFillDepthMask                   ( class CPlugFilePHlsl* value );

        class CPlugFilePHlsl*   GetPHlslRasterCubeMapFromEyeVectInWorld_HdrAlpha2() const;
        void                    SetPHlslRasterCubeMapFromEyeVectInWorld_HdrAlpha2( class CPlugFilePHlsl* value );

        class CPlugShaderApply* GetShader2dFlareAdd_Hdr                 () const;
        void                    SetShader2dFlareAdd_Hdr                 ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShader2dLensDirtAdd                  () const;
        void                    SetShader2dLensDirtAdd                  ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShader2dLightHistoryUpdate           () const;
        void                    SetShader2dLightHistoryUpdate           ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderBlendBitmapPreMod              () const;
        void                    SetShaderBlendBitmapPreMod              ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderBlendBitmapPreModInvA          () const;
        void                    SetShaderBlendBitmapPreModInvA          ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderBlendBitmapRGB                 () const;
        void                    SetShaderBlendBitmapRGB                 ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderBlendBitmapRGBA                () const;
        void                    SetShaderBlendBitmapRGBA                ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderCubeFilterDown4x4_Cube3x2      () const;
        void                    SetShaderCubeFilterDown4x4_Cube3x2      ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderCubeToSphereHdrA2              () const;
        void                    SetShaderCubeToSphereHdrA2              ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDecal3dSetInvalid              () const;
        void                    SetShaderDecal3dSetInvalid              ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredBurnSphere             () const;
        void                    SetShaderDeferredBurnSphere             ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredCameraMotion           () const;
        void                    SetShaderDeferredCameraMotion           ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredDeCompFaceNormal       () const;
        void                    SetShaderDeferredDeCompFaceNormal       ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredDecal                  () const;
        void                    SetShaderDeferredDecal                  ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredDecalBox               () const;
        void                    SetShaderDeferredDecalBox               ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredDecalBoxVConst         () const;
        void                    SetShaderDeferredDecalBoxVConst         ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredFog                    () const;
        void                    SetShaderDeferredFog                    ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredGeomCameraMap          () const;
        void                    SetShaderDeferredGeomCameraMap          ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredGeomFogBoxInside       () const;
        void                    SetShaderDeferredGeomFogBoxInside       ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredGeomFogBoxOutside      () const;
        void                    SetShaderDeferredGeomFogBoxOutside      ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredGeomProjector          () const;
        void                    SetShaderDeferredGeomProjector          ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredGeomShadowVol          () const;
        void                    SetShaderDeferredGeomShadowVol          ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredLightBall              () const;
        void                    SetShaderDeferredLightBall              ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredLightFxCylinder        () const;
        void                    SetShaderDeferredLightFxCylinder        ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredLightFxSphere          () const;
        void                    SetShaderDeferredLightFxSphere          ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredLightSpot              () const;
        void                    SetShaderDeferredLightSpot              ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredOccZCmp                () const;
        void                    SetShaderDeferredOccZCmp                ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredShadowPssm             () const;
        void                    SetShaderDeferredShadowPssm             ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredWaterFog               () const;
        void                    SetShaderDeferredWaterFog               ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDeferredZBufferToDist01        () const;
        void                    SetShaderDeferredZBufferToDist01        ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDownSize2x2AvgInLdr            () const;
        void                    SetShaderDownSize2x2AvgInLdr            ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderDownSize3x3AvgInLdr            () const;
        void                    SetShaderDownSize3x3AvgInLdr            ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderFaceNormalFromLinearDepth      () const;
        void                    SetShaderFaceNormalFromLinearDepth      ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderFilterDown4x4                  () const;
        void                    SetShaderFilterDown4x4                  ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderGeomBlendWaterFog              () const;
        void                    SetShaderGeomBlendWaterFog              ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderGeomBlendWaterFog_Opacity01    () const;
        void                    SetShaderGeomBlendWaterFog_Opacity01    ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderGeomToReflectCubeDist          () const;
        void                    SetShaderGeomToReflectCubeDist          ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderMgrParticleRender              () const;
        void                    SetShaderMgrParticleRender              ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderMgrParticleShowStates          () const;
        void                    SetShaderMgrParticleShowStates          ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderMgrParticleSpawn               () const;
        void                    SetShaderMgrParticleSpawn               ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderMgrParticleSpawnPoints         () const;
        void                    SetShaderMgrParticleSpawnPoints         ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderMgrParticleUpdate              () const;
        void                    SetShaderMgrParticleUpdate              ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderProjectCube48x32_SH3           () const;
        void                    SetShaderProjectCube48x32_SH3           ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderRasterDistor2d                 () const;
        void                    SetShaderRasterDistor2d                 ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetShaderT3FullDeferredWarp             () const;
        void                    SetShaderT3FullDeferredWarp             ( class CPlugShaderApply* value );

        class CPlugFileVHlsl*   GetVHlslBlurHV                          () const;
        void                    SetVHlslBlurHV                          ( class CPlugFileVHlsl* value );

        class CPlugFileVHlsl*   GetVHlslFillAlpha                       () const;
        void                    SetVHlslFillAlpha                       ( class CPlugFileVHlsl* value );

        class CPlugFileVHlsl*   GetVHlslFillDepthMask                   () const;
        void                    SetVHlslFillDepthMask                   ( class CPlugFileVHlsl* value );

        class CPlugFileVHlsl*   GetVHlslFill_0000                       () const;
        void                    SetVHlslFill_0000                       ( class CPlugFileVHlsl* value );

        class CPlugFileVHlsl*   GetVHlslFill_0001                       () const;
        void                    SetVHlslFill_0001                       ( class CPlugFileVHlsl* value );

        class CPlugFileVHlsl*   GetVHlslFill_0001_Alpha01               () const;
        void                    SetVHlslFill_0001_Alpha01               ( class CPlugFileVHlsl* value );

        class CPlugFileVHlsl*   GetVHlslLensFlareOccQuery               () const;
        void                    SetVHlslLensFlareOccQuery               ( class CPlugFileVHlsl* value );

        class CPlugFileVHlsl*   GetVHlslProjector1                      () const;
        void                    SetVHlslProjector1                      ( class CPlugFileVHlsl* value );

        class CPlugFileVHlsl*   GetVHlslRasterCubeMapFromEyeVectInWorld () const;
        void                    SetVHlslRasterCubeMapFromEyeVectInWorld ( class CPlugFileVHlsl* value );

