        enum { CLASSID = 0x03160000 };

        static CGameCtnEditorPluginScriptHandler* CreateInstance ();

        enum eCursorDir
        {
            CURSORDIR_NORTH,
            CURSORDIR_EAST,
            CURSORDIR_SOUTH,
            CURSORDIR_WEST
        };
        static std::wstring     CursorDirToString                       ( eCursorDir value );
        static eCursorDir       ParseCursorDir                          ( const std::wstring& wstrName );

        enum eEditMode
        {
            EDITMODE_UNKNOWN,
            EDITMODE_PLACE,
            EDITMODE_FREELOOK,
            EDITMODE_ERASE,
            EDITMODE_PICK,
            EDITMODE_SELECTIONADD,
            EDITMODE_SELECTIONREMOVE
        };
        static std::wstring     EditModeToString                        ( eEditMode value );
        static eEditMode        ParseEditMode                           ( const std::wstring& wstrName );

        enum ePlaceMode
        {
            PLACEMODE_UNKNOWN,
            PLACEMODE_TERRAFORM,
            PLACEMODE_BLOCK,
            PLACEMODE_MACROBLOCK,
            PLACEMODE_SKIN,
            PLACEMODE_COPYPASTE,
            PLACEMODE_TEST,
            PLACEMODE_PLUGIN,
            PLACEMODE_CUSTOMSELECTION,
            PLACEMODE_OFFZONE,
            PLACEMODE_BLOCKPROPERTY
        };
        static std::wstring     PlaceModeToString                       ( ePlaceMode value );
        static ePlaceMode       ParsePlaceMode                          ( const std::wstring& wstrName );

        List < nodptr<class CGameCtnEditorScriptSpecialProperty> >& GetAnchorData                           () const;
        void                    SetAnchorData                           ( List < nodptr<class CGameCtnEditorScriptSpecialProperty> >& value );

        List < nodptr<class CGameCtnBlockInfo> >& GetBlockModels                          () const;
        void                    SetBlockModels                          ( List < nodptr<class CGameCtnBlockInfo> >& value );

        bool                    GetBlockStockMode                       () const;
        void                    SetBlockStockMode                       ( bool value );

        List < nodptr<class CGameCtnBlock> >& GetBlocks                               () const;
        void                    SetBlocks                               ( List < nodptr<class CGameCtnBlock> >& value );

        float                   GetCameraHAngle                         () const;
        void                    SetCameraHAngle                         ( float value );

        float                   GetCameraToTargetDistance               () const;
        void                    SetCameraToTargetDistance               ( float value );

        float                   GetCameraVAngle                         () const;
        void                    SetCameraVAngle                         ( float value );

        class CGameCtnBlockInfo* GetCursorBlockModel                     () const;
        void                    SetCursorBlockModel                     ( class CGameCtnBlockInfo* value );

        uint3                   GetCursorCoord                          () const;
        void                    SetCursorCoord                          ( uint3 value );

        eCursorDir              GetCursorDir                            () const;
        void                    SetCursorDir                            ( eCursorDir value );

        class CGameCtnMacroBlockInfo* GetCursorMacroblockModel                () const;
        void                    SetCursorMacroblockModel                ( class CGameCtnMacroBlockInfo* value );

        class CGameCtnBlockInfo* GetCursorTerrainBlockModel              () const;
        void                    SetCursorTerrainBlockModel              ( class CGameCtnBlockInfo* value );

        List < uint3 >&         GetCustomSelectionCoords                () const;
        void                    SetCustomSelectionCoords                ( List < uint3 >& value );

        Vec3D                   GetCustomSelectionRGB                   () const;
        void                    SetCustomSelectionRGB                   ( Vec3D value );

        eEditMode               GetEditMode                             () const;
        void                    SetEditMode                             ( eEditMode value );

        List < nodptr<class CGameCtnMacroBlockInfo> >& GetMacroblockModels                     () const;
        void                    SetMacroblockModels                     ( List < nodptr<class CGameCtnMacroBlockInfo> >& value );

        class CGameManialinkPage* GetManialinkPage                        () const;
        void                    SetManialinkPage                        ( class CGameManialinkPage* value );

        StringA                 GetManialinkText                        () const;
        void                    SetManialinkText                        ( StringA value );

        class CGameCtnChallenge* GetMap                                  () const;
        void                    SetMap                                  ( class CGameCtnChallenge* value );

        int                     GetNow                                  () const;
        void                    SetNow                                  ( int value );

        List < nodptr<class CGameCtnEditorPluginScriptEvent> >& GetPendingEvents                        () const;
        void                    SetPendingEvents                        ( List < nodptr<class CGameCtnEditorPluginScriptEvent> >& value );

        ePlaceMode              GetPlaceMode                            () const;
        void                    SetPlaceMode                            ( ePlaceMode value );

        Vec3D                   GetTargetedPosition                     () const;
        void                    SetTargetedPosition                     ( Vec3D value );

        List < nodptr<class CGameCtnBlockInfo> >& GetTerrainBlockModels                   () const;
        void                    SetTerrainBlockModels                   ( List < nodptr<class CGameCtnBlockInfo> >& value );

        List < nodptr<class CGamePlaygroundUILayer> >& GetUILayers                             () const;
        void                    SetUILayers                             ( List < nodptr<class CGamePlaygroundUILayer> >& value );

        bool                    GetUndergroundMode                      () const;
        void                    SetUndergroundMode                      ( bool value );

        void                    AutoSave                                ();
        uint                    CanPlaceBlock                           ( class CGameCtnBlockInfo* pBlockModel, int3 coord, uint dir );
        uint                    CanPlaceBlock_NoDestruction             ( class CGameCtnBlockInfo* pBlockModel, int3 coord, uint dir );
        bool                    CanPlaceMacroblock                      ( class CGameCtnMacroBlockInfo* pBlockModel, int3 coord, uint dir );
        bool                    CanPlaceMacroblock_NoDestruction        ( class CGameCtnMacroBlockInfo* pBlockModel, int3 coord, uint dir );
        bool                    CanPlaceRoadBlocks                      ( class CGameCtnBlockInfo* pBlockModel, int3 startCoord, int3 endCoord );
        bool                    CanPlaceTerrainBlocks                   ( class CGameCtnBlockInfo* pBlockModel, int3 startCoord, int3 endCoord );
        void                    ComputeShadows                          ();
        void                    CopyPaste_AddOrSubSelection             ( int3 startCoord, int3 endCoord );
        void                    CopyPaste_Copy                          ();
        void                    CopyPaste_Cut                           ();
        void                    CopyPaste_Remove                        ();
        void                    CopyPaste_ResetSelection                ();
        void                    CopyPaste_SelectAll                     ();
        bool                    CopyPaste_Symmetrize                    ();
        class CGameCtnBlock*    GetBlock                                ( int3 coord );
        uint                    GetBlockGroundHeight                    ( class CGameCtnBlockInfo* pBlockModel, int iCoordX, int iCoordZ, uint dir );
        class CGameCtnBlock*    GetStartLineBlock                       ();
        void                    Help                                    ();
        void                    HideCustomSelection                     ();
        void                    OpenToolsMenu                           ();
        bool                    PlaceBlock                              ( class CGameCtnBlockInfo* pBlockModel, int3 coord, uint dir );
        bool                    PlaceBlock_NoDestruction                ( class CGameCtnBlockInfo* pBlockModel, int3 coord, uint dir );
        bool                    PlaceMacroblock                         ( class CGameCtnMacroBlockInfo* pBlockModel, int3 coord, uint dir );
        bool                    PlaceMacroblock_NoDestruction           ( class CGameCtnMacroBlockInfo* pBlockModel, int3 coord, uint dir );
        bool                    PlaceRoadBlocks                         ( class CGameCtnBlockInfo* pBlockModel, int3 startCoord, int3 endCoord );
        bool                    PlaceTerrainBlocks                      ( class CGameCtnBlockInfo* pBlockModel, int3 startCoord, int3 endCoord );
        bool                    PlaceTerrainBlocks_NoDestruction        ( class CGameCtnBlockInfo* pBlockModel, int3 startCoord, int3 endCoord );
        void                    Quit                                    ();
        void                    Redo                                    ();
        void                    RemoveAll                               ();
        void                    RemoveAllBlocks                         ();
        void                    RemoveAllBlocksAndTerrain               ();
        void                    RemoveAllObjects                        ();
        void                    RemoveAllOffZone                        ();
        void                    RemoveAllTerrain                        ();
        bool                    RemoveBlock                             ( int3 coord );
        bool                    RemoveTerrainBlocks                     ( int3 startCoord, int3 endCoord );
        void                    SaveMacroblock                          ( class CGameCtnMacroBlockInfo* pMacroblockModel );
        void                    SaveMap                                 ( StringW wstrFileName, StringW wstrPath );
        void                    ShowCustomSelection                     ();
        class CGamePlaygroundUILayer* UILayerCreate                           ();
        void                    UILayerDestroy                          ( class CGamePlaygroundUILayer* pLayer );
        void                    UILayerDestroyAll                       ();
        void                    Undo                                    ();
        void                    Validate                                ();
