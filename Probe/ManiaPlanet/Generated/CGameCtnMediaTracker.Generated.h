        enum { CLASSID = 0x030B1000 };

        static CGameCtnMediaTracker* CreateInstance ();

        enum eCamInterpCamCustom
        {
            CAMINTERPCAMCUSTOM_CAMERAINTERP_NONE,
            CAMINTERPCAMCUSTOM_CAMERAINTERP_HERMITE,
            CAMINTERPCAMCUSTOM_CAMERAINTERP_LINEAR,
            CAMINTERPCAMCUSTOM_CAMERAINTERP_FIXEDTANGENT
        };
        static std::wstring     CamInterpCamCustomToString              ( eCamInterpCamCustom value );
        static eCamInterpCamCustom ParseCamInterpCamCustom                 ( const std::wstring& wstrName );

        enum eClipTriggerCond
        {
            CLIPTRIGGERCOND_NONE,
            CLIPTRIGGERCOND_RACETIME_0,
            CLIPTRIGGERCOND_RACETIME_1,
            CLIPTRIGGERCOND_ALREADY_TRIGGERED,
            CLIPTRIGGERCOND_SPEED_0,
            CLIPTRIGGERCOND_SPEED_1,
            CLIPTRIGGERCOND_NOT_ALREADY_TRIGGERED
        };
        static std::wstring     ClipTriggerCondToString                 ( eClipTriggerCond value );
        static eClipTriggerCond ParseClipTriggerCond                    ( const std::wstring& wstrName );

        enum eEditionMode
        {
            EDITIONMODE_MEDIATRACK_CAMERA,
            EDITIONMODE_MEDIATRACK_REPLAYFX
        };
        static std::wstring     EditionModeToString                     ( eEditionMode value );
        static eEditionMode     ParseEditionMode                        ( const std::wstring& wstrName );

        enum eFxColorsZMode
        {
            FXCOLORSZMODE_FXCOLORS_NEAR,
            FXCOLORSZMODE_FXCOLORS_FAR
        };
        static std::wstring     FxColorsZModeToString                   ( eFxColorsZMode value );
        static eFxColorsZMode   ParseFxColorsZMode                      ( const std::wstring& wstrName );

        class CGameCtnMediaBlockEditor* GetBlockEditor                          () const;
        void                    SetBlockEditor                          ( class CGameCtnMediaBlockEditor* value );

        int                     GetBlockEnd                             () const;
        void                    SetBlockEnd                             ( int value );

        int                     GetBlockStart                           () const;
        void                    SetBlockStart                           ( int value );

        float                   GetBloomHdrBloomIntensity               () const;
        void                    SetBloomHdrBloomIntensity               ( float value );

        float                   GetBloomHdrStreaksAttenuation           () const;
        void                    SetBloomHdrStreaksAttenuation           ( float value );

        float                   GetBloomHdrStreaksIntensity             () const;
        void                    SetBloomHdrStreaksIntensity             ( float value );

        bool                    GetButIsLooping                         () const;
        void                    SetButIsLooping                         ( bool value );

        uint                    GetCamAnchorCamCustom                   () const;
        void                    SetCamAnchorCamCustom                   ( uint value );

        uint                    GetCamAnchorCamPath                     () const;
        void                    SetCamAnchorCamPath                     ( uint value );

        StringW                 GetCamAnchorNameCamCustom               () const;
        void                    SetCamAnchorNameCamCustom               ( StringW value );

        StringW                 GetCamAnchorNameCamPath                 () const;
        void                    SetCamAnchorNameCamPath                 ( StringW value );

        float                   GetCamFovCamCustom                      () const;
        void                    SetCamFovCamCustom                      ( float value );

        float                   GetCamFovCamPath                        () const;
        void                    SetCamFovCamPath                        ( float value );

        float                   GetCamFxScriptA                         () const;
        void                    SetCamFxScriptA                         ( float value );

        float                   GetCamFxScriptB                         () const;
        void                    SetCamFxScriptB                         ( float value );

        float                   GetCamFxScriptC                         () const;
        void                    SetCamFxScriptC                         ( float value );

        float                   GetCamFxShakeIntensity                  () const;
        void                    SetCamFxShakeIntensity                  ( float value );

        float                   GetCamFxShakeSpeed                      () const;
        void                    SetCamFxShakeSpeed                      ( float value );

        Id                      GetCamGameCur                           () const;
        void                    SetCamGameCur                           ( Id value );

        uint                    GetCamGameTarget                        () const;
        void                    SetCamGameTarget                        ( uint value );

        StringW                 GetCamGameTargetName                    () const;
        void                    SetCamGameTargetName                    ( StringW value );

        eCamInterpCamCustom     GetCamInterpCamCustom                   () const;
        void                    SetCamInterpCamCustom                   ( eCamInterpCamCustom value );

        bool                    GetCamIsAnchorVisibleCamCustom          () const;
        void                    SetCamIsAnchorVisibleCamCustom          ( bool value );

        bool                    GetCamIsAnchorVisibleCamPath            () const;
        void                    SetCamIsAnchorVisibleCamPath            ( bool value );

        float                   GetCamLeftTangentXCamCustom             () const;
        void                    SetCamLeftTangentXCamCustom             ( float value );

        float                   GetCamLeftTangentYCamCustom             () const;
        void                    SetCamLeftTangentYCamCustom             ( float value );

        float                   GetCamLeftTangentZCamCustom             () const;
        void                    SetCamLeftTangentZCamCustom             ( float value );

        float                   GetCamNearZCamCustom                    () const;
        void                    SetCamNearZCamCustom                    ( float value );

        float                   GetCamNearZCamPath                      () const;
        void                    SetCamNearZCamPath                      ( float value );

        float                   GetCamPitchCamCustom                    () const;
        void                    SetCamPitchCamCustom                    ( float value );

        float                   GetCamPitchCamPath                      () const;
        void                    SetCamPitchCamPath                      ( float value );

        float                   GetCamPosXCamCustom                     () const;
        void                    SetCamPosXCamCustom                     ( float value );

        float                   GetCamPosXCamPath                       () const;
        void                    SetCamPosXCamPath                       ( float value );

        float                   GetCamPosYCamCustom                     () const;
        void                    SetCamPosYCamCustom                     ( float value );

        float                   GetCamPosYCamPath                       () const;
        void                    SetCamPosYCamPath                       ( float value );

        float                   GetCamPosZCamCustom                     () const;
        void                    SetCamPosZCamCustom                     ( float value );

        float                   GetCamPosZCamPath                       () const;
        void                    SetCamPosZCamPath                       ( float value );

        float                   GetCamRightTangentXCamCustom            () const;
        void                    SetCamRightTangentXCamCustom            ( float value );

        float                   GetCamRightTangentYCamCustom            () const;
        void                    SetCamRightTangentYCamCustom            ( float value );

        float                   GetCamRightTangentZCamCustom            () const;
        void                    SetCamRightTangentZCamCustom            ( float value );

        float                   GetCamRollCamCustom                     () const;
        void                    SetCamRollCamCustom                     ( float value );

        float                   GetCamRollCamPath                       () const;
        void                    SetCamRollCamPath                       ( float value );

        uint                    GetCamTargetCamCustom                   () const;
        void                    SetCamTargetCamCustom                   ( uint value );

        uint                    GetCamTargetCamPath                     () const;
        void                    SetCamTargetCamPath                     ( uint value );

        StringW                 GetCamTargetNameCamCustom               () const;
        void                    SetCamTargetNameCamCustom               ( StringW value );

        StringW                 GetCamTargetNameCamPath                 () const;
        void                    SetCamTargetNameCamPath                 ( StringW value );

        float                   GetCamTargetPosXCamCustom               () const;
        void                    SetCamTargetPosXCamCustom               ( float value );

        float                   GetCamTargetPosXCamPath                 () const;
        void                    SetCamTargetPosXCamPath                 ( float value );

        float                   GetCamTargetPosYCamCustom               () const;
        void                    SetCamTargetPosYCamCustom               ( float value );

        float                   GetCamTargetPosYCamPath                 () const;
        void                    SetCamTargetPosYCamPath                 ( float value );

        float                   GetCamTargetPosZCamCustom               () const;
        void                    SetCamTargetPosZCamCustom               ( float value );

        float                   GetCamTargetPosZCamPath                 () const;
        void                    SetCamTargetPosZCamPath                 ( float value );

        bool                    GetCamUseAnchorOrientationCamCustom     () const;
        void                    SetCamUseAnchorOrientationCamCustom     ( bool value );

        bool                    GetCamUseAnchorOrientationCamPath       () const;
        void                    SetCamUseAnchorOrientationCamPath       ( bool value );

        float                   GetCamWeightCamPath                     () const;
        void                    SetCamWeightCamPath                     ( float value );

        float                   GetCamYawCamCustom                      () const;
        void                    SetCamYawCamCustom                      ( float value );

        float                   GetCamYawCamPath                        () const;
        void                    SetCamYawCamPath                        ( float value );

        bool                    GetClipKeepPlaying                      () const;
        void                    SetClipKeepPlaying                      ( bool value );

        eClipTriggerCond        GetClipTriggerCond                      () const;
        void                    SetClipTriggerCond                      ( eClipTriggerCond value );

        float                   GetClipTriggerCondValue                 () const;
        void                    SetClipTriggerCondValue                 ( float value );

        List < nodptr<class CGameCtnMediaClip> >& GetClips                                () const;
        void                    SetClips                                ( List < nodptr<class CGameCtnMediaClip> >& value );

        uint                    GetColoringBaseBaseIndex                () const;
        void                    SetColoringBaseBaseIndex                ( uint value );

        float                   GetColoringBaseHue                      () const;
        void                    SetColoringBaseHue                      ( float value );

        float                   GetColoringBaseIntensity                () const;
        void                    SetColoringBaseIntensity                ( float value );

        bool                    GetColoringCapturableEmblemBlink        () const;
        void                    SetColoringCapturableEmblemBlink        ( bool value );

        uint                    GetColoringCapturableEmblemIndex        () const;
        void                    SetColoringCapturableEmblemIndex        ( uint value );

        float                   GetColoringCapturableGauge              () const;
        void                    SetColoringCapturableGauge              ( float value );

        float                   GetColoringCapturableHue                () const;
        void                    SetColoringCapturableHue                ( float value );

        uint                    GetColoringCapturableIndex              () const;
        void                    SetColoringCapturableIndex              ( uint value );

        class CGameControlCameraFree* GetControlCamFree                       () const;
        void                    SetControlCamFree                       ( class CGameControlCameraFree* value );

        class CControlSimi2*    GetControlSimi2                         () const;
        void                    SetControlSimi2                         ( class CControlSimi2* value );

        class CMwNod*           GetDebugNod                             () const;
        void                    SetDebugNod                             ( class CMwNod* value );

        float                   GetDirtyLensIntensity                   () const;
        void                    SetDirtyLensIntensity                   ( float value );

        float                   GetDofFocusZ                            () const;
        void                    SetDofFocusZ                            ( float value );

        float                   GetDofLensSize                          () const;
        void                    SetDofLensSize                          ( float value );

        StringW                 GetDofTargetName                        () const;
        void                    SetDofTargetName                        ( StringW value );

        float                   GetDofTargetPosX                        () const;
        void                    SetDofTargetPosX                        ( float value );

        float                   GetDofTargetPosY                        () const;
        void                    SetDofTargetPosY                        ( float value );

        float                   GetDofTargetPosZ                        () const;
        void                    SetDofTargetPosZ                        ( float value );

        bool                    GetDrawCameraPaths                      () const;
        void                    SetDrawCameraPaths                      ( bool value );

        bool                    GetDrawGhostPaths                       () const;
        void                    SetDrawGhostPaths                       ( bool value );

        bool                    GetDynaCam_Helpers                      () const;
        void                    SetDynaCam_Helpers                      ( bool value );

        eEditionMode            GetEditionMode                          () const;
        void                    SetEditionMode                          ( eEditionMode value );

        float                   GetEntryPlaySpeed                       () const;
        void                    SetEntryPlaySpeed                       ( float value );

        float                   GetFxBloomFxIntensity                   () const;
        void                    SetFxBloomFxIntensity                   ( float value );

        float                   GetFxBloomSensitivity                   () const;
        void                    SetFxBloomSensitivity                   ( float value );

        float                   GetFxBlurDepthFocusZ                    () const;
        void                    SetFxBlurDepthFocusZ                    ( float value );

        bool                    GetFxBlurDepthForceZ                    () const;
        void                    SetFxBlurDepthForceZ                    ( bool value );

        float                   GetFxBlurDepthLensSize                  () const;
        void                    SetFxBlurDepthLensSize                  ( float value );

        StringW                 GetFxCameraMapFileName                  () const;
        void                    SetFxCameraMapFileName                  ( StringW value );

        float                   GetFxColorsBrightness                   () const;
        void                    SetFxColorsBrightness                   ( float value );

        float                   GetFxColorsBrightnessF                  () const;
        void                    SetFxColorsBrightnessF                  ( float value );

        float                   GetFxColorsContrast                     () const;
        void                    SetFxColorsContrast                     ( float value );

        float                   GetFxColorsContrastF                    () const;
        void                    SetFxColorsContrastF                    ( float value );

        float                   GetFxColorsFxIntensity                  () const;
        void                    SetFxColorsFxIntensity                  ( float value );

        float                   GetFxColorsHue                          () const;
        void                    SetFxColorsHue                          ( float value );

        float                   GetFxColorsHueF                         () const;
        void                    SetFxColorsHueF                         ( float value );

        float                   GetFxColorsIntensityF                   () const;
        void                    SetFxColorsIntensityF                   ( float value );

        float                   GetFxColorsInverseRGB                   () const;
        void                    SetFxColorsInverseRGB                   ( float value );

        float                   GetFxColorsInverseRGBF                  () const;
        void                    SetFxColorsInverseRGBF                  ( float value );

        float                   GetFxColorsModulateB                    () const;
        void                    SetFxColorsModulateB                    ( float value );

        float                   GetFxColorsModulateBF                   () const;
        void                    SetFxColorsModulateBF                   ( float value );

        float                   GetFxColorsModulateG                    () const;
        void                    SetFxColorsModulateG                    ( float value );

        float                   GetFxColorsModulateGF                   () const;
        void                    SetFxColorsModulateGF                   ( float value );

        float                   GetFxColorsModulateR                    () const;
        void                    SetFxColorsModulateR                    ( float value );

        float                   GetFxColorsModulateRF                   () const;
        void                    SetFxColorsModulateRF                   ( float value );

        float                   GetFxColorsSaturation                   () const;
        void                    SetFxColorsSaturation                   ( float value );

        float                   GetFxColorsSaturationF                  () const;
        void                    SetFxColorsSaturationF                  ( float value );

        eFxColorsZMode          GetFxColorsZMode                        () const;
        void                    SetFxColorsZMode                        ( eFxColorsZMode value );

        float                   GetFxColorsZ_Far                        () const;
        void                    SetFxColorsZ_Far                        ( float value );

        float                   GetFxColorsZ_Near                       () const;
        void                    SetFxColorsZ_Near                       ( float value );

        bool                    GetGhostForceTeamColor                  () const;
        void                    SetGhostForceTeamColor                  ( bool value );

        StringW                 GetGhostName                            () const;
        void                    SetGhostName                            ( StringW value );

        bool                    GetGhostNoDamage                        () const;
        void                    SetGhostNoDamage                        ( bool value );

        bool                    GetGhostNoLight                         () const;
        void                    SetGhostNoLight                         ( bool value );

        bool                    GetGhostPathTranslationC1               () const;
        void                    SetGhostPathTranslationC1               ( bool value );

        uint                    GetGhostRaceTime                        () const;
        void                    SetGhostRaceTime                        ( uint value );

        StringW                 GetGhostSkin                            () const;
        void                    SetGhostSkin                            ( StringW value );

        float                   GetGhostStartOffset                     () const;
        void                    SetGhostStartOffset                     ( float value );

        float                   GetGlobalSoundVolume                    () const;
        void                    SetGlobalSoundVolume                    ( float value );

        float                   GetImageDepth                           () const;
        void                    SetImageDepth                           ( float value );

        float                   GetImageOpacity                         () const;
        void                    SetImageOpacity                         ( float value );

        float                   GetImagePosX                            () const;
        void                    SetImagePosX                            ( float value );

        float                   GetImagePosY                            () const;
        void                    SetImagePosY                            ( float value );

        float                   GetImageRot                             () const;
        void                    SetImageRot                             ( float value );

        float                   GetImageScaleX                          () const;
        void                    SetImageScaleX                          ( float value );

        float                   GetImageScaleY                          () const;
        void                    SetImageScaleY                          ( float value );

        bool                    GetIsDisplayPlayerNames                 () const;
        void                    SetIsDisplayPlayerNames                 ( bool value );

        StringW                 GetManialinkURL                         () const;
        void                    SetManialinkURL                         ( StringW value );

        class CGameCtnMediaClipPlayer* GetMediaClipPlayer                      () const;
        void                    SetMediaClipPlayer                      ( class CGameCtnMediaClipPlayer* value );

        uint                    GetMediaTrackerGhostRefIndex            () const;
        void                    SetMediaTrackerGhostRefIndex            ( uint value );

        uint                    GetMediaTrackerGhosts                   () const;
        void                    SetMediaTrackerGhosts                   ( uint value );

        float                   GetMusicVolume                          () const;
        void                    SetMusicVolume                          ( float value );

        float                   GetOrientWeight                         () const;
        void                    SetOrientWeight                         ( float value );

        float                   GetOrientWeightDist                     () const;
        void                    SetOrientWeightDist                     ( float value );

        bool                    GetRenderHq                             () const;
        void                    SetRenderHq                             ( bool value );

        uint                    GetRenderHqCountSS                      () const;
        void                    SetRenderHqCountSS                      ( uint value );

        bool                    GetRenderHqSoftShadows                  () const;
        void                    SetRenderHqSoftShadows                  ( bool value );

        int                     GetReplayTime                           () const;
        void                    SetReplayTime                           ( int value );

        class CGameSafeFrame*   GetSafeFrame                            () const;
        void                    SetSafeFrame                            ( class CGameSafeFrame* value );

        class CGameCtnMediaBlockCameraEffectInertialTracking* GetSelBlockCamFxTracking                () const;
        void                    SetSelBlockCamFxTracking                ( class CGameCtnMediaBlockCameraEffectInertialTracking* value );

        class CGameCtnMediaTrack* GetSelTrack                             () const;
        void                    SetSelTrack                             ( class CGameCtnMediaTrack* value );

        class CPlugBitmap*      GetShoot_Bitmap                         () const;
        void                    SetShoot_Bitmap                         ( class CPlugBitmap* value );

        bool                    GetSoundIsMusic                         () const;
        void                    SetSoundIsMusic                         ( bool value );

        bool                    GetSoundLooping                         () const;
        void                    SetSoundLooping                         ( bool value );

        float                   GetSoundPan                             () const;
        void                    SetSoundPan                             ( float value );

        uint                    GetSoundPlayCount                       () const;
        void                    SetSoundPlayCount                       ( uint value );

        Vec3D                   GetSoundPos                             () const;
        void                    SetSoundPos                             ( Vec3D value );

        float                   GetSoundVolume                          () const;
        void                    SetSoundVolume                          ( float value );

        float                   GetStereoScreenDist                     () const;
        void                    SetStereoScreenDist                     ( float value );

        float                   GetStereoSepMax                         () const;
        void                    SetStereoSepMax                         ( float value );

        float                   GetStereoSepUpToMax                     () const;
        void                    SetStereoSepUpToMax                     ( float value );

        float                   GetTextDepth                            () const;
        void                    SetTextDepth                            ( float value );

        float                   GetTextOpacity                          () const;
        void                    SetTextOpacity                          ( float value );

        float                   GetTextPosX                             () const;
        void                    SetTextPosX                             ( float value );

        float                   GetTextPosY                             () const;
        void                    SetTextPosY                             ( float value );

        float                   GetTextRot                              () const;
        void                    SetTextRot                              ( float value );

        float                   GetTextScaleX                           () const;
        void                    SetTextScaleX                           ( float value );

        float                   GetTextScaleY                           () const;
        void                    SetTextScaleY                           ( float value );

        float                   GetTimeSpeedValue                       () const;
        void                    SetTimeSpeedValue                       ( float value );

        float                   GetTimeTangent                          () const;
        void                    SetTimeTangent                          ( float value );

        float                   GetTimeValue                            () const;
        void                    SetTimeValue                            ( float value );

        float                   GetToneMapExposure                      () const;
        void                    SetToneMapExposure                      ( float value );

        uint                    GetToneMapFilmCurve                     () const;
        void                    SetToneMapFilmCurve                     ( uint value );

        float                   GetToneMapLightTrailScale               () const;
        void                    SetToneMapLightTrailScale               ( float value );

        float                   GetToneMapMaxHDR                        () const;
        void                    SetToneMapMaxHDR                        ( float value );

        StringW                 GetTrackImage                           () const;
        void                    SetTrackImage                           ( StringW value );

        bool                    GetTrackKeepPlaying                     () const;
        void                    SetTrackKeepPlaying                     ( bool value );

        StringW                 GetTrackName                            () const;
        void                    SetTrackName                            ( StringW value );

        StringW                 GetTrackSound                           () const;
        void                    SetTrackSound                           ( StringW value );

        StringW                 GetTrackText                            () const;
        void                    SetTrackText                            ( StringW value );

        List < nodptr<class CGameCtnMediaTrack> >& GetTracks                               () const;
        void                    SetTracks                               ( List < nodptr<class CGameCtnMediaTrack> >& value );

        float                   GetTransFadeOpacity                     () const;
        void                    SetTransFadeOpacity                     ( float value );

        class CMwNod*           GetTriggerOutlineBox                    () const;
        void                    SetTriggerOutlineBox                    ( class CMwNod* value );

        void                    ActionShootScreen                       ();
        void                    BlockCutAfter                           ();
        void                    BlockCutBefore                          ();
        void                    BlockHelpersSwitch                      ();
        void                    BlockInsert                             ();
        void                    BlockRemove                             ();
        void                    BlockRemove_Ok                          ();
        void                    But3dPreview                            ();
        void                    ButCamAnchorNext                        ();
        void                    ButCamAnchorPrev                        ();
        void                    ButCamCustomAdvancedParams              ();
        void                    ButCamGameNext                          ();
        void                    ButCamGamePrev                          ();
        void                    ButCamGameTargetNext                    ();
        void                    ButCamGameTargetPrev                    ();
        void                    ButCamPathAdvancedParams                ();
        void                    ButCamTargetNext                        ();
        void                    ButCamTargetPrev                        ();
        void                    ButChooseImage                          ();
        void                    ButChooseSound                          ();
        void                    ButClipCam                              ();
        void                    ButComputeShadows                       ();
        void                    ButDofTargetNext                        ();
        void                    ButDofTargetPrev                        ();
        void                    ButExit                                 ();
        void                    ButExportClip                           ();
        void                    ButExportClip_OnOk                      ();
        void                    ButFrameKeyAdvanced                     ();
        void                    ButFreeCam                              ();
        void                    ButFxCameraMapReloadFile                ();
        void                    ButFxCameraMapScreenShot                ();
        void                    ButGhostSkinSelect                      ();
        void                    ButImportClip                           ();
        void                    ButImportClip_OnOk                      ();
        void                    ButImportGhosts                         ();
        void                    ButImportGhosts_OnOk                    ();
        void                    ButNextFrame                            ();
        void                    ButPrevFrame                            ();
        void                    ButPreview                              ();
        void                    ButPreviewClipGroup                     ();
        void                    ButRecordGhost                          ();
        void                    ButResetDir                             ();
        void                    ButResetRoll                            ();
        void                    ButSave                                 ();
        void                    ButShootScreen                          ();
        void                    ButShootVideo                           ();
        void                    ButShowFullTimeLine                     ();
        void                    ButSmoothSpeed                          ();
        void                    ButTriggerMode                          ();
        void                    ButtonEditCameraEffectScript            ();
        void                    ClipGroupPreviewStop                    ();
        void                    ClipInsert                              ();
        void                    ClipRemove                              ();
        void                    ClipRemove_Ok                           ();
        void                    ClipRename                              ();
        void                    CursorDown                              ();
        void                    CursorRotate                            ();
        void                    CursorSetHeightFromPickedPoint          ();
        void                    CursorUp                                ();
        void                    EditClipConfigScript                    ();
        void                    FullScreenSwitch                        ();
        void                    IncTimeAndInsertKey                     ();
        void                    KeyInsert                               ();
        void                    KeyRemove                               ();
        void                    KeyRemoveAll                            ();
        void                    MoveFaster                              ();
        void                    MoveSlower                              ();
        void                    NextKey                                 ();
        void                    PrevKey                                 ();
        void                    RecordGhostModeStopWait                 ();
        void                    Redo                                    ();
        void                    SafeFrameCreate                         ();
        void                    SafeFrameDestroy                        ();
        void                    SafeFrameSwitch                         ();
        void                    SafeFrameVisibleSwitch                  ();
        void                    SetAsGlobalClip                         ();
        void                    TimeFirstFrame                          ();
        void                    TimeLastFrame                           ();
        void                    TimeNormalForward                       ();
        void                    TimePlay                                ();
        void                    TimePlayFromStart                       ();
        void                    TimeSlowForward                         ();
        void                    TimeStop                                ();
        void                    TrackDuplicate                          ();
        void                    TrackInsert                             ();
        void                    TrackRemove                             ();
        void                    TrackRemove_Ok                          ();
        void                    TrackRename                             ();
        void                    TriggerModeUpdateRef                    ();
        void                    TriggerModeValidate                     ();
        void                    Undo                                    ();
