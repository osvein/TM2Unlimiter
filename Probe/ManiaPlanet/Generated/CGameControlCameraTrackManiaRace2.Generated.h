        enum { CLASSID = 0x24086000 };

        static CGameControlCameraTrackManiaRace2* CreateInstance ();

        float                   GetDeltaDist                            () const;
        void                    SetDeltaDist                            ( float value );

        float                   GetDeltaDistDamperKa                    () const;
        void                    SetDeltaDistDamperKa                    ( float value );

        float                   GetDeltaDistDamperKi                    () const;
        void                    SetDeltaDistDamperKi                    ( float value );

        float                   GetDeltaLookAtFactor                    () const;
        void                    SetDeltaLookAtFactor                    ( float value );

        float                   GetDeltaLookAtFactorDamperKa            () const;
        void                    SetDeltaLookAtFactorDamperKa            ( float value );

        float                   GetDeltaLookAtFactorDamperKi            () const;
        void                    SetDeltaLookAtFactorDamperKi            ( float value );

        float                   GetEventBurningDistDelta                () const;
        void                    SetEventBurningDistDelta                ( float value );

        uint                    GetEventBurningDistTimeDown             () const;
        void                    SetEventBurningDistTimeDown             ( uint value );

        uint                    GetEventBurningDistTimeUp               () const;
        void                    SetEventBurningDistTimeUp               ( uint value );

        float                   GetEventBurningLookAtFactorDelta        () const;
        void                    SetEventBurningLookAtFactorDelta        ( float value );

        uint                    GetEventBurningLookAtFactorTimeDown     () const;
        void                    SetEventBurningLookAtFactorTimeDown     ( uint value );

        uint                    GetEventBurningLookAtFactorTimeUp       () const;
        void                    SetEventBurningLookAtFactorTimeUp       ( uint value );

        float                   GetEventChangeGearDistDelta             () const;
        void                    SetEventChangeGearDistDelta             ( float value );

        uint                    GetEventChangeGearDistTimeDown          () const;
        void                    SetEventChangeGearDistTimeDown          ( uint value );

        uint                    GetEventChangeGearDistTimeUp            () const;
        void                    SetEventChangeGearDistTimeUp            ( uint value );

        float                   GetEventTurboDistDelta                  () const;
        void                    SetEventTurboDistDelta                  ( float value );

        uint                    GetEventTurboDistTimeDown               () const;
        void                    SetEventTurboDistTimeDown               ( uint value );

        uint                    GetEventTurboDistTimeUp                 () const;
        void                    SetEventTurboDistTimeUp                 ( uint value );

        float                   GetEventTurboFovDelta                   () const;
        void                    SetEventTurboFovDelta                   ( float value );

        uint                    GetEventTurboFovTimeDown                () const;
        void                    SetEventTurboFovTimeDown                ( uint value );

        uint                    GetEventTurboFovTimeUp                  () const;
        void                    SetEventTurboFovTimeUp                  ( uint value );

        float                   GetInputBrakeDistDelta                  () const;
        void                    SetInputBrakeDistDelta                  ( float value );

        uint                    GetInputBrakeDistTimeDown               () const;
        void                    SetInputBrakeDistTimeDown               ( uint value );

        uint                    GetInputBrakeDistTimeUp                 () const;
        void                    SetInputBrakeDistTimeUp                 ( uint value );

        float                   GetInputGasDistDelta                    () const;
        void                    SetInputGasDistDelta                    ( float value );

        uint                    GetInputGasDistTimeDown                 () const;
        void                    SetInputGasDistTimeDown                 ( uint value );

        uint                    GetInputGasDistTimeUp                   () const;
        void                    SetInputGasDistTimeUp                   ( uint value );

        float                   GetInputLeftSteerRollDelta              () const;
        void                    SetInputLeftSteerRollDelta              ( float value );

        uint                    GetInputLeftSteerRollTimeDown           () const;
        void                    SetInputLeftSteerRollTimeDown           ( uint value );

        uint                    GetInputLeftSteerRollTimeUp             () const;
        void                    SetInputLeftSteerRollTimeUp             ( uint value );

        float                   GetInputLeftSteerYawDelta               () const;
        void                    SetInputLeftSteerYawDelta               ( float value );

        uint                    GetInputLeftSteerYawTimeDown            () const;
        void                    SetInputLeftSteerYawTimeDown            ( uint value );

        uint                    GetInputLeftSteerYawTimeUp              () const;
        void                    SetInputLeftSteerYawTimeUp              ( uint value );

        uint                    GetInputNoSteerDurationBeforeReset      () const;
        void                    SetInputNoSteerDurationBeforeReset      ( uint value );

        float                   GetInputRightSteerRollDelta             () const;
        void                    SetInputRightSteerRollDelta             ( float value );

        uint                    GetInputRightSteerRollTimeDown          () const;
        void                    SetInputRightSteerRollTimeDown          ( uint value );

        uint                    GetInputRightSteerRollTimeUp            () const;
        void                    SetInputRightSteerRollTimeUp            ( uint value );

        float                   GetInputRightSteerYawDelta              () const;
        void                    SetInputRightSteerYawDelta              ( float value );

        uint                    GetInputRightSteerYawTimeDown           () const;
        void                    SetInputRightSteerYawTimeDown           ( uint value );

        uint                    GetInputRightSteerYawTimeUp             () const;
        void                    SetInputRightSteerYawTimeUp             ( uint value );

        float                   GetInputSteerDistDelta                  () const;
        void                    SetInputSteerDistDelta                  ( float value );

        uint                    GetInputSteerDistTimeDown               () const;
        void                    SetInputSteerDistTimeDown               ( uint value );

        uint                    GetInputSteerDistTimeUp                 () const;
        void                    SetInputSteerDistTimeUp                 ( uint value );

        uint                    GetInputSteerDurationBeforeAnticipatingTurnTriggered() const;
        void                    SetInputSteerDurationBeforeAnticipatingTurnTriggered( uint value );

        uint                    GetInputSteerDurationBeforeBurnoutShowView() const;
        void                    SetInputSteerDurationBeforeBurnoutShowView( uint value );

        uint                    GetInputSteerDurationBeforeRollTriggered() const;
        void                    SetInputSteerDurationBeforeRollTriggered( uint value );

        bool                    GetIsRollFromInput                      () const;
        void                    SetIsRollFromInput                      ( bool value );

        float                   GetLastDeltaFov                         () const;
        void                    SetLastDeltaFov                         ( float value );

        float                   GetLastDeltaPlaneDist                   () const;
        void                    SetLastDeltaPlaneDist                   ( float value );

        float                   GetLastRollAngle                        () const;
        void                    SetLastRollAngle                        ( float value );

        float                   GetLastYawAngle                         () const;
        void                    SetLastYawAngle                         ( float value );

        class CFuncKeysReal*    GetLookAtFactorFromUpSpeedRatio         () const;
        void                    SetLookAtFactorFromUpSpeedRatio         ( class CFuncKeysReal* value );

        float                   GetMaxDeltaFovStep                      () const;
        void                    SetMaxDeltaFovStep                      ( float value );

        float                   GetMaxDeltaPlaneDistStep                () const;
        void                    SetMaxDeltaPlaneDistStep                ( float value );

        float                   GetMinSpeed                             () const;
        void                    SetMinSpeed                             ( float value );

        class CFuncKeysReal*    GetRollFromSpeed                        () const;
        void                    SetRollFromSpeed                        ( class CFuncKeysReal* value );

        float                   GetStateFlyingDistDelta                 () const;
        void                    SetStateFlyingDistDelta                 ( float value );

        uint                    GetStateFlyingDistTimeDown              () const;
        void                    SetStateFlyingDistTimeDown              ( uint value );

        uint                    GetStateFlyingDistTimeUp                () const;
        void                    SetStateFlyingDistTimeUp                ( uint value );

        uint                    GetStateFlyingDurationBeforeCameraMove  () const;
        void                    SetStateFlyingDurationBeforeCameraMove  ( uint value );

        uint                    GetStateFlyingDurationBeforeFlyingMode  () const;
        void                    SetStateFlyingDurationBeforeFlyingMode  ( uint value );

        float                   GetStateFlyingLookAtFactorDelta         () const;
        void                    SetStateFlyingLookAtFactorDelta         ( float value );

        uint                    GetStateFlyingLookAtFactorTimeDown      () const;
        void                    SetStateFlyingLookAtFactorTimeDown      ( uint value );

        uint                    GetStateFlyingLookAtFactorTimeUp        () const;
        void                    SetStateFlyingLookAtFactorTimeUp        ( uint value );

        float                   GetStateFlyingLookAtStep                () const;
        void                    SetStateFlyingLookAtStep                ( float value );

        float                   GetStateFlyingPlaneDistDelta            () const;
        void                    SetStateFlyingPlaneDistDelta            ( float value );

        uint                    GetStateFlyingPlaneDistTimeDown         () const;
        void                    SetStateFlyingPlaneDistTimeDown         ( uint value );

        uint                    GetStateFlyingPlaneDistTimeUp           () const;
        void                    SetStateFlyingPlaneDistTimeUp           ( uint value );

        class CFuncKeysReal*    GetYawFromSpeed                         () const;
        void                    SetYawFromSpeed                         ( class CFuncKeysReal* value );

