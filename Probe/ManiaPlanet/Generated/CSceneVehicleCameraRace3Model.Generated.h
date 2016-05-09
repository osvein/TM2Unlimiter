        enum { CLASSID = 0x0A01F000 };

        static CSceneVehicleCameraRace3Model* CreateInstance ();

        float                   GetConstantFlyingLookDownFactor         () const;
        void                    SetConstantFlyingLookDownFactor         ( float value );

        float                   GetDefaultFov                           () const;
        void                    SetDefaultFov                           ( float value );

        float                   GetEventBurningLookAtFactorDelta        () const;
        void                    SetEventBurningLookAtFactorDelta        ( float value );

        uint                    GetEventBurningLookAtFactorTimeDown     () const;
        void                    SetEventBurningLookAtFactorTimeDown     ( uint value );

        uint                    GetEventBurningLookAtFactorTimeUp       () const;
        void                    SetEventBurningLookAtFactorTimeUp       ( uint value );

        float                   GetEventBurningRadiusDelta              () const;
        void                    SetEventBurningRadiusDelta              ( float value );

        uint                    GetEventBurningRadiusTimeDown           () const;
        void                    SetEventBurningRadiusTimeDown           ( uint value );

        uint                    GetEventBurningRadiusTimeUp             () const;
        void                    SetEventBurningRadiusTimeUp             ( uint value );

        float                   GetEventChangeGearFarDelta              () const;
        void                    SetEventChangeGearFarDelta              ( float value );

        uint                    GetEventChangeGearFarTimeDown           () const;
        void                    SetEventChangeGearFarTimeDown           ( uint value );

        uint                    GetEventChangeGearFarTimeUp             () const;
        void                    SetEventChangeGearFarTimeUp             ( uint value );

        float                   GetEventTurboFarDelta                   () const;
        void                    SetEventTurboFarDelta                   ( float value );

        uint                    GetEventTurboFarTimeDown                () const;
        void                    SetEventTurboFarTimeDown                ( uint value );

        uint                    GetEventTurboFarTimeUp                  () const;
        void                    SetEventTurboFarTimeUp                  ( uint value );

        float                   GetEventTurboFovDelta                   () const;
        void                    SetEventTurboFovDelta                   ( float value );

        uint                    GetEventTurboFovTimeDown                () const;
        void                    SetEventTurboFovTimeDown                ( uint value );

        uint                    GetEventTurboFovTimeUp                  () const;
        void                    SetEventTurboFovTimeUp                  ( uint value );

        float                   GetFar                                  () const;
        void                    SetFar                                  ( float value );

        uint                    GetFlyDurationBeforeFlyingBehavior      () const;
        void                    SetFlyDurationBeforeFlyingBehavior      ( uint value );

        class CFuncKeysReal*    GetFlyingLookDownFactorFromSpeedRatio   () const;
        void                    SetFlyingLookDownFactorFromSpeedRatio   ( class CFuncKeysReal* value );

        float                   GetFlyingLookDownFactorKa               () const;
        void                    SetFlyingLookDownFactorKa               ( float value );

        float                   GetFlyingLookDownFactorKi               () const;
        void                    SetFlyingLookDownFactorKi               ( float value );

        bool                    GetFollowWheelsPlane                    () const;
        void                    SetFollowWheelsPlane                    ( bool value );

        bool                    GetForceUpV010                          () const;
        void                    SetForceUpV010                          ( bool value );

        float                   GetInputBrakeFarDelta                   () const;
        void                    SetInputBrakeFarDelta                   ( float value );

        uint                    GetInputBrakeFarTimeDown                () const;
        void                    SetInputBrakeFarTimeDown                ( uint value );

        uint                    GetInputBrakeFarTimeUp                  () const;
        void                    SetInputBrakeFarTimeUp                  ( uint value );

        float                   GetInputGasFarDelta                     () const;
        void                    SetInputGasFarDelta                     ( float value );

        uint                    GetInputGasFarTimeDown                  () const;
        void                    SetInputGasFarTimeDown                  ( uint value );

        uint                    GetInputGasFarTimeUp                    () const;
        void                    SetInputGasFarTimeUp                    ( uint value );

        uint                    GetInputNoSteerDurationBeforeReset      () const;
        void                    SetInputNoSteerDurationBeforeReset      ( uint value );

        uint                    GetInputSteerDurationBeforeBurnoutShowView() const;
        void                    SetInputSteerDurationBeforeBurnoutShowView( uint value );

        float                   GetInputSteerFarDelta                   () const;
        void                    SetInputSteerFarDelta                   ( float value );

        uint                    GetInputSteerFarTimeDown                () const;
        void                    SetInputSteerFarTimeDown                ( uint value );

        uint                    GetInputSteerFarTimeUp                  () const;
        void                    SetInputSteerFarTimeUp                  ( uint value );

        float                   GetLookAtFactor                         () const;
        void                    SetLookAtFactor                         ( float value );

        class CFuncKeysReal*    GetLookAtFactorFromUpSpeedRatio         () const;
        void                    SetLookAtFactorFromUpSpeedRatio         ( class CFuncKeysReal* value );

        float                   GetMinSpeed                             () const;
        void                    SetMinSpeed                             ( float value );

        float                   GetMinSpeed2                            () const;
        void                    SetMinSpeed2                            ( float value );

        float                   GetRadiusDamperKa                       () const;
        void                    SetRadiusDamperKa                       ( float value );

        float                   GetRadiusDamperKi                       () const;
        void                    SetRadiusDamperKi                       ( float value );

        float                   GetSlerpSpeed                           () const;
        void                    SetSlerpSpeed                           ( float value );

        float                   GetSlerpSpeedCamUp                      () const;
        void                    SetSlerpSpeedCamUp                      ( float value );

        float                   GetSlerpSpeedCamUpDelta                 () const;
        void                    SetSlerpSpeedCamUpDelta                 ( float value );

        float                   GetSlerpSpeedCamUpFlyingBehavior        () const;
        void                    SetSlerpSpeedCamUpFlyingBehavior        ( float value );

        uint                    GetSlerpSpeedCamUpTimeDown              () const;
        void                    SetSlerpSpeedCamUpTimeDown              ( uint value );

        uint                    GetSlerpSpeedCamUpTimeUp                () const;
        void                    SetSlerpSpeedCamUpTimeUp                ( uint value );

        float                   GetSlerpSpeedDelta                      () const;
        void                    SetSlerpSpeedDelta                      ( float value );

        float                   GetSlerpSpeedFlyingBehavior             () const;
        void                    SetSlerpSpeedFlyingBehavior             ( float value );

        class CFuncKeysReal*    GetSlerpSpeedModulationFromSpeed        () const;
        void                    SetSlerpSpeedModulationFromSpeed        ( class CFuncKeysReal* value );

        uint                    GetSlerpSpeedTimeDown                   () const;
        void                    SetSlerpSpeedTimeDown                   ( uint value );

        uint                    GetSlerpSpeedTimeUp                     () const;
        void                    SetSlerpSpeedTimeUp                     ( uint value );

        float                   GetSlerpTargetCamUpDelta                () const;
        void                    SetSlerpTargetCamUpDelta                ( float value );

        uint                    GetSlerpTargetCamUpTimeDown             () const;
        void                    SetSlerpTargetCamUpTimeDown             ( uint value );

        uint                    GetSlerpTargetCamUpTimeUp               () const;
        void                    SetSlerpTargetCamUpTimeUp               ( uint value );

        float                   GetSlerpTargetPosDelta                  () const;
        void                    SetSlerpTargetPosDelta                  ( float value );

        float                   GetSlerpTargetPosFlyingDelta            () const;
        void                    SetSlerpTargetPosFlyingDelta            ( float value );

        uint                    GetSlerpTargetPosFlyingTimeDown         () const;
        void                    SetSlerpTargetPosFlyingTimeDown         ( uint value );

        uint                    GetSlerpTargetPosFlyingTimeUp           () const;
        void                    SetSlerpTargetPosFlyingTimeUp           ( uint value );

        float                   GetSlerpTargetPosNormalBehaviorDelta    () const;
        void                    SetSlerpTargetPosNormalBehaviorDelta    ( float value );

        uint                    GetSlerpTargetPosNormalBehaviorTimeDown () const;
        void                    SetSlerpTargetPosNormalBehaviorTimeDown ( uint value );

        uint                    GetSlerpTargetPosNormalBehaviorTimeUp   () const;
        void                    SetSlerpTargetPosNormalBehaviorTimeUp   ( uint value );

        uint                    GetSlerpTargetPosTimeDown               () const;
        void                    SetSlerpTargetPosTimeDown               ( uint value );

        uint                    GetSlerpTargetPosTimeUp                 () const;
        void                    SetSlerpTargetPosTimeUp                 ( uint value );

        float                   GetStateFlyingLookAtFactorDelta         () const;
        void                    SetStateFlyingLookAtFactorDelta         ( float value );

        uint                    GetStateFlyingLookAtFactorTimeDown      () const;
        void                    SetStateFlyingLookAtFactorTimeDown      ( uint value );

        uint                    GetStateFlyingLookAtFactorTimeUp        () const;
        void                    SetStateFlyingLookAtFactorTimeUp        ( uint value );

        float                   GetStateFlyingLookAtStep                () const;
        void                    SetStateFlyingLookAtStep                ( float value );

        float                   GetStateFlyingRadiusDelta               () const;
        void                    SetStateFlyingRadiusDelta               ( float value );

        uint                    GetStateFlyingRadiusTimeDown            () const;
        void                    SetStateFlyingRadiusTimeDown            ( uint value );

        uint                    GetStateFlyingRadiusTimeUp              () const;
        void                    SetStateFlyingRadiusTimeUp              ( uint value );

        bool                    GetStickToIdeal                         () const;
        void                    SetStickToIdeal                         ( bool value );

        float                   GetUp                                   () const;
        void                    SetUp                                   ( float value );

