        enum { CLASSID = 0x090C7000 };

        static CPlugCharVisModel* CreateInstance ();

        uint                    GetAimingAfterFireDurationMs            () const;
        void                    SetAimingAfterFireDurationMs            ( uint value );

        class CPlugBeamEmitterModel* GetAttractorModel                       () const;
        void                    SetAttractorModel                       ( class CPlugBeamEmitterModel* value );

        float                   GetAttractorOffsetY                     () const;
        void                    SetAttractorOffsetY                     ( float value );

        Vec3D                   GetAttractorRelPos                      () const;
        void                    SetAttractorRelPos                      ( Vec3D value );

        class CMwNod*           GetDummySkinnableFid                    () const;
        void                    SetDummySkinnableFid                    ( class CMwNod* value );

        class CFuncKeysReal*    GetEliminatedHighlight                  () const;
        void                    SetEliminatedHighlight                  ( class CFuncKeysReal* value );

        color                   GetEliminatedHighlightRgb               () const;
        void                    SetEliminatedHighlightRgb               ( color value );

        class CFuncKeysReal*    GetEliminatedTeleportIntens             () const;
        void                    SetEliminatedTeleportIntens             ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetEnergyScaleFromRatio                 () const;
        void                    SetEnergyScaleFromRatio                 ( class CFuncKeysReal* value );

        color                   GetHurtFlashColor                       () const;
        void                    SetHurtFlashColor                       ( color value );

        float                   GetHurtViewOffsetAngle                  () const;
        void                    SetHurtViewOffsetAngle                  ( float value );

        uint                    GetHurtViewOffsetDuration               () const;
        void                    SetHurtViewOffsetDuration               ( uint value );

        float                   GetHurtViewOffsetPos                    () const;
        void                    SetHurtViewOffsetPos                    ( float value );

        class CPlugParticleMaterialImpactModel* GetJumpMaterialImpact                   () const;
        void                    SetJumpMaterialImpact                   ( class CPlugParticleMaterialImpactModel* value );

        float                   GetJumpViewOffsetAngle                  () const;
        void                    SetJumpViewOffsetAngle                  ( float value );

        uint                    GetJumpViewOffsetDuration1              () const;
        void                    SetJumpViewOffsetDuration1              ( uint value );

        uint                    GetJumpViewOffsetDuration2              () const;
        void                    SetJumpViewOffsetDuration2              ( uint value );

        float                   GetJumpViewOffsetPos                    () const;
        void                    SetJumpViewOffsetPos                    ( float value );

        class CPlugParticleMaterialImpactModel* GetLandMaterialImpact                   () const;
        void                    SetLandMaterialImpact                   ( class CPlugParticleMaterialImpactModel* value );

        float                   GetLandViewOffsetAngle                  () const;
        void                    SetLandViewOffsetAngle                  ( float value );

        uint                    GetLandViewOffsetDuration1              () const;
        void                    SetLandViewOffsetDuration1              ( uint value );

        uint                    GetLandViewOffsetDuration2              () const;
        void                    SetLandViewOffsetDuration2              ( uint value );

        float                   GetLandViewOffsetPos                    () const;
        void                    SetLandViewOffsetPos                    ( float value );

        class CFuncKeysReal*    GetLandVolumeFromVel                    () const;
        void                    SetLandVolumeFromVel                    ( class CFuncKeysReal* value );

        class CPlugParticleEmitterModel* GetParticle_Deactivated                 () const;
        void                    SetParticle_Deactivated                 ( class CPlugParticleEmitterModel* value );

        class CPlugParticleEmitterModel* GetParticle_DeactivatedShot             () const;
        void                    SetParticle_DeactivatedShot             ( class CPlugParticleEmitterModel* value );

        class CPlugParticleEmitterModel* GetParticle_Deprecated_InjuredLight     () const;
        void                    SetParticle_Deprecated_InjuredLight     ( class CPlugParticleEmitterModel* value );

        class CPlugParticleEmitterModel* GetParticle_EvolutionChange             () const;
        void                    SetParticle_EvolutionChange             ( class CPlugParticleEmitterModel* value );

        class CPlugParticleEmitterModel* GetParticle_EvolutionInProgress         () const;
        void                    SetParticle_EvolutionInProgress         ( class CPlugParticleEmitterModel* value );

        class CPlugParticleEmitterModel* GetParticle_JumpPad                     () const;
        void                    SetParticle_JumpPad                     ( class CPlugParticleEmitterModel* value );

        class CPlugParticleEmitterModel* GetParticle_ShieldDestroyed             () const;
        void                    SetParticle_ShieldDestroyed             ( class CPlugParticleEmitterModel* value );

        class CPlugParticleEmitterModel* GetParticle_Spawn                       () const;
        void                    SetParticle_Spawn                       ( class CPlugParticleEmitterModel* value );

        class CPlugParticleEmitterModel* GetParticle_SpeedUp                     () const;
        void                    SetParticle_SpeedUp                     ( class CPlugParticleEmitterModel* value );

        class CPlugParticleEmitterModel* GetParticle_Turbo                       () const;
        void                    SetParticle_Turbo                       ( class CPlugParticleEmitterModel* value );

        class CFuncKeysReal*    GetRunStepDistFromVel                   () const;
        void                    SetRunStepDistFromVel                   ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetRunStepDistFromVel_Snow              () const;
        void                    SetRunStepDistFromVel_Snow              ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetRunStepPitchFromVel                  () const;
        void                    SetRunStepPitchFromVel                  ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetRunStepVolumeFromVel                 () const;
        void                    SetRunStepVolumeFromVel                 ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetRunViewBobAmountFromVel              () const;
        void                    SetRunViewBobAmountFromVel              ( class CFuncKeysReal* value );

        float                   GetRunViewBobOffsetPitch                () const;
        void                    SetRunViewBobOffsetPitch                ( float value );

        float                   GetRunViewBobOffsetPos                  () const;
        void                    SetRunViewBobOffsetPos                  ( float value );

        float                   GetRunViewBobOffsetRoll                 () const;
        void                    SetRunViewBobOffsetRoll                 ( float value );

        class CPlugShieldEmitterModel* GetShieldModel                          () const;
        void                    SetShieldModel                          ( class CPlugShieldEmitterModel* value );

        class CPlugSkinnedPlayerModel* GetSkinnedPlayerModel                   () const;
        void                    SetSkinnedPlayerModel                   ( class CPlugSkinnedPlayerModel* value );

        class CPlugSound*       GetSound_Breathe                        () const;
        void                    SetSound_Breathe                        ( class CPlugSound* value );

        class CPlugSound*       GetSound_EvolutionChange                () const;
        void                    SetSound_EvolutionChange                ( class CPlugSound* value );

        class CPlugSound*       GetSound_EvolutionInProgress            () const;
        void                    SetSound_EvolutionInProgress            ( class CPlugSound* value );

        class CPlugSound*       GetSound_Gliding                        () const;
        void                    SetSound_Gliding                        ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_Attractor               () const;
        void                    SetSound_Notice_Attractor               ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_BackFlipJump            () const;
        void                    SetSound_Notice_BackFlipJump            ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_BulletHit               () const;
        void                    SetSound_Notice_BulletHit               ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_DoubleJump              () const;
        void                    SetSound_Notice_DoubleJump              ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_Evolution               () const;
        void                    SetSound_Notice_Evolution               ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_Fire                    () const;
        void                    SetSound_Notice_Fire                    ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_FreeWheeling            () const;
        void                    SetSound_Notice_FreeWheeling            ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_FrontFlipJump           () const;
        void                    SetSound_Notice_FrontFlipJump           ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_GesturePointTo          () const;
        void                    SetSound_Notice_GesturePointTo          ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_GestureTaunt            () const;
        void                    SetSound_Notice_GestureTaunt            ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_InjuredEliminated       () const;
        void                    SetSound_Notice_InjuredEliminated       ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_InjuredEliminatedShot   () const;
        void                    SetSound_Notice_InjuredEliminatedShot   ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_InjuredLight            () const;
        void                    SetSound_Notice_InjuredLight            ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_Jump                    () const;
        void                    SetSound_Notice_Jump                    ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_JumpChain1              () const;
        void                    SetSound_Notice_JumpChain1              ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_JumpChain2              () const;
        void                    SetSound_Notice_JumpChain2              ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_JumpPadBig              () const;
        void                    SetSound_Notice_JumpPadBig              ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_JumpPadMed              () const;
        void                    SetSound_Notice_JumpPadMed              ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_JumpPadSmall            () const;
        void                    SetSound_Notice_JumpPadSmall            ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_Land                    () const;
        void                    SetSound_Notice_Land                    ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_MissingStamina          () const;
        void                    SetSound_Notice_MissingStamina          ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_Spawn                   () const;
        void                    SetSound_Notice_Spawn                   ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_SpeedUp                 () const;
        void                    SetSound_Notice_SpeedUp                 ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_Turbo                   () const;
        void                    SetSound_Notice_Turbo                   ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_WallJump                () const;
        void                    SetSound_Notice_WallJump                ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_ZoomIn                  () const;
        void                    SetSound_Notice_ZoomIn                  ( class CPlugSound* value );

        class CPlugSound*       GetSound_Notice_ZoomOut                 () const;
        void                    SetSound_Notice_ZoomOut                 ( class CPlugSound* value );

        class CPlugSound*       GetSound_RunBody                        () const;
        void                    SetSound_RunBody                        ( class CPlugSound* value );

        class CPlugSound*       GetSound_SwimBody                       () const;
        void                    SetSound_SwimBody                       ( class CPlugSound* value );

        class CPlugSound*       GetSound_Swimming                       () const;
        void                    SetSound_Swimming                       ( class CPlugSound* value );

        class CPlugSound*       GetSound_WalkBody                       () const;
        void                    SetSound_WalkBody                       ( class CPlugSound* value );

        float                   GetStarfeSmoothingPeriod                () const;
        void                    SetStarfeSmoothingPeriod                ( float value );

        float                   GetStrafeMaxRollAngle                   () const;
        void                    SetStrafeMaxRollAngle                   ( float value );

        class CFuncKeysReal*    GetSwimStepDistFromVel                  () const;
        void                    SetSwimStepDistFromVel                  ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetSwimStepPitchFromVel                 () const;
        void                    SetSwimStepPitchFromVel                 ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetSwimStepVolumeFromVel                () const;
        void                    SetSwimStepVolumeFromVel                ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetSwimmingPitchFromVel                 () const;
        void                    SetSwimmingPitchFromVel                 ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetSwimmingVolumeFromVel                () const;
        void                    SetSwimmingVolumeFromVel                ( class CFuncKeysReal* value );

        class GxLightBall*      GetTacticalLight                        () const;
        void                    SetTacticalLight                        ( class GxLightBall* value );

        float                   GetViewBobPitchStepPhase                () const;
        void                    SetViewBobPitchStepPhase                ( float value );

        float                   GetViewBobRollWalkCyclePhase            () const;
        void                    SetViewBobRollWalkCyclePhase            ( float value );

        float                   GetVisualVCylinderHeight                () const;
        void                    SetVisualVCylinderHeight                ( float value );

        float                   GetVisualVCylinderRadius                () const;
        void                    SetVisualVCylinderRadius                ( float value );

        uint                    GetWalkImpactBodyDelay                  () const;
        void                    SetWalkImpactBodyDelay                  ( uint value );

        class CFuncKeysReal*    GetWalkStepDistFromVel                  () const;
        void                    SetWalkStepDistFromVel                  ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetWalkStepDistFromVel_Snow             () const;
        void                    SetWalkStepDistFromVel_Snow             ( class CFuncKeysReal* value );

        class CPlugParticleMaterialImpactModel* GetWalkStepMaterialImpact               () const;
        void                    SetWalkStepMaterialImpact               ( class CPlugParticleMaterialImpactModel* value );

        class CFuncKeysReal*    GetWalkStepPitchFromVel                 () const;
        void                    SetWalkStepPitchFromVel                 ( class CFuncKeysReal* value );

        Vec3D                   GetWalkStepSoundOffset                  () const;
        void                    SetWalkStepSoundOffset                  ( Vec3D value );

        class CFuncKeysReal*    GetWalkStepVolumeFromVel                () const;
        void                    SetWalkStepVolumeFromVel                ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetWalkViewBobAmountFromVel             () const;
        void                    SetWalkViewBobAmountFromVel             ( class CFuncKeysReal* value );

        float                   GetWalkViewBobOffsetPitch               () const;
        void                    SetWalkViewBobOffsetPitch               ( float value );

        float                   GetWalkViewBobOffsetPos                 () const;
        void                    SetWalkViewBobOffsetPos                 ( float value );

        float                   GetWalkViewBobOffsetRoll                () const;
        void                    SetWalkViewBobOffsetRoll                ( float value );

