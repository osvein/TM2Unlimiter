        enum { CLASSID = 0x2C005000 };

        static CQmPlayground*   CreateInstance ();

        enum eHelpersMapDrawParamsm_Mode
        {
            HELPERSMAPDRAWPARAMSM_MODE_LINE,
            HELPERSMAPDRAWPARAMSM_MODE_STEPS,
            HELPERSMAPDRAWPARAMSM_MODE_ZONE,
            HELPERSMAPDRAWPARAMSM_MODE_ARROW,
            HELPERSMAPDRAWPARAMSM_MODE_TARGET
        };
        static std::wstring     HelpersMapDrawParamsm_ModeToString      ( eHelpersMapDrawParamsm_Mode value );
        static eHelpersMapDrawParamsm_Mode ParseHelpersMapDrawParamsm_Mode         ( const std::wstring& wstrName );

        enum eHelpersMouseDrawParamsm_Mode
        {
            HELPERSMOUSEDRAWPARAMSM_MODE_LINE,
            HELPERSMOUSEDRAWPARAMSM_MODE_STEPS,
            HELPERSMOUSEDRAWPARAMSM_MODE_ZONE,
            HELPERSMOUSEDRAWPARAMSM_MODE_ARROW,
            HELPERSMOUSEDRAWPARAMSM_MODE_TARGET
        };
        static std::wstring     HelpersMouseDrawParamsm_ModeToString    ( eHelpersMouseDrawParamsm_Mode value );
        static eHelpersMouseDrawParamsm_Mode ParseHelpersMouseDrawParamsm_Mode       ( const std::wstring& wstrName );

        enum eHelpersMoveDrawParamsm_Mode
        {
            HELPERSMOVEDRAWPARAMSM_MODE_LINE,
            HELPERSMOVEDRAWPARAMSM_MODE_STEPS,
            HELPERSMOVEDRAWPARAMSM_MODE_ZONE,
            HELPERSMOVEDRAWPARAMSM_MODE_ARROW,
            HELPERSMOVEDRAWPARAMSM_MODE_TARGET
        };
        static std::wstring     HelpersMoveDrawParamsm_ModeToString     ( eHelpersMoveDrawParamsm_Mode value );
        static eHelpersMoveDrawParamsm_Mode ParseHelpersMoveDrawParamsm_Mode        ( const std::wstring& wstrName );

        enum eHelpersSightDrawParamsm_Mode
        {
            HELPERSSIGHTDRAWPARAMSM_MODE_LINE,
            HELPERSSIGHTDRAWPARAMSM_MODE_STEPS,
            HELPERSSIGHTDRAWPARAMSM_MODE_ZONE,
            HELPERSSIGHTDRAWPARAMSM_MODE_ARROW,
            HELPERSSIGHTDRAWPARAMSM_MODE_TARGET
        };
        static std::wstring     HelpersSightDrawParamsm_ModeToString    ( eHelpersSightDrawParamsm_Mode value );
        static eHelpersSightDrawParamsm_Mode ParseHelpersSightDrawParamsm_Mode       ( const std::wstring& wstrName );

        enum eHelpersTargetDrawParamsm_Mode
        {
            HELPERSTARGETDRAWPARAMSM_MODE_LINE,
            HELPERSTARGETDRAWPARAMSM_MODE_STEPS,
            HELPERSTARGETDRAWPARAMSM_MODE_ZONE,
            HELPERSTARGETDRAWPARAMSM_MODE_ARROW,
            HELPERSTARGETDRAWPARAMSM_MODE_TARGET
        };
        static std::wstring     HelpersTargetDrawParamsm_ModeToString   ( eHelpersTargetDrawParamsm_Mode value );
        static eHelpersTargetDrawParamsm_Mode ParseHelpersTargetDrawParamsm_Mode      ( const std::wstring& wstrName );

        List < StringA >&       GetActionIds                            () const;
        void                    SetActionIds                            ( List < StringA >& value );

        uint                    GetActorMoveDuration                    () const;
        void                    SetActorMoveDuration                    ( uint value );

        uint                    GetActorMoveDurationDelta               () const;
        void                    SetActorMoveDurationDelta               ( uint value );

        class CQmActorsManager* GetActorsManager                        () const;
        void                    SetActorsManager                        ( class CQmActorsManager* value );

        bool                    GetAddDeltaToModifiedMove               () const;
        void                    SetAddDeltaToModifiedMove               ( bool value );

        bool                    GetAddDurationToModifiedMove            () const;
        void                    SetAddDurationToModifiedMove            ( bool value );

        class CQmBoard*         GetBoard                                () const;
        void                    SetBoard                                ( class CQmBoard* value );

        float                   GetCameraBlendingRatioSpeedDecrThresholdTime() const;
        void                    SetCameraBlendingRatioSpeedDecrThresholdTime( float value );

        float                   GetCameraBlendingRatioSpeedDecrTime     () const;
        void                    SetCameraBlendingRatioSpeedDecrTime     ( float value );

        float                   GetCameraBlendingRatioSpeedEndTime      () const;
        void                    SetCameraBlendingRatioSpeedEndTime      ( float value );

        float                   GetCameraBlendingRatioSpeedIncrTime     () const;
        void                    SetCameraBlendingRatioSpeedIncrTime     ( float value );

        float                   GetCameraBlendingRatioSpeedMax          () const;
        void                    SetCameraBlendingRatioSpeedMax          ( float value );

        float                   GetCameraBlendingRatioSpeedMaxBase      () const;
        void                    SetCameraBlendingRatioSpeedMaxBase      ( float value );

        Matrix43                GetCameraFinalTargetLocation            () const;
        void                    SetCameraFinalTargetLocation            ( Matrix43 value );

        float                   GetCameraModifiedLatitudeZoomFactor     () const;
        void                    SetCameraModifiedLatitudeZoomFactor     ( float value );

        uint                    GetCameraStartMovingTimeThreshold       () const;
        void                    SetCameraStartMovingTimeThreshold       ( uint value );

        Matrix43                GetCameraStartTargetLocation            () const;
        void                    SetCameraStartTargetLocation            ( Matrix43 value );

        uint                    GetCameraStartTime                      () const;
        void                    SetCameraStartTime                      ( uint value );

        float                   GetCameraTargetDistance                 () const;
        void                    SetCameraTargetDistance                 ( float value );

        bool                    GetCanUseMouseToMove                    () const;
        void                    SetCanUseMouseToMove                    ( bool value );

        class CGameCtnChallenge* GetChallenge                            () const;
        void                    SetChallenge                            ( class CGameCtnChallenge* value );

        class CQmPlaygroundCursor* GetCursor                               () const;
        void                    SetCursor                               ( class CQmPlaygroundCursor* value );

        bool                    GetDoNotProcessVisualEvent              () const;
        void                    SetDoNotProcessVisualEvent              ( bool value );

        bool                    GetDoNotUpdateCameraTarget              () const;
        void                    SetDoNotUpdateCameraTarget              ( bool value );

        Vec3D                   GetFollowingCamera1OffsetSrc            () const;
        void                    SetFollowingCamera1OffsetSrc            ( Vec3D value );

        Vec3D                   GetFollowingCamera1OffsetTarget         () const;
        void                    SetFollowingCamera1OffsetTarget         ( Vec3D value );

        Vec3D                   GetFollowingCamera2OffsetSrc            () const;
        void                    SetFollowingCamera2OffsetSrc            ( Vec3D value );

        Vec3D                   GetFollowingCamera2OffsetTarget         () const;
        void                    SetFollowingCamera2OffsetTarget         ( Vec3D value );

        Vec3D                   GetFollowingCamera3OffsetSrc            () const;
        void                    SetFollowingCamera3OffsetSrc            ( Vec3D value );

        Vec3D                   GetFollowingCamera3OffsetTarget         () const;
        void                    SetFollowingCamera3OffsetTarget         ( Vec3D value );

        bool                    GetGamePaused                           () const;
        void                    SetGamePaused                           ( bool value );

        class CSceneMobil*      GetHelpersMap                           () const;
        void                    SetHelpersMap                           ( class CSceneMobil* value );

        color                   GetHelpersMapDrawParamsm_BackEndColor   () const;
        void                    SetHelpersMapDrawParamsm_BackEndColor   ( color value );

        float                   GetHelpersMapDrawParamsm_BackEndLineHalfSize() const;
        void                    SetHelpersMapDrawParamsm_BackEndLineHalfSize( float value );

        float                   GetHelpersMapDrawParamsm_DistMaxSqrBetweenSquares() const;
        void                    SetHelpersMapDrawParamsm_DistMaxSqrBetweenSquares( float value );

        color                   GetHelpersMapDrawParamsm_EndColor       () const;
        void                    SetHelpersMapDrawParamsm_EndColor       ( color value );

        float                   GetHelpersMapDrawParamsm_EndLineHalfSize() const;
        void                    SetHelpersMapDrawParamsm_EndLineHalfSize( float value );

        eHelpersMapDrawParamsm_Mode GetHelpersMapDrawParamsm_Mode           () const;
        void                    SetHelpersMapDrawParamsm_Mode           ( eHelpersMapDrawParamsm_Mode value );

        color                   GetHelpersMapDrawParamsm_PathColor      () const;
        void                    SetHelpersMapDrawParamsm_PathColor      ( color value );

        float                   GetHelpersMapDrawParamsm_PathLineHalfSize() const;
        void                    SetHelpersMapDrawParamsm_PathLineHalfSize( float value );

        float                   GetHelpersMapDrawParamsm_SquareHeightOffset() const;
        void                    SetHelpersMapDrawParamsm_SquareHeightOffset( float value );

        float                   GetHelpersMapDrawParamsm_SquareSize     () const;
        void                    SetHelpersMapDrawParamsm_SquareSize     ( float value );

        color                   GetHelpersMapDrawParamsm_StartColor     () const;
        void                    SetHelpersMapDrawParamsm_StartColor     ( color value );

        float                   GetHelpersMapDrawParamsm_StartLineHalfSize() const;
        void                    SetHelpersMapDrawParamsm_StartLineHalfSize( float value );

        class CSceneMobil*      GetHelpersMouse                         () const;
        void                    SetHelpersMouse                         ( class CSceneMobil* value );

        color                   GetHelpersMouseDrawParamsm_BackEndColor () const;
        void                    SetHelpersMouseDrawParamsm_BackEndColor ( color value );

        float                   GetHelpersMouseDrawParamsm_BackEndLineHalfSize() const;
        void                    SetHelpersMouseDrawParamsm_BackEndLineHalfSize( float value );

        float                   GetHelpersMouseDrawParamsm_DistMaxSqrBetweenSquares() const;
        void                    SetHelpersMouseDrawParamsm_DistMaxSqrBetweenSquares( float value );

        color                   GetHelpersMouseDrawParamsm_EndColor     () const;
        void                    SetHelpersMouseDrawParamsm_EndColor     ( color value );

        float                   GetHelpersMouseDrawParamsm_EndLineHalfSize() const;
        void                    SetHelpersMouseDrawParamsm_EndLineHalfSize( float value );

        eHelpersMouseDrawParamsm_Mode GetHelpersMouseDrawParamsm_Mode         () const;
        void                    SetHelpersMouseDrawParamsm_Mode         ( eHelpersMouseDrawParamsm_Mode value );

        color                   GetHelpersMouseDrawParamsm_PathColor    () const;
        void                    SetHelpersMouseDrawParamsm_PathColor    ( color value );

        float                   GetHelpersMouseDrawParamsm_PathLineHalfSize() const;
        void                    SetHelpersMouseDrawParamsm_PathLineHalfSize( float value );

        float                   GetHelpersMouseDrawParamsm_SquareHeightOffset() const;
        void                    SetHelpersMouseDrawParamsm_SquareHeightOffset( float value );

        float                   GetHelpersMouseDrawParamsm_SquareSize   () const;
        void                    SetHelpersMouseDrawParamsm_SquareSize   ( float value );

        color                   GetHelpersMouseDrawParamsm_StartColor   () const;
        void                    SetHelpersMouseDrawParamsm_StartColor   ( color value );

        float                   GetHelpersMouseDrawParamsm_StartLineHalfSize() const;
        void                    SetHelpersMouseDrawParamsm_StartLineHalfSize( float value );

        class CSceneMobil*      GetHelpersMove                          () const;
        void                    SetHelpersMove                          ( class CSceneMobil* value );

        color                   GetHelpersMoveDrawParamsm_BackEndColor  () const;
        void                    SetHelpersMoveDrawParamsm_BackEndColor  ( color value );

        float                   GetHelpersMoveDrawParamsm_BackEndLineHalfSize() const;
        void                    SetHelpersMoveDrawParamsm_BackEndLineHalfSize( float value );

        float                   GetHelpersMoveDrawParamsm_DistMaxSqrBetweenSquares() const;
        void                    SetHelpersMoveDrawParamsm_DistMaxSqrBetweenSquares( float value );

        color                   GetHelpersMoveDrawParamsm_EndColor      () const;
        void                    SetHelpersMoveDrawParamsm_EndColor      ( color value );

        float                   GetHelpersMoveDrawParamsm_EndLineHalfSize() const;
        void                    SetHelpersMoveDrawParamsm_EndLineHalfSize( float value );

        eHelpersMoveDrawParamsm_Mode GetHelpersMoveDrawParamsm_Mode          () const;
        void                    SetHelpersMoveDrawParamsm_Mode          ( eHelpersMoveDrawParamsm_Mode value );

        color                   GetHelpersMoveDrawParamsm_PathColor     () const;
        void                    SetHelpersMoveDrawParamsm_PathColor     ( color value );

        float                   GetHelpersMoveDrawParamsm_PathLineHalfSize() const;
        void                    SetHelpersMoveDrawParamsm_PathLineHalfSize( float value );

        float                   GetHelpersMoveDrawParamsm_SquareHeightOffset() const;
        void                    SetHelpersMoveDrawParamsm_SquareHeightOffset( float value );

        float                   GetHelpersMoveDrawParamsm_SquareSize    () const;
        void                    SetHelpersMoveDrawParamsm_SquareSize    ( float value );

        color                   GetHelpersMoveDrawParamsm_StartColor    () const;
        void                    SetHelpersMoveDrawParamsm_StartColor    ( color value );

        float                   GetHelpersMoveDrawParamsm_StartLineHalfSize() const;
        void                    SetHelpersMoveDrawParamsm_StartLineHalfSize( float value );

        class CSceneMobil*      GetHelpersSight                         () const;
        void                    SetHelpersSight                         ( class CSceneMobil* value );

        color                   GetHelpersSightDrawParamsm_BackEndColor () const;
        void                    SetHelpersSightDrawParamsm_BackEndColor ( color value );

        float                   GetHelpersSightDrawParamsm_BackEndLineHalfSize() const;
        void                    SetHelpersSightDrawParamsm_BackEndLineHalfSize( float value );

        float                   GetHelpersSightDrawParamsm_DistMaxSqrBetweenSquares() const;
        void                    SetHelpersSightDrawParamsm_DistMaxSqrBetweenSquares( float value );

        color                   GetHelpersSightDrawParamsm_EndColor     () const;
        void                    SetHelpersSightDrawParamsm_EndColor     ( color value );

        float                   GetHelpersSightDrawParamsm_EndLineHalfSize() const;
        void                    SetHelpersSightDrawParamsm_EndLineHalfSize( float value );

        eHelpersSightDrawParamsm_Mode GetHelpersSightDrawParamsm_Mode         () const;
        void                    SetHelpersSightDrawParamsm_Mode         ( eHelpersSightDrawParamsm_Mode value );

        color                   GetHelpersSightDrawParamsm_PathColor    () const;
        void                    SetHelpersSightDrawParamsm_PathColor    ( color value );

        float                   GetHelpersSightDrawParamsm_PathLineHalfSize() const;
        void                    SetHelpersSightDrawParamsm_PathLineHalfSize( float value );

        float                   GetHelpersSightDrawParamsm_SquareHeightOffset() const;
        void                    SetHelpersSightDrawParamsm_SquareHeightOffset( float value );

        float                   GetHelpersSightDrawParamsm_SquareSize   () const;
        void                    SetHelpersSightDrawParamsm_SquareSize   ( float value );

        color                   GetHelpersSightDrawParamsm_StartColor   () const;
        void                    SetHelpersSightDrawParamsm_StartColor   ( color value );

        float                   GetHelpersSightDrawParamsm_StartLineHalfSize() const;
        void                    SetHelpersSightDrawParamsm_StartLineHalfSize( float value );

        class CSceneMobil*      GetHelpersTarget                        () const;
        void                    SetHelpersTarget                        ( class CSceneMobil* value );

        color                   GetHelpersTargetDrawParamsm_BackEndColor() const;
        void                    SetHelpersTargetDrawParamsm_BackEndColor( color value );

        float                   GetHelpersTargetDrawParamsm_BackEndLineHalfSize() const;
        void                    SetHelpersTargetDrawParamsm_BackEndLineHalfSize( float value );

        float                   GetHelpersTargetDrawParamsm_DistMaxSqrBetweenSquares() const;
        void                    SetHelpersTargetDrawParamsm_DistMaxSqrBetweenSquares( float value );

        color                   GetHelpersTargetDrawParamsm_EndColor    () const;
        void                    SetHelpersTargetDrawParamsm_EndColor    ( color value );

        float                   GetHelpersTargetDrawParamsm_EndLineHalfSize() const;
        void                    SetHelpersTargetDrawParamsm_EndLineHalfSize( float value );

        eHelpersTargetDrawParamsm_Mode GetHelpersTargetDrawParamsm_Mode        () const;
        void                    SetHelpersTargetDrawParamsm_Mode        ( eHelpersTargetDrawParamsm_Mode value );

        color                   GetHelpersTargetDrawParamsm_PathColor   () const;
        void                    SetHelpersTargetDrawParamsm_PathColor   ( color value );

        float                   GetHelpersTargetDrawParamsm_PathLineHalfSize() const;
        void                    SetHelpersTargetDrawParamsm_PathLineHalfSize( float value );

        float                   GetHelpersTargetDrawParamsm_SquareHeightOffset() const;
        void                    SetHelpersTargetDrawParamsm_SquareHeightOffset( float value );

        float                   GetHelpersTargetDrawParamsm_SquareSize  () const;
        void                    SetHelpersTargetDrawParamsm_SquareSize  ( float value );

        color                   GetHelpersTargetDrawParamsm_StartColor  () const;
        void                    SetHelpersTargetDrawParamsm_StartColor  ( color value );

        float                   GetHelpersTargetDrawParamsm_StartLineHalfSize() const;
        void                    SetHelpersTargetDrawParamsm_StartLineHalfSize( float value );

        bool                    GetInMap                                () const;
        void                    SetInMap                                ( bool value );

        float                   GetMapBoxBorderSize                     () const;
        void                    SetMapBoxBorderSize                     ( float value );

        float                   GetMapBoxForcedCenterY                  () const;
        void                    SetMapBoxForcedCenterY                  ( float value );

        float                   GetMapBoxForcedHalfDiagY                () const;
        void                    SetMapBoxForcedHalfDiagY                ( float value );

        float                   GetMapBoxForcedOffsetZ                  () const;
        void                    SetMapBoxForcedOffsetZ                  ( float value );

        class CGameControlCameraFree* GetMapCamera                            () const;
        void                    SetMapCamera                            ( class CGameControlCameraFree* value );

        uint                    GetMapCameraMinSquareSizeOnScreen       () const;
        void                    SetMapCameraMinSquareSizeOnScreen       ( uint value );

        uint                    GetMapCameraMoveDuration                () const;
        void                    SetMapCameraMoveDuration                ( uint value );

        float                   GetMapCurrentScreenRatio                () const;
        void                    SetMapCurrentScreenRatio                ( float value );

        Vec2D                   GetMapCurrentScreenResolution           () const;
        void                    SetMapCurrentScreenResolution           ( Vec2D value );

        float                   GetMapScrollSpeed                       () const;
        void                    SetMapScrollSpeed                       ( float value );

        float                   GetMapScrollThreshold                   () const;
        void                    SetMapScrollThreshold                   ( float value );

        Vec3D                   GetMapWorldLimitsMax                    () const;
        void                    SetMapWorldLimitsMax                    ( Vec3D value );

        Vec3D                   GetMapWorldLimitsMin                    () const;
        void                    SetMapWorldLimitsMin                    ( Vec3D value );

        class CGameCtnGhost*    GetPlayerBestGhost                      () const;
        void                    SetPlayerBestGhost                      ( class CGameCtnGhost* value );

        List < uint >&          GetRepeatDelays                         () const;
        void                    SetRepeatDelays                         ( List < uint >& value );

        class CQmPlaygroundRulesManager* GetRulesManager                         () const;
        void                    SetRulesManager                         ( class CQmPlaygroundRulesManager* value );

        bool                    GetShowHelpersMove                      () const;
        void                    SetShowHelpersMove                      ( bool value );

        bool                    GetShowHelpersSight                     () const;
        void                    SetShowHelpersSight                     ( bool value );

        bool                    GetShowHelpersTarget                    () const;
        void                    SetShowHelpersTarget                    ( bool value );

        bool                    GetShowPlaygroundCursor                 () const;
        void                    SetShowPlaygroundCursor                 ( bool value );

        float                   GetSmoothedFollowingCameraFightingSwithDist() const;
        void                    SetSmoothedFollowingCameraFightingSwithDist( float value );

        float                   GetSmoothedFollowingCameraMaxPitch      () const;
        void                    SetSmoothedFollowingCameraMaxPitch      ( float value );

        float                   GetSmoothedFollowingCameraMinPitch      () const;
        void                    SetSmoothedFollowingCameraMinPitch      ( float value );

        float                   GetSmoothedFollowingCameraOffsetActorX  () const;
        void                    SetSmoothedFollowingCameraOffsetActorX  ( float value );

        float                   GetSmoothedFollowingCameraOffsetActorY  () const;
        void                    SetSmoothedFollowingCameraOffsetActorY  ( float value );

        float                   GetSmoothedFollowingCameraOffsetActorZ  () const;
        void                    SetSmoothedFollowingCameraOffsetActorZ  ( float value );

        float                   GetSmoothedFollowingCameraOffsetEye     () const;
        void                    SetSmoothedFollowingCameraOffsetEye     ( float value );

        float                   GetSmoothedFollowingCameraOffsetTargetX () const;
        void                    SetSmoothedFollowingCameraOffsetTargetX ( float value );

        float                   GetSmoothedFollowingCameraOffsetTargetY () const;
        void                    SetSmoothedFollowingCameraOffsetTargetY ( float value );

        float                   GetSmoothedFollowingCameraOffsetTargetZ () const;
        void                    SetSmoothedFollowingCameraOffsetTargetZ ( float value );

        float                   GetSmoothedFollowingCameraSmoothSpeedBase() const;
        void                    SetSmoothedFollowingCameraSmoothSpeedBase( float value );

        float                   GetSmoothedFollowingCameraSmoothSpeedMax() const;
        void                    SetSmoothedFollowingCameraSmoothSpeedMax( float value );

        uint                    GetSmoothedFollowingCameraStartMovingTimeThreshold() const;
        void                    SetSmoothedFollowingCameraStartMovingTimeThreshold( uint value );

        class CQmBoardSquare*   GetSmoothedFollowingCameraTargetSquare  () const;
        void                    SetSmoothedFollowingCameraTargetSquare  ( class CQmBoardSquare* value );

        uint                    GetSmoothedFollowingCameraTargetSquareDist() const;
        void                    SetSmoothedFollowingCameraTargetSquareDist( uint value );

        List < uint >&          GetStartDelays                          () const;
        void                    SetStartDelays                          ( List < uint >& value );

