        enum { CLASSID = 0x0310E000 };

        static CGameCtnEditorCommon* CreateInstance ();

        class CGameActorsManager* GetActorsManager                        () const;
        void                    SetActorsManager                        ( class CGameActorsManager* value );

        class CGameCtnBlock*    GetBlockEditor2_Block                   () const;
        void                    SetBlockEditor2_Block                   ( class CGameCtnBlock* value );

        class CGameCtnBlockInfo* GetBlockEditor2_BlockInfo               () const;
        void                    SetBlockEditor2_BlockInfo               ( class CGameCtnBlockInfo* value );

        class CPlugSolid*       GetBlockEditor2_BlockSolid              () const;
        void                    SetBlockEditor2_BlockSolid              ( class CPlugSolid* value );

        StringA                 GetBlockEditor2_Text                    () const;
        void                    SetBlockEditor2_Text                    ( StringA value );

        float                   GetCameraAngle                          () const;
        void                    SetCameraAngle                          ( float value );

        float                   GetCameraTargetMaxX                     () const;
        void                    SetCameraTargetMaxX                     ( float value );

        float                   GetCameraTargetMaxZ                     () const;
        void                    SetCameraTargetMaxZ                     ( float value );

        float                   GetCameraTargetMinX                     () const;
        void                    SetCameraTargetMinX                     ( float value );

        float                   GetCameraTargetMinZ                     () const;
        void                    SetCameraTargetMinZ                     ( float value );

        class CGameCtnChallenge* GetChallenge                            () const;
        void                    SetChallenge                            ( class CGameCtnChallenge* value );

        class CGameCtnMacroBlockInfo* GetCopyPasteMacroBlockInfo              () const;
        void                    SetCopyPasteMacroBlockInfo              ( class CGameCtnMacroBlockInfo* value );

        class CGameCtnBlock*    GetCurrentBlock                         () const;
        void                    SetCurrentBlock                         ( class CGameCtnBlock* value );

        class CGameCtnBlockInfo* GetCurrentBlockInfo                     () const;
        void                    SetCurrentBlockInfo                     ( class CGameCtnBlockInfo* value );

        class CGameCtnMacroBlockInfo* GetCurrentMacroBlockInfo                () const;
        void                    SetCurrentMacroBlockInfo                ( class CGameCtnMacroBlockInfo* value );

        class CGameCtnObjectInfo* GetCurrentObjectInfo                    () const;
        void                    SetCurrentObjectInfo                    ( class CGameCtnObjectInfo* value );

        class CGameCtnBlock*    GetCurrentTerrainBlock                  () const;
        void                    SetCurrentTerrainBlock                  ( class CGameCtnBlock* value );

        class CGameCtnObjectInfo* GetCurrentTrafficObjectInfo             () const;
        void                    SetCurrentTrafficObjectInfo             ( class CGameCtnObjectInfo* value );

        class CGameCtnCursor*   GetCursor                               () const;
        void                    SetCursor                               ( class CGameCtnCursor* value );

        class CGameOutlineBox*  GetCustomSelectionBox                   () const;
        void                    SetCustomSelectionBox                   ( class CGameOutlineBox* value );

        StringA                 GetDebugShootIconName                   () const;
        void                    SetDebugShootIconName                   ( StringA value );

        class CGameCtnEditorDecals* GetEditorDecals                         () const;
        void                    SetEditorDecals                         ( class CGameCtnEditorDecals* value );

        class CGameCtnEditorCommonInterface* GetEditorInterface                      () const;
        void                    SetEditorInterface                      ( class CGameCtnEditorCommonInterface* value );

        class CGameCtnEditorMapTypeScriptHandler* GetEditorMapType                        () const;
        void                    SetEditorMapType                        ( class CGameCtnEditorMapTypeScriptHandler* value );

        List < nodptr<class CGameCtnEditorPluginScriptHandler> >& GetEditorPlugins                        () const;
        void                    SetEditorPlugins                        ( List < nodptr<class CGameCtnEditorPluginScriptHandler> >& value );

        class CGameCtnEditorSpot* GetEditorSpot                           () const;
        void                    SetEditorSpot                           ( class CGameCtnEditorSpot* value );

        class CGameCtnEditorTraffic* GetEditorTraffic                        () const;
        void                    SetEditorTraffic                        ( class CGameCtnEditorTraffic* value );

        class CSceneMobil*      GetGrid                                 () const;
        void                    SetGrid                                 ( class CSceneMobil* value );

        color                   GetGridColor                            () const;
        void                    SetGridColor                            ( color value );

        float                   GetGridColorAlpha                       () const;
        void                    SetGridColorAlpha                       ( float value );

        bool                    GetHackForceTerrainBulldozeForbidden    () const;
        void                    SetHackForceTerrainBulldozeForbidden    ( bool value );

        bool                    GetHackMixMapping                       () const;
        void                    SetHackMixMapping                       ( bool value );

        uint                    GetIterationsRecursive                  () const;
        void                    SetIterationsRecursive                  ( uint value );

        StringW                 GetMacroDecalsEditor_Text               () const;
        void                    SetMacroDecalsEditor_Text               ( StringW value );

        float                   GetMouseMoveDist                        () const;
        void                    SetMouseMoveDist                        ( float value );

        int                     GetNbAvailableCoppers                   () const;
        void                    SetNbAvailableCoppers                   ( int value );

        uint                    GetNbMaxCoppers                         () const;
        void                    SetNbMaxCoppers                         ( uint value );

        class CGameOutlineBox*  GetOffZoneSelectionBox                  () const;
        void                    SetOffZoneSelectionBox                  ( class CGameOutlineBox* value );

        class CGameControlCameraEditorOrbital* GetOrbitalCameraControl                 () const;
        void                    SetOrbitalCameraControl                 ( class CGameControlCameraEditorOrbital* value );

        class CGameCtnBlock*    GetPickedBlock                          () const;
        void                    SetPickedBlock                          ( class CGameCtnBlock* value );

        int                     GetPluginOffsetX                        () const;
        void                    SetPluginOffsetX                        ( int value );

        int                     GetPluginOffsetY                        () const;
        void                    SetPluginOffsetY                        ( int value );

        int                     GetPluginOffsetZ                        () const;
        void                    SetPluginOffsetZ                        ( int value );

        class CGameCtnEditChallengePrecalcParticles* GetPrecalcParticleEditor                () const;
        void                    SetPrecalcParticleEditor                ( class CGameCtnEditChallengePrecalcParticles* value );

        class CGameOutlineBox*  GetSelectionBox                         () const;
        void                    SetSelectionBox                         ( class CGameOutlineBox* value );

        StringW                 GetSkinText                             () const;
        void                    SetSkinText                             ( StringW value );

        class CGameOutlineBox*  GetUndergroundBox                       () const;
        void                    SetUndergroundBox                       ( class CGameOutlineBox* value );

        bool                    GetUseNewTerraforming                   () const;
        void                    SetUseNewTerraforming                   ( bool value );

        class CGameCtnVehicleSpawnCursor* GetVehicleSpawnCursor                   () const;
        void                    SetVehicleSpawnCursor                   ( class CGameCtnVehicleSpawnCursor* value );

        void                    BlockAddOnClick                         ();
        void                    BlockEditor_OnCancelIcon                ();
        void                    BlockEditor_OnRotateIcon                ();
        void                    BlockEditor_OnSaveIcon                  ();
        void                    BlockSubOnClick                         ();
        void                    BlockViewerOnClick                      ();
        void                    ButtonAdditionalToolsOnClick            ();
        void                    ButtonBackOnClick                       ();
        void                    ButtonBackStepOnClick                   ();
        void                    ButtonBlockPropertyModeOnClick          ();
        void                    ButtonBlockStockOnClick                 ();
        void                    ButtonCameraDownOnClick                 ();
        void                    ButtonCameraLeftOnClick                 ();
        void                    ButtonCameraRightOnClick                ();
        void                    ButtonCameraUpOnClick                   ();
        void                    ButtonChallengeTypeOnClick              ();
        void                    ButtonChooseMapTypeOnClick              ();
        void                    ButtonChooseSkinModeOnClick             ();
        void                    ButtonComputeDecalsOnClick              ();
        void                    ButtonComputeShadowsOnClick             ();
        void                    ButtonCopyPasteOnClick                  ();
        void                    ButtonCreateDeckOnClick                 ();
        void                    ButtonCursorDownOnClick                 ();
        void                    ButtonCursorLeftOnClick                 ();
        void                    ButtonCursorLowerOnClick                ();
        void                    ButtonCursorRaiseOnClick                ();
        void                    ButtonCursorRightOnClick                ();
        void                    ButtonCursorTurnAnticlockwiseOnClick    ();
        void                    ButtonCursorTurnClockwiseOnClick        ();
        void                    ButtonCursorUpOnClick                   ();
        void                    ButtonEditEndRaceReplay                 ();
        void                    ButtonEditToolsOnClick                  ();
        void                    ButtonEraserModeOnClick                 ();
        void                    ButtonFreelookModeOnClick               ();
        void                    ButtonHelpOnClick                       ();
        void                    ButtonHelper1OnClick                    ();
        void                    ButtonInventoryBlocksOnClick            ();
        void                    ButtonInventoryDecalsOnClick            ();
        void                    ButtonInventoryMacroBlocksOnClick       ();
        void                    ButtonInventoryObjectsOnClick           ();
        void                    ButtonInventoryPluginsOnClick           ();
        void                    ButtonInventoryTerraformOnClick         ();
        void                    ButtonInventoryTrafficOnClick           ();
        void                    ButtonLoadOnClick                       ();
        void                    ButtonMacroDecalApplyScreenshot_OnClick ();
        void                    ButtonMacroDecalsOnClick                ();
        void                    ButtonMacroDecalsSave_OnClick           ();
        void                    ButtonMacroDecalsScreenshot_OnClick     ();
        void                    ButtonMixMapOnClick                     ();
        void                    ButtonNewTerrainEditorOnClick           ();
        void                    ButtonObjectivesOnClick                 ();
        void                    ButtonOffZoneOnClick                    ();
        void                    ButtonPickerModeOnClick                 ();
        void                    ButtonRedoOnClick                       ();
        void                    ButtonSaveOnClick                       ();
        void                    ButtonSelectionBoxAddModeOnClick        ();
        void                    ButtonSelectionBoxCopyOnClick           ();
        void                    ButtonSelectionBoxCutOnClick            ();
        void                    ButtonSelectionBoxResetOnClick          ();
        void                    ButtonSelectionBoxSaveNewOnClick        ();
        void                    ButtonSelectionBoxSelectAllOnClick      ();
        void                    ButtonSelectionBoxSubModeOnClick        ();
        void                    ButtonSelectionBoxSymmetriseOnClick     ();
        void                    ButtonSetCardEventModeOnClick           ();
        void                    ButtonShowChallengeDetailsOnClick       ();
        void                    ButtonSpotModeOnClick                   ();
        void                    ButtonTestOnClick                       ();
        void                    ButtonUndergroundModeOnClick            ();
        void                    ButtonUndoOnClick                       ();
        void                    ButtonValidateOnClick                   ();
        void                    ButtonZoomInOnClick                     ();
        void                    ButtonZoomOutOnClick                    ();
        void                    DeleteArticle_OnYes                     ();
        void                    EditorPluginCreateOnClick               ();
        void                    EditorPluginEditOnClick                 ();
        void                    MacroDecalsEditor_OnCancel              ();
        void                    MacroDecalsEditor_OnSave                ();
        void                    OnMapRulesModeSelected                  ();
        void                    PrecalcParticleEditor_Destroy           ();
        void                    PrecalcParticleEditor_Init              ();
        void                    Quit                                    ();
        void                    ReloadPlugins                           ();
        void                    SaveChallengeFromScript_OnSave          ();
        void                    SaveMacroBlockFromScript_OnCancel       ();
        void                    SaveMacroBlockFromScript_OnSave         ();
        void                    SuperSweepAndSave                       ();
        void                    SweepBlocksAndSave                      ();
        void                    SweepObjectsAndSave                     ();
        void                    SweepOffZoneAndSave                     ();
        void                    SweepSelectionAndSave                   ();
        void                    SweepTerrainAndSave                     ();
        void                    SwitchFromCameraIconMode                ();
        void                    SwitchToCameraIconMode                  ();
        void                    UnloadPlugins                           ();
        void                    UpdateBases                             ();
