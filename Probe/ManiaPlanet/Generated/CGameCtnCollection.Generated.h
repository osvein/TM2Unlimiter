        enum { CLASSID = 0x03033000 };

        static CGameCtnCollection* CreateInstance ();

        enum eBackgroundShadow
        {
            BACKGROUNDSHADOW_NONE,
            BACKGROUNDSHADOW_RECEIVE,
            BACKGROUNDSHADOW_CASTANDRECEIVE
        };
        static std::wstring     BackgroundShadowToString                ( eBackgroundShadow value );
        static eBackgroundShadow ParseBackgroundShadow                   ( const std::wstring& wstrName );

        enum eBlocksShadow
        {
            BLOCKSSHADOW_NONE,
            BLOCKSSHADOW_ALLBUTLANDSCAPE,
            BLOCKSSHADOW_ALLBUTWATERORUNDERGND,
            BLOCKSSHADOW_ALL
        };
        static std::wstring     BlocksShadowToString                    ( eBlocksShadow value );
        static eBlocksShadow    ParseBlocksShadow                       ( const std::wstring& wstrName );

        enum eCollectionId
        {

        };
        static std::wstring     CollectionIdToString                    ( eCollectionId value );
        static eCollectionId    ParseCollectionId                       ( const std::wstring& wstrName );

        enum eLightMapMapper
        {
            LIGHTMAPMAPPER_UNITEDBLOCKUS,
            LIGHTMAPMAPPER_TECH3AUTOSCALE01
        };
        static std::wstring     LightMapMapperToString                  ( eLightMapMapper value );
        static eLightMapMapper  ParseLightMapMapper                     ( const std::wstring& wstrName );

        enum eVehicleCollection
        {

        };
        static std::wstring     VehicleCollectionToString               ( eVehicleCollection value );
        static eVehicleCollection ParseVehicleCollection                  ( const std::wstring& wstrName );

        enum eVertexLighting
        {
            VERTEXLIGHTING_NONE,
            VERTEXLIGHTING_SUNRISE,
            VERTEXLIGHTING_NATIONS
        };
        static std::wstring     VertexLightingToString                  ( eVertexLighting value );
        static eVertexLighting  ParseVertexLighting                     ( const std::wstring& wstrName );

        List < nodptr<class CGameCtnArticle> >& GetArticleBlockInfoList                 () const;
        void                    SetArticleBlockInfoList                 ( List < nodptr<class CGameCtnArticle> >& value );

        List < nodptr<class CGameCtnArticle> >& GetArticleCardEventInfoList             () const;
        void                    SetArticleCardEventInfoList             ( List < nodptr<class CGameCtnArticle> >& value );

        List < nodptr<class CGameCtnArticle> >& GetArticleObjectInfoList                () const;
        void                    SetArticleObjectInfoList                ( List < nodptr<class CGameCtnArticle> >& value );

        eBackgroundShadow       GetBackgroundShadow                     () const;
        void                    SetBackgroundShadow                     ( eBackgroundShadow value );

        List < StringW >&       GetBaseZoneStrings                      () const;
        void                    SetBaseZoneStrings                      ( List < StringW >& value );

        eBlocksShadow           GetBlocksShadow                         () const;
        void                    SetBlocksShadow                         ( eBlocksShadow value );

        float                   GetBoardSquareBorder                    () const;
        void                    SetBoardSquareBorder                    ( float value );

        float                   GetBoardSquareHeight                    () const;
        void                    SetBoardSquareHeight                    ( float value );

        float                   GetCameraMinHeight                      () const;
        void                    SetCameraMinHeight                      ( float value );

        eCollectionId           GetCollectionId                         () const;
        void                    SetCollectionId                         ( eCollectionId value );

        uint                    GetCollectionPackMask                   () const;
        void                    SetCollectionPackMask                   ( uint value );

        float                   GetColorVertexMax                       () const;
        void                    SetColorVertexMax                       ( float value );

        float                   GetColorVertexMin                       () const;
        void                    SetColorVertexMin                       ( float value );

        List < nodptr<class CGameCtnZone> >& GetCompleteZoneList                     () const;
        void                    SetCompleteZoneList                     ( List < nodptr<class CGameCtnZone> >& value );

        List < Id >&            GetDecalsTypesId                        () const;
        void                    SetDecalsTypesId                        ( List < Id >& value );

        class CGameCtnDecoration* GetDefaultDecoration                    () const;
        void                    SetDefaultDecoration                    ( class CGameCtnDecoration* value );

        class CGameCtnZone*     GetDefaultZone                          () const;
        void                    SetDefaultZone                          ( class CGameCtnZone* value );

        StringW                 GetDisplayName                          () const;
        void                    SetDisplayName                          ( StringW value );

        class CFuncShaderLayerUV* GetFidFuncShaderCloudsX2                () const;
        void                    SetFidFuncShaderCloudsX2                ( class CFuncShaderLayerUV* value );

        class CPlugBitmap*      GetFidPlugBitmapCloudsX2                () const;
        void                    SetFidPlugBitmapCloudsX2                ( class CPlugBitmap* value );

        class CSystemFidsFolder* GetFolderBlockInfo                      () const;
        void                    SetFolderBlockInfo                      ( class CSystemFidsFolder* value );

        class CSystemFidsFolder* GetFolderCardEventInfo                  () const;
        void                    SetFolderCardEventInfo                  ( class CSystemFidsFolder* value );

        class CSystemFidsFolder* GetFolderDecalModels                    () const;
        void                    SetFolderDecalModels                    ( class CSystemFidsFolder* value );

        class CSystemFidsFolder* GetFolderDecoration                     () const;
        void                    SetFolderDecoration                     ( class CSystemFidsFolder* value );

        class CSystemFidsFolder* GetFolderMacroBlockInfo                 () const;
        void                    SetFolderMacroBlockInfo                 ( class CSystemFidsFolder* value );

        class CSystemFidsFolder* GetFolderMacroDecals                    () const;
        void                    SetFolderMacroDecals                    ( class CSystemFidsFolder* value );

        class CSystemFidsFolder* GetFolderMenusIcons                     () const;
        void                    SetFolderMenusIcons                     ( class CSystemFidsFolder* value );

        class CSystemFidsFolder* GetFolderObjectInfo                     () const;
        void                    SetFolderObjectInfo                     ( class CSystemFidsFolder* value );

        class CPlugBitmap*      GetIconFid                              () const;
        void                    SetIconFid                              ( class CPlugBitmap* value );

        bool                    GetIsEditable                           () const;
        void                    SetIsEditable                           ( bool value );

        bool                    GetIsWaterMultiHeight                   () const;
        void                    SetIsWaterMultiHeight                   ( bool value );

        bool                    GetIsWaterOutsidePlayField              () const;
        void                    SetIsWaterOutsidePlayField              ( bool value );

        eLightMapMapper         GetLightMapMapper                       () const;
        void                    SetLightMapMapper                       ( eLightMapMapper value );

        class CPlugBitmap*      GetLoadScreenFid                        () const;
        void                    SetLoadScreenFid                        ( class CPlugBitmap* value );

        StringW                 GetLongDesc                             () const;
        void                    SetLongDesc                             ( StringW value );

        Vec2D                   GetMapCoordDesc                         () const;
        void                    SetMapCoordDesc                         ( Vec2D value );

        Vec2D                   GetMapCoordElem                         () const;
        void                    SetMapCoordElem                         ( Vec2D value );

        Vec2D                   GetMapCoordIcon                         () const;
        void                    SetMapCoordIcon                         ( Vec2D value );

        class CPlugBitmap*      GetMapFid                               () const;
        void                    SetMapFid                               ( class CPlugBitmap* value );

        Vec2D                   GetMapRectMax                           () const;
        void                    SetMapRectMax                           ( Vec2D value );

        Vec2D                   GetMapRectMin                           () const;
        void                    SetMapRectMin                           ( Vec2D value );

        class CSceneVehicleCarMarksModel* GetMarksModel                           () const;
        void                    SetMarksModel                           ( class CSceneVehicleCarMarksModel* value );

        bool                    GetNeedUnlock                           () const;
        void                    SetNeedUnlock                           ( bool value );

        class CPlugFogMatter*   GetOffZone_FogMatter                    () const;
        void                    SetOffZone_FogMatter                    ( class CPlugFogMatter* value );

        List < nodptr<class CPlugParticleEmitterModel> >& GetParticleEmitterModelsFids            () const;
        void                    SetParticleEmitterModelsFids            ( List < nodptr<class CPlugParticleEmitterModel> >& value );

        List < nodptr<class CGameCtnDecorationTerrainModifier> >& GetReplacementTerrainModifiers          () const;
        void                    SetReplacementTerrainModifiers          ( List < nodptr<class CGameCtnDecorationTerrainModifier> >& value );

        List < StringW >&       GetReplacementZoneStrings               () const;
        void                    SetReplacementZoneStrings               ( List < StringW >& value );

        bool                    GetShadowCastBack                       () const;
        void                    SetShadowCastBack                       ( bool value );

        float                   GetShadowSoftSizeInWorld                () const;
        void                    SetShadowSoftSizeInWorld                ( float value );

        int                     GetSortIndex                            () const;
        void                    SetSortIndex                            ( int value );

        float                   GetSquareHeight                         () const;
        void                    SetSquareHeight                         ( float value );

        float                   GetSquareSize                           () const;
        void                    SetSquareSize                           ( float value );

        Vec3D                   GetTech3TunnelSpecularExpScaleMax       () const;
        void                    SetTech3TunnelSpecularExpScaleMax       ( Vec3D value );

        float                   GetTerrainHeightOffset                  () const;
        void                    SetTerrainHeightOffset                  ( float value );

        Id                      GetVehicleAuthor                        () const;
        void                    SetVehicleAuthor                        ( Id value );

        eVehicleCollection      GetVehicleCollection                    () const;
        void                    SetVehicleCollection                    ( eVehicleCollection value );

        Id                      GetVehicleName                          () const;
        void                    SetVehicleName                          ( Id value );

        eVertexLighting         GetVertexLighting                       () const;
        void                    SetVertexLighting                       ( eVertexLighting value );

        float                   GetWaterBottomDeep                      () const;
        void                    SetWaterBottomDeep                      ( float value );

        float                   GetWaterBottomShallow                   () const;
        void                    SetWaterBottomShallow                   ( float value );

        float                   GetWaterFogClampAboveDist               () const;
        void                    SetWaterFogClampAboveDist               ( float value );

        float                   GetWaterFogMaxDepth                     () const;
        void                    SetWaterFogMaxDepth                     ( float value );

        float                   GetWaterTop                             () const;
        void                    SetWaterTop                             ( float value );

        List < nodptr<class CGameCtnZone> >& GetZoneList                             () const;
        void                    SetZoneList                             ( List < nodptr<class CGameCtnZone> >& value );

        void                    AddReplacementZone                      ();
        void                    RemoveReplacementZone                   ();
        void                    SetMapCoordFromRect                     ();
