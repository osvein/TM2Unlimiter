        enum { CLASSID = 0x09011000 };

        static CPlugBitmap*     CreateInstance ();

        enum eBumpCompressMode
        {
            BUMPCOMPRESSMODE_NONE_32B,
            BUMPCOMPRESSMODE_PAL8B,
            BUMPCOMPRESSMODE_DXT1_4B,
            BUMPCOMPRESSMODE_PAL16B
        };
        static std::wstring     BumpCompressModeToString                ( eBumpCompressMode value );
        static eBumpCompressMode ParseBumpCompressMode                   ( const std::wstring& wstrName );

        enum eCompressor
        {
            COMPRESSOR_NVIDIA,
            COMPRESSOR_DIRECTX
        };
        static std::wstring     CompressorToString                      ( eCompressor value );
        static eCompressor      ParseCompressor                         ( const std::wstring& wstrName );

        enum eCubeMapAuto2dFace
        {
            CUBEMAPAUTO2DFACE_NONE,
            CUBEMAPAUTO2DFACE_XPOS,
            CUBEMAPAUTO2DFACE_XNEG,
            CUBEMAPAUTO2DFACE_YPOS,
            CUBEMAPAUTO2DFACE_YNEG,
            CUBEMAPAUTO2DFACE_ZPOS,
            CUBEMAPAUTO2DFACE_ZNEG
        };
        static std::wstring     CubeMapAuto2dFaceToString               ( eCubeMapAuto2dFace value );
        static eCubeMapAuto2dFace ParseCubeMapAuto2dFace                  ( const std::wstring& wstrName );

        enum eDefaultVideoTimer
        {
            DEFAULTVIDEOTIMER_GAME,
            DEFAULTVIDEOTIMER_HUMAN,
            DEFAULTVIDEOTIMER_EXTERNAL
        };
        static std::wstring     DefaultVideoTimerToString               ( eDefaultVideoTimer value );
        static eDefaultVideoTimer ParseDefaultVideoTimer                  ( const std::wstring& wstrName );

        enum eForceBorderSize
        {
            FORCEBORDERSIZE_1_TEXEL,
            FORCEBORDERSIZE_2_TEXELS,
            FORCEBORDERSIZE_3_TEXELS,
            FORCEBORDERSIZE_4_TEXELS
        };
        static std::wstring     ForceBorderSizeToString                 ( eForceBorderSize value );
        static eForceBorderSize ParseForceBorderSize                    ( const std::wstring& wstrName );

        enum eGenerateUV
        {
            GENERATEUV_NOGENERATE,
            GENERATEUV_CAMERAVERTEX,
            GENERATEUV_WORLDVERTEX,
            GENERATEUV_WORLDVERTEXXY,
            GENERATEUV_WORLDVERTEXXZ,
            GENERATEUV_WORLDVERTEXYZ,
            GENERATEUV_CAMERANORMAL,
            GENERATEUV_WORLDNORMAL,
            GENERATEUV_CAMERAREFLECTIONVECTOR,
            GENERATEUV_WORLDREFLECTIONVECTOR,
            GENERATEUV_WORLDNORMALNEG,
            GENERATEUV_WATERREFLECTIONVECTOR,
            GENERATEUV_HACK1VERTEX,
            GENERATEUV_MAPTEXEL_DEPRECATED,
            GENERATEUV_FOGPLANE0,
            GENERATEUV_VSK3SEAFOAM,
            GENERATEUV_IMAGESPACE,
            GENERATEUV_LIGHTDIR0REFLECT,
            GENERATEUV_EYENORMAL,
            GENERATEUV_SHADOWB1PW01,
            GENERATEUV_TEX3ASPOSPRCAMERA,
            GENERATEUV_FLATWATERREFLECT,
            GENERATEUV_FLATWATERREFRACT,
            GENERATEUV_FLATWATERFRESNEL,
            GENERATEUV_WORLDPOSXYBLENDZY
        };
        static std::wstring     GenerateUVToString                      ( eGenerateUV value );
        static eGenerateUV      ParseGenerateUV                         ( const std::wstring& wstrName );

        enum eLdrColorSpace
        {
            LDRCOLORSPACE_LINEAR,
            LDRCOLORSPACE_SRGB
        };
        static std::wstring     LdrColorSpaceToString                   ( eLdrColorSpace value );
        static eLdrColorSpace   ParseLdrColorSpace                      ( const std::wstring& wstrName );

        enum eMipMapAlpha01
        {
            MIPMAPALPHA01_HALFBINARY,
            MIPMAPALPHA01_FORCEBINARY,
            MIPMAPALPHA01_SHADEOFGRAY
        };
        static std::wstring     MipMapAlpha01ToString                   ( eMipMapAlpha01 value );
        static eMipMapAlpha01   ParseMipMapAlpha01                      ( const std::wstring& wstrName );

        enum eNormalRotate
        {
            NORMALROTATE_NONE,
            NORMALROTATE_X_Z_Y
        };
        static std::wstring     NormalRotateToString                    ( eNormalRotate value );
        static eNormalRotate    ParseNormalRotate                       ( const std::wstring& wstrName );

        enum ePixelUpdate
        {
            PIXELUPDATE_NONE,
            PIXELUPDATE_RENDER,
            PIXELUPDATE_SHADER,
            PIXELUPDATE_DYNASPECULAR,
            PIXELUPDATE_CLEAR
        };
        static std::wstring     PixelUpdateToString                     ( ePixelUpdate value );
        static ePixelUpdate     ParsePixelUpdate                        ( const std::wstring& wstrName );

        enum eRenderTech
        {
            RENDERTECH_UNKNOWN,
            RENDERTECH_TECH3
        };
        static std::wstring     RenderTechToString                      ( eRenderTech value );
        static eRenderTech      ParseRenderTech                         ( const std::wstring& wstrName );

        enum eTexAddressU
        {
            TEXADDRESSU_WRAP,
            TEXADDRESSU_MIRROR,
            TEXADDRESSU_CLAMP,
            TEXADDRESSU_BORDERSM3
        };
        static std::wstring     TexAddressUToString                     ( eTexAddressU value );
        static eTexAddressU     ParseTexAddressU                        ( const std::wstring& wstrName );

        enum eTexAddressV
        {
            TEXADDRESSV_WRAP,
            TEXADDRESSV_MIRROR,
            TEXADDRESSV_CLAMP,
            TEXADDRESSV_BORDERSM3
        };
        static std::wstring     TexAddressVToString                     ( eTexAddressV value );
        static eTexAddressV     ParseTexAddressV                        ( const std::wstring& wstrName );

        enum eTexAddressW
        {
            TEXADDRESSW_WRAP,
            TEXADDRESSW_MIRROR,
            TEXADDRESSW_CLAMP,
            TEXADDRESSW_BORDERSM3
        };
        static std::wstring     TexAddressWToString                     ( eTexAddressW value );
        static eTexAddressW     ParseTexAddressW                        ( const std::wstring& wstrName );

        enum eTexFilter
        {
            TEXFILTER_POINT,
            TEXFILTER_BILINEAR,
            TEXFILTER_TRILINEAR,
            TEXFILTER_ANISOTROPIC
        };
        static std::wstring     TexFilterToString                       ( eTexFilter value );
        static eTexFilter       ParseTexFilter                          ( const std::wstring& wstrName );

        enum eUsage
        {
            USAGE_COLOR,
            USAGE_LIGHT,
            USAGE_HEIGHT_DUDV,
            USAGE_RENDER,
            USAGE_H_DUDVLUMI,
            USAGE_H_NORMXYZ,
            USAGE_H_NORMXY,
            USAGE_DEPTHCMP,
            USAGE_DISPH01,
            USAGE_H_NORMPAL8B,
            USAGE_NORMXYZ,
            USAGE_NORMXY,
            USAGE_NORMPAL8B,
            USAGE_NORMPAL16B,
            USAGE_COLORFLOAT,
            USAGE_RENDERFLOAT,
            USAGE_H_DUDV1,
            USAGE_ALPHA,
            USAGE_LIGHTALPHA,
            USAGE_H_NORMX0ZY,
            USAGE_NORMX0ZY,
            USAGE_TEXCOORD,
            USAGE_RENDER16B,
            USAGE_VERTEX,
            USAGE_H_BUMPTXTY,
            USAGE_BUMPTXTY,
            USAGE_H_NORM0YZX,
            USAGE_NORM0YZX,
            USAGE_NORM_XYZ_0YZX,
            USAGE_DEPTH,
            USAGE_SRGBL8_LINEARL16,
            USAGE_NORMATI2N,
            USAGE_NORMXYZ_ATI2N,
            USAGE_COLOR16B,
            USAGE_SPECFIE_FI0E,
            USAGE_SPECFI0E
        };
        static std::wstring     UsageToString                           ( eUsage value );
        static eUsage           ParseUsage                              ( const std::wstring& wstrName );

        enum eWantedColorDepth
        {
            WANTEDCOLORDEPTH_DEFAULTCOLORDEPTH,
            WANTEDCOLORDEPTH_COLOR16B,
            WANTEDCOLORDEPTH_COLOR32B
        };
        static std::wstring     WantedColorDepthToString                ( eWantedColorDepth value );
        static eWantedColorDepth ParseWantedColorDepth                   ( const std::wstring& wstrName );

        bool                    GetAlphaToCoverage                      () const;
        void                    SetAlphaToCoverage                      ( bool value );

        class CPlugBitmapAtlas* GetAtlas                                () const;
        void                    SetAtlas                                ( class CPlugBitmapAtlas* value );

        float                   GetBorderAlpha                          () const;
        void                    SetBorderAlpha                          ( float value );

        bool                    GetBorderBottom                         () const;
        void                    SetBorderBottom                         ( bool value );

        bool                    GetBorderLeft                           () const;
        void                    SetBorderLeft                           ( bool value );

        color                   GetBorderRGB                            () const;
        void                    SetBorderRGB                            ( color value );

        bool                    GetBorderRight                          () const;
        void                    SetBorderRight                          ( bool value );

        bool                    GetBorderTop                            () const;
        void                    SetBorderTop                            ( bool value );

        eBumpCompressMode       GetBumpCompressMode                     () const;
        void                    SetBumpCompressMode                     ( eBumpCompressMode value );

        float                   GetBumpScaleFactor                      () const;
        void                    SetBumpScaleFactor                      ( float value );

        float                   GetBumpScaleMipLevel                    () const;
        void                    SetBumpScaleMipLevel                    ( float value );

        bool                    GetCanBeCompressedInVideoMemory         () const;
        void                    SetCanBeCompressedInVideoMemory         ( bool value );

        bool                    GetCanBeDeletedFromSystemMemory         () const;
        void                    SetCanBeDeletedFromSystemMemory         ( bool value );

        float                   GetClearAlpha                           () const;
        void                    SetClearAlpha                           ( float value );

        color                   GetClearRGB                             () const;
        void                    SetClearRGB                             ( color value );

        bool                    GetCompressInterpolatedAlpha            () const;
        void                    SetCompressInterpolatedAlpha            ( bool value );

        bool                    GetCompressSkipDXT1                     () const;
        void                    SetCompressSkipDXT1                     ( bool value );

        bool                    GetCompressUseDithering                 () const;
        void                    SetCompressUseDithering                 ( bool value );

        eCompressor             GetCompressor                           () const;
        void                    SetCompressor                           ( eCompressor value );

        eCubeMapAuto2dFace      GetCubeMapAuto2dFace                    () const;
        void                    SetCubeMapAuto2dFace                    ( eCubeMapAuto2dFace value );

        class CPlugBitmapDecals* GetDecals                               () const;
        void                    SetDecals                               ( class CPlugBitmapDecals* value );

        uint                    GetDefaultMaxMipLevel                   () const;
        void                    SetDefaultMaxMipLevel                   ( uint value );

        float                   GetDefaultRenderClearAlpha              () const;
        void                    SetDefaultRenderClearAlpha              ( float value );

        color                   GetDefaultRenderClearRGB                () const;
        void                    SetDefaultRenderClearRGB                ( color value );

        float                   GetDefaultTexCoordRotate                () const;
        void                    SetDefaultTexCoordRotate                ( float value );

        Vec2D                   GetDefaultTexCoordScale                 () const;
        void                    SetDefaultTexCoordScale                 ( Vec2D value );

        float                   GetDefaultTexCoordSizeXm                () const;
        void                    SetDefaultTexCoordSizeXm                ( float value );

        float                   GetDefaultTexCoordSizeYm                () const;
        void                    SetDefaultTexCoordSizeYm                ( float value );

        Vec2D                   GetDefaultTexCoordTrans                 () const;
        void                    SetDefaultTexCoordTrans                 ( Vec2D value );

        float                   GetDefaultTexCoordTransXm               () const;
        void                    SetDefaultTexCoordTransXm               ( float value );

        float                   GetDefaultTexCoordTransYm               () const;
        void                    SetDefaultTexCoordTransYm               ( float value );

        eDefaultVideoTimer      GetDefaultVideoTimer                    () const;
        void                    SetDefaultVideoTimer                    ( eDefaultVideoTimer value );

        bool                    GetFloatRequireFiltering                () const;
        void                    SetFloatRequireFiltering                ( bool value );

        bool                    GetForce1stPixelAlpha0                  () const;
        void                    SetForce1stPixelAlpha0                  ( bool value );

        bool                    GetForceBorderAlpha                     () const;
        void                    SetForceBorderAlpha                     ( bool value );

        bool                    GetForceBorderRGB                       () const;
        void                    SetForceBorderRGB                       ( bool value );

        eForceBorderSize        GetForceBorderSize                      () const;
        void                    SetForceBorderSize                      ( eForceBorderSize value );

        bool                    GetForceShaderBitmapTc                  () const;
        void                    SetForceShaderBitmapTc                  ( bool value );

        bool                    GetForceShaderGenerateUV                () const;
        void                    SetForceShaderGenerateUV                ( bool value );

        eGenerateUV             GetGenerateUV                           () const;
        void                    SetGenerateUV                           ( eGenerateUV value );

        bool                    GetIgnoreImageAlpha01                   () const;
        void                    SetIgnoreImageAlpha01                   ( bool value );

        class CPlugFileImg*     GetImage                                () const;
        void                    SetImage                                ( class CPlugFileImg* value );

        bool                    GetIsCubeMap                            () const;
        void                    SetIsCubeMap                            ( bool value );

        bool                    GetIsMipMapLowerAlphaEnable             () const;
        void                    SetIsMipMapLowerAlphaEnable             ( bool value );

        bool                    GetIsNonPow2Conditional                 () const;
        void                    SetIsNonPow2Conditional                 ( bool value );

        bool                    GetIsOneBitAlpha                        () const;
        void                    SetIsOneBitAlpha                        ( bool value );

        bool                    GetIsOriginTop                          () const;
        void                    SetIsOriginTop                          ( bool value );

        eLdrColorSpace          GetLdrColorSpace                        () const;
        void                    SetLdrColorSpace                        ( eLdrColorSpace value );

        uint                    GetMipLevelSkipCountMax                 () const;
        void                    SetMipLevelSkipCountMax                 ( uint value );

        bool                    GetMipLevelSkipFromQuality              () const;
        void                    SetMipLevelSkipFromQuality              ( bool value );

        eMipMapAlpha01          GetMipMapAlpha01                        () const;
        void                    SetMipMapAlpha01                        ( eMipMapAlpha01 value );

        Array < float >&        GetMipMapFadeAlphas                     () const;
        void                    SetMipMapFadeAlphas                     ( Array < float >& value );

        float                   GetMipMapLodBiasDefault                 () const;
        void                    SetMipMapLodBiasDefault                 ( float value );

        float                   GetMipMapLowerAlpha                     () const;
        void                    SetMipMapLowerAlpha                     ( float value );

        uint                    GetMultiSampleCount                     () const;
        void                    SetMultiSampleCount                     ( uint value );

        bool                    GetNoMipNormalize                       () const;
        void                    SetNoMipNormalize                       ( bool value );

        bool                    GetNoShaderSetBlendMap                  () const;
        void                    SetNoShaderSetBlendMap                  ( bool value );

        bool                    GetNormalAreSigned                      () const;
        void                    SetNormalAreSigned                      ( bool value );

        bool                    GetNormalCanBeSigned                    () const;
        void                    SetNormalCanBeSigned                    ( bool value );

        eNormalRotate           GetNormalRotate                         () const;
        void                    SetNormalRotate                         ( eNormalRotate value );

        ePixelUpdate            GetPixelUpdate                          () const;
        void                    SetPixelUpdate                          ( ePixelUpdate value );

        class CPlugBitmapRender* GetRender                               () const;
        void                    SetRender                               ( class CPlugBitmapRender* value );

        bool                    GetRenderAutoFitSS                      () const;
        void                    SetRenderAutoFitSS                      ( bool value );

        bool                    GetRenderAutoFitSize                    () const;
        void                    SetRenderAutoFitSize                    ( bool value );

        bool                    GetRenderRequireBlending                () const;
        void                    SetRenderRequireBlending                ( bool value );

        uint                    GetRenderSizeDiv                        () const;
        void                    SetRenderSizeDiv                        ( uint value );

        uint                    GetRenderSizeMul                        () const;
        void                    SetRenderSizeMul                        ( uint value );

        eRenderTech             GetRenderTech                           () const;
        void                    SetRenderTech                           ( eRenderTech value );

        bool                    GetRenderTexelsMustPersist              () const;
        void                    SetRenderTexelsMustPersist              ( bool value );

        class CPlugBitmapShader* GetShader                               () const;
        void                    SetShader                               ( class CPlugBitmapShader* value );

        bool                    GetShadowCasterIgnoreAlpha              () const;
        void                    SetShadowCasterIgnoreAlpha              ( bool value );

        float                   GetSpecularExp                          () const;
        void                    SetSpecularExp                          ( float value );

        color                   GetSpecularRGB                          () const;
        void                    SetSpecularRGB                          ( color value );

        class CPlugSpriteParam* GetSpriteParam                          () const;
        void                    SetSpriteParam                          ( class CPlugSpriteParam* value );

        eTexAddressU            GetTexAddressU                          () const;
        void                    SetTexAddressU                          ( eTexAddressU value );

        eTexAddressV            GetTexAddressV                          () const;
        void                    SetTexAddressV                          ( eTexAddressV value );

        eTexAddressW            GetTexAddressW                          () const;
        void                    SetTexAddressW                          ( eTexAddressW value );

        eTexFilter              GetTexFilter                            () const;
        void                    SetTexFilter                            ( eTexFilter value );

        eUsage                  GetUsage                                () const;
        void                    SetUsage                                ( eUsage value );

        bool                    GetWantMipMapping                       () const;
        void                    SetWantMipMapping                       ( bool value );

        eWantedColorDepth       GetWantedColorDepth                     () const;
        void                    SetWantedColorDepth                     ( eWantedColorDepth value );

