        enum { CLASSID = 0x090BE000 };

        static CPlugResource*   CreateInstance ();

        class CPlugBitmap*      GetBitmapChecker                        () const;
        void                    SetBitmapChecker                        ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapEditionSprites                 () const;
        void                    SetBitmapEditionSprites                 ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapInvisible                      () const;
        void                    SetBitmapInvisible                      ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapRenderEnvAtlas                 () const;
        void                    SetBitmapRenderEnvAtlas                 ( class CPlugBitmap* value );

        class CPlugBlockShadingResource* GetBlockShading                         () const;
        void                    SetBlockShading                         ( class CPlugBlockShadingResource* value );

        class CMwNod*           GetDefaultControlStyle                  () const;
        void                    SetDefaultControlStyle                  ( class CMwNod* value );

        class CPlugFont*        GetEditFont_Default                     () const;
        void                    SetEditFont_Default                     ( class CPlugFont* value );

        class CPlugMaterial*    GetMaterialTech3DecalSprite             () const;
        void                    SetMaterialTech3DecalSprite             ( class CPlugMaterial* value );

        class CPlugBitmap*      GetMaterialTech3DecalSprite_Diffuse     () const;
        void                    SetMaterialTech3DecalSprite_Diffuse     ( class CPlugBitmap* value );

        class CPlugFilePHlsl*   GetPHlslCommon                          () const;
        void                    SetPHlslCommon                          ( class CPlugFilePHlsl* value );

        class CPlugFilePHlsl*   GetPHlslCopyColor0                      () const;
        void                    SetPHlslCopyColor0                      ( class CPlugFilePHlsl* value );

        class CPlugShader*      GetShaderBlendColorVertex               () const;
        void                    SetShaderBlendColorVertex               ( class CPlugShader* value );

        class CPlugShaderApply* GetShaderLineWithZBias                  () const;
        void                    SetShaderLineWithZBias                  ( class CPlugShaderApply* value );

        class CPlugShader*      GetShaderOverlayBlendTextureModCV       () const;
        void                    SetShaderOverlayBlendTextureModCV       ( class CPlugShader* value );

        class CPlugShader*      GetShaderOverlayCopyVertexColor         () const;
        void                    SetShaderOverlayCopyVertexColor         ( class CPlugShader* value );

        class CPlugSkinnedPlayerResource* GetSkinnedPlayer                        () const;
        void                    SetSkinnedPlayer                        ( class CPlugSkinnedPlayerResource* value );

        class CPlugFileVHlsl*   GetVHlslCommon                          () const;
        void                    SetVHlslCommon                          ( class CPlugFileVHlsl* value );

        class CPlugFileVHlsl*   GetVHlslDefaultSprites                  () const;
        void                    SetVHlslDefaultSprites                  ( class CPlugFileVHlsl* value );

        class CPlugFileVHlsl*   GetVHlslTcFullYCropX                    () const;
        void                    SetVHlslTcFullYCropX                    ( class CPlugFileVHlsl* value );

