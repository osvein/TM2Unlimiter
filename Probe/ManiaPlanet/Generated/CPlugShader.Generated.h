        enum { CLASSID = 0x09002000 };

        static CPlugShader*     CreateInstance ();

        enum eFillMode
        {
            FILLMODE_SOLID,
            FILLMODE_WIRED,
            FILLMODE_DEPRECATED_LINEWIRED,
            FILLMODE_SOLIDWIRED
        };
        static std::wstring     FillModeToString                        ( eFillMode value );
        static eFillMode        ParseFillMode                           ( const std::wstring& wstrName );

        enum eGeomExpand
        {
            GEOMEXPAND_SPRITETECH3,
            GEOMEXPAND_NONE
        };
        static std::wstring     GeomExpandToString                      ( eGeomExpand value );
        static eGeomExpand      ParseGeomExpand                         ( const std::wstring& wstrName );

        enum eSortPosition
        {
            SORTPOSITION_BEGINNING,
            SORTPOSITION_BEFOREALPHA01,
            SORTPOSITION_BEFORETRANS,
            SORTPOSITION_ENDING
        };
        static std::wstring     SortPositionToString                    ( eSortPosition value );
        static eSortPosition    ParseSortPosition                       ( const std::wstring& wstrName );

        enum eSprite
        {
            SPRITE_POS_COL0_TEX0,
            SPRITE_NHALFDIAGINWORLD,
            SPRITE_TMF_RALLYTREERGB,
            SPRITE_TECH3_SH,
            SPRITE_POS_TEX0,
            SPRITE_POS_RAD_COL0_TEX0,
            SPRITE_POS_RAD_COL0_TEX0_TEX1
        };
        static std::wstring     SpriteToString                          ( eSprite value );
        static eSprite          ParseSprite                             ( const std::wstring& wstrName );

        enum eVertexSpace
        {
            VERTEXSPACE_NONE,
            VERTEXSPACE_FIXED,
            VERTEXSPACE_PLANEY
        };
        static std::wstring     VertexSpaceToString                     ( eVertexSpace value );
        static eVertexSpace     ParseVertexSpace                        ( const std::wstring& wstrName );

        bool                    GetAlpha01SoftEdges                     () const;
        void                    SetAlpha01SoftEdges                     ( bool value );

        bool                    GetAutoSkipDiffuseWithoutA              () const;
        void                    SetAutoSkipDiffuseWithoutA              ( bool value );

        uint                    GetBiasZ                                () const;
        void                    SetBiasZ                                ( uint value );

        class CPlugBitmap*      GetBitmapShadowOpacity                  () const;
        void                    SetBitmapShadowOpacity                  ( class CPlugBitmap* value );

        bool                    GetCanUseVisualBBox                     () const;
        void                    SetCanUseVisualBBox                     ( bool value );

        bool                    GetComputeFillValue                     () const;
        void                    SetComputeFillValue                     ( bool value );

        eFillMode               GetFillMode                             () const;
        void                    SetFillMode                             ( eFillMode value );

        class CFuncShader*      GetFuncShader                           () const;
        void                    SetFuncShader                           ( class CFuncShader* value );

        bool                    GetGReqColor0                           () const;
        void                    SetGReqColor0                           ( bool value );

        bool                    GetGReqIndex                            () const;
        void                    SetGReqIndex                            ( bool value );

        bool                    GetGReqNormal                           () const;
        void                    SetGReqNormal                           ( bool value );

        bool                    GetGReqTangentU                         () const;
        void                    SetGReqTangentU                         ( bool value );

        bool                    GetGReqTangentV                         () const;
        void                    SetGReqTangentV                         ( bool value );

        uint                    GetGReqWeightCount                      () const;
        void                    SetGReqWeightCount                      ( uint value );

        eGeomExpand             GetGeomExpand                           () const;
        void                    SetGeomExpand                           ( eGeomExpand value );

        bool                    GetIgnoreLayerTexCoordIndex             () const;
        void                    SetIgnoreLayerTexCoordIndex             ( bool value );

        bool                    GetIsAlphaBlended                       () const;
        void                    SetIsAlphaBlended                       ( bool value );

        bool                    GetIsDoubleSided                        () const;
        void                    SetIsDoubleSided                        ( bool value );

        bool                    GetIsFogEyeZEnable                      () const;
        void                    SetIsFogEyeZEnable                      ( bool value );

        bool                    GetIsFogPlaneEnable                     () const;
        void                    SetIsFogPlaneEnable                     ( bool value );

        bool                    GetIsInsideTunnel                       () const;
        void                    SetIsInsideTunnel                       ( bool value );

        bool                    GetIsTranslucent                        () const;
        void                    SetIsTranslucent                        ( bool value );

        Array < class CPlug* >& GetPasses                               () const;
        void                    SetPasses                               ( Array < class CPlug* >& value );

        bool                    GetProjectorReceiver                    () const;
        void                    SetProjectorReceiver                    ( bool value );

        class CPlugShader*      GetShaderCustomFid_DblSideBlackBack     () const;
        void                    SetShaderCustomFid_DblSideBlackBack     ( class CPlugShader* value );

        class CPlugShader*      GetShaderCustomFid_DepthToAlpha         () const;
        void                    SetShaderCustomFid_DepthToAlpha         ( class CPlugShader* value );

        class CPlugShader*      GetShaderCustomFid_LBumpFromMap         () const;
        void                    SetShaderCustomFid_LBumpFromMap         ( class CPlugShader* value );

        class CPlugShader*      GetShaderCustomFid_LIndxMDiffuse        () const;
        void                    SetShaderCustomFid_LIndxMDiffuse        ( class CPlugShader* value );

        class CPlugShader*      GetShaderCustomFid_Opacity              () const;
        void                    SetShaderCustomFid_Opacity              ( class CPlugShader* value );

        class CPlugShader*      GetShaderCustomFid_PeelDepthDiffuse     () const;
        void                    SetShaderCustomFid_PeelDepthDiffuse     ( class CPlugShader* value );

        class CPlugShader*      GetShaderCustomFid_Tech3DeferredDecal   () const;
        void                    SetShaderCustomFid_Tech3DeferredDecal   ( class CPlugShader* value );

        class CPlugShader*      GetShaderCustomFid_Tech3DeferredRead    () const;
        void                    SetShaderCustomFid_Tech3DeferredRead    ( class CPlugShader* value );

        class CPlugShader*      GetShaderCustomFid_Tech3DeferredWrite   () const;
        void                    SetShaderCustomFid_Tech3DeferredWrite   ( class CPlugShader* value );

        bool                    GetShadowCasterDisable                  () const;
        void                    SetShadowCasterDisable                  ( bool value );

        bool                    GetShadowDepthBiasExtra                 () const;
        void                    SetShadowDepthBiasExtra                 ( bool value );

        bool                    GetShadowImageSpaceDisable              () const;
        void                    SetShadowImageSpaceDisable              ( bool value );

        bool                    GetShadowMPassEnable                    () const;
        void                    SetShadowMPassEnable                    ( bool value );

        bool                    GetShadowRecvAnyGrp                     () const;
        void                    SetShadowRecvAnyGrp                     ( bool value );

        bool                    GetShadowRecvGrp0                       () const;
        void                    SetShadowRecvGrp0                       ( bool value );

        bool                    GetShadowRecvGrp1                       () const;
        void                    SetShadowRecvGrp1                       ( bool value );

        bool                    GetShadowRecvGrp2                       () const;
        void                    SetShadowRecvGrp2                       ( bool value );

        bool                    GetShadowRecvGrp3                       () const;
        void                    SetShadowRecvGrp3                       ( bool value );

        bool                    GetSortCustom                           () const;
        void                    SetSortCustom                           ( bool value );

        int                     GetSortIndex                            () const;
        void                    SetSortIndex                            ( int value );

        eSortPosition           GetSortPosition                         () const;
        void                    SetSortPosition                         ( eSortPosition value );

        bool                    GetSortZTest                            () const;
        void                    SetSortZTest                            ( bool value );

        bool                    GetSortZWrite                           () const;
        void                    SetSortZWrite                           ( bool value );

        eSprite                 GetSprite                               () const;
        void                    SetSprite                               ( eSprite value );

        bool                    GetStaticLighting                       () const;
        void                    SetStaticLighting                       ( bool value );

        bool                    GetTech3SelfIllum                       () const;
        void                    SetTech3SelfIllum                       ( bool value );

        uint                    GetTexCoordCount                        () const;
        void                    SetTexCoordCount                        ( uint value );

        bool                    GetTransTreeMip                         () const;
        void                    SetTransTreeMip                         ( bool value );

        bool                    GetTranslucentIsBack                    () const;
        void                    SetTranslucentIsBack                    ( bool value );

        bool                    GetTranslucentNoDownsize                () const;
        void                    SetTranslucentNoDownsize                ( bool value );

        bool                    GetTweakFogColorBlack                   () const;
        void                    SetTweakFogColorBlack                   ( bool value );

        bool                    GetUseSpriteExpand                      () const;
        void                    SetUseSpriteExpand                      ( bool value );

        class CPlugFileText*    GetVHlslIncVertexAnimate                () const;
        void                    SetVHlslIncVertexAnimate                ( class CPlugFileText* value );

        class CPlugFileGPUV*    GetVHlslVertexAnimate                   () const;
        void                    SetVHlslVertexAnimate                   ( class CPlugFileGPUV* value );

        bool                    GetVIdBackground                        () const;
        void                    SetVIdBackground                        ( bool value );

        bool                    GetVIdGrassRGB                          () const;
        void                    SetVIdGrassRGB                          ( bool value );

        bool                    GetVIdHideAlways                        () const;
        void                    SetVIdHideAlways                        ( bool value );

        bool                    GetVIdHideOnlyDirect                    () const;
        void                    SetVIdHideOnlyDirect                    ( bool value );

        bool                    GetVIdHideWhenOverground                () const;
        void                    SetVIdHideWhenOverground                ( bool value );

        bool                    GetVIdHideWhenUnderground               () const;
        void                    SetVIdHideWhenUnderground               ( bool value );

        bool                    GetVIdInvisibleStopBounce               () const;
        void                    SetVIdInvisibleStopBounce               ( bool value );

        bool                    GetVIdLightGenP                         () const;
        void                    SetVIdLightGenP                         ( bool value );

        bool                    GetVIdOnlyRefracted                     () const;
        void                    SetVIdOnlyRefracted                     ( bool value );

        bool                    GetVIdReflectMirror                     () const;
        void                    SetVIdReflectMirror                     ( bool value );

        bool                    GetVIdReflected                         () const;
        void                    SetVIdReflected                         ( bool value );

        bool                    GetVIdRefracted                         () const;
        void                    SetVIdRefracted                         ( bool value );

        bool                    GetVIdVehicle                           () const;
        void                    SetVIdVehicle                           ( bool value );

        bool                    GetVIdViewDepBump                       () const;
        void                    SetVIdViewDepBump                       ( bool value );

        bool                    GetVIdViewDepOcclusion                  () const;
        void                    SetVIdViewDepOcclusion                  ( bool value );

        bool                    GetVIdViewDepWindIntens                 () const;
        void                    SetVIdViewDepWindIntens                 ( bool value );

        eVertexSpace            GetVertexSpace                          () const;
        void                    SetVertexSpace                          ( eVertexSpace value );

        float                   GetVisibleMaxDistAtFov90                () const;
        void                    SetVisibleMaxDistAtFov90                ( float value );

        float                   GetVisibleMinScreenHeight01             () const;
        void                    SetVisibleMinScreenHeight01             ( float value );

        void                    ShadowRecvSwitchAllGrp                  ();
