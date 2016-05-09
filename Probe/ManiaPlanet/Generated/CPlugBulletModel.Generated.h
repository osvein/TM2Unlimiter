        enum { CLASSID = 0x090CD000 };

        static CPlugBulletModel* CreateInstance ();

        enum eBulletType
        {
            BULLETTYPE_PROJECTILE,
            BULLETTYPE_LASER,
            BULLETTYPE_BEAM,
            BULLETTYPE_TRILASER,
            BULLETTYPE_PROJECTILEHOMING,
            BULLETTYPE_SPEAR
        };
        static std::wstring     BulletTypeToString                      ( eBulletType value );
        static eBulletType      ParseBulletType                         ( const std::wstring& wstrName );

        enum eExplosionOccultationTest
        {
            EXPLOSIONOCCULTATIONTEST_BINARY,
            EXPLOSIONOCCULTATIONTEST_SMOOTHER
        };
        static std::wstring     ExplosionOccultationTestToString        ( eExplosionOccultationTest value );
        static eExplosionOccultationTest ParseExplosionOccultationTest           ( const std::wstring& wstrName );

        uint                    GetAmmoCostDuringTriggerDuration        () const;
        void                    SetAmmoCostDuringTriggerDuration        ( uint value );

        float                   GetBeamMaxLength                        () const;
        void                    SetBeamMaxLength                        ( float value );

        class CPlugBeamEmitterModel* GetBeamVisualModel                      () const;
        void                    SetBeamVisualModel                      ( class CPlugBeamEmitterModel* value );

        class CPlugBitmap*      GetBitmapCrosshair                      () const;
        void                    SetBitmapCrosshair                      ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapCrosshairTriLaser              () const;
        void                    SetBitmapCrosshairTriLaser              ( class CPlugBitmap* value );

        float                   GetBulletRadius                         () const;
        void                    SetBulletRadius                         ( float value );

        eBulletType             GetBulletType                           () const;
        void                    SetBulletType                           ( eBulletType value );

        float                   GetBulletVsRadiusMargin                 () const;
        void                    SetBulletVsRadiusMargin                 ( float value );

        uint                    GetChargeDurationFull                   () const;
        void                    SetChargeDurationFull                   ( uint value );

        uint                    GetChargeDurationStop                   () const;
        void                    SetChargeDurationStop                   ( uint value );

        uint                    GetEnergyGainDelay                      () const;
        void                    SetEnergyGainDelay                      ( uint value );

        float                   GetExplosionBlow                        () const;
        void                    SetExplosionBlow                        ( float value );

        float                   GetExplosionBlowRadius                  () const;
        void                    SetExplosionBlowRadius                  ( float value );

        float                   GetExplosionBlowRadiusAttenuation       () const;
        void                    SetExplosionBlowRadiusAttenuation       ( float value );

        class CPlugParticleMaterialImpactModel* GetExplosionBullet                      () const;
        void                    SetExplosionBullet                      ( class CPlugParticleMaterialImpactModel* value );

        int                     GetExplosionDamage                      () const;
        void                    SetExplosionDamage                      ( int value );

        float                   GetExplosionDamageRadius                () const;
        void                    SetExplosionDamageRadius                ( float value );

        float                   GetExplosionDamageRadiusAttenuation     () const;
        void                    SetExplosionDamageRadiusAttenuation     ( float value );

        float                   GetExplosionDetectionRadius_Flying      () const;
        void                    SetExplosionDetectionRadius_Flying      ( float value );

        float                   GetExplosionDetectionRadius_Resting     () const;
        void                    SetExplosionDetectionRadius_Resting     ( float value );

        class CFuncKeysReal*    GetExplosionEnergyFromLifeTime          () const;
        void                    SetExplosionEnergyFromLifeTime          ( class CFuncKeysReal* value );

        float                   GetExplosionEnergyWhenOccluded          () const;
        void                    SetExplosionEnergyWhenOccluded          ( float value );

        eExplosionOccultationTest GetExplosionOccultationTest             () const;
        void                    SetExplosionOccultationTest             ( eExplosionOccultationTest value );

        bool                    GetExplosionOnEndLife                   () const;
        void                    SetExplosionOnEndLife                   ( bool value );

        bool                    GetExplosionOnImpact                    () const;
        void                    SetExplosionOnImpact                    ( bool value );

        class CPlugParticleMaterialImpactModel* GetExplosionSurface                     () const;
        void                    SetExplosionSurface                     ( class CPlugParticleMaterialImpactModel* value );

        uint                    GetFireBulletCount                      () const;
        void                    SetFireBulletCount                      ( uint value );

        float                   GetFireBulletCountSpeedCoef             () const;
        void                    SetFireBulletCountSpeedCoef             ( float value );

        float                   GetFireBulletDispersionAngleDeg         () const;
        void                    SetFireBulletDispersionAngleDeg         ( float value );

        List < Vec3D >&         GetFireBulletPattern                    () const;
        void                    SetFireBulletPattern                    ( List < Vec3D >& value );

        uint                    GetFireEnergyCost                       () const;
        void                    SetFireEnergyCost                       ( uint value );

        uint                    GetFireMaxEnergyStorage                 () const;
        void                    SetFireMaxEnergyStorage                 ( uint value );

        uint                    GetFirePeriod                           () const;
        void                    SetFirePeriod                           ( uint value );

        float                   GetFluidFriction                        () const;
        void                    SetFluidFriction                        ( float value );

        float                   GetGunSpeedCoef                         () const;
        void                    SetGunSpeedCoef                         ( float value );

        float                   GetGunSpeedCoefRatioMax                 () const;
        void                    SetGunSpeedCoefRatioMax                 ( float value );

        float                   GetGunSpeedCoefRatioMin                 () const;
        void                    SetGunSpeedCoefRatioMin                 ( float value );

        float                   GetHiddenDist                           () const;
        void                    SetHiddenDist                           ( float value );

        bool                    GetHoldTriggerToPower                   () const;
        void                    SetHoldTriggerToPower                   ( bool value );

        float                   GetHomingDist                           () const;
        void                    SetHomingDist                           ( float value );

        float                   GetHomingMaxAnglularSpeed               () const;
        void                    SetHomingMaxAnglularSpeed               ( float value );

        float                   GetHomingPeriod                         () const;
        void                    SetHomingPeriod                         ( float value );

        class CPlugBitmap*      GetIcon                                 () const;
        void                    SetIcon                                 ( class CPlugBitmap* value );

        class CPlugParticleMaterialImpactModel* GetImpactBounce                         () const;
        void                    SetImpactBounce                         ( class CPlugParticleMaterialImpactModel* value );

        float                   GetImpactBouncingN                      () const;
        void                    SetImpactBouncingN                      ( float value );

        float                   GetImpactBouncingT                      () const;
        void                    SetImpactBouncingT                      ( float value );

        float                   GetLifeTime                             () const;
        void                    SetLifeTime                             ( float value );

        float                   GetLifeTimeAfterFirstImpact             () const;
        void                    SetLifeTimeAfterFirstImpact             ( float value );

        float                   GetMass                                 () const;
        void                    SetMass                                 ( float value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        class CPlugParticleEmitterModel* GetParticleModelAlive                   () const;
        void                    SetParticleModelAlive                   ( class CPlugParticleEmitterModel* value );

        class CPlugParticleEmitterModel* GetParticleModelFire                    () const;
        void                    SetParticleModelFire                    ( class CPlugParticleEmitterModel* value );

        float                   GetRestSpeed                            () const;
        void                    SetRestSpeed                            ( float value );

        bool                    GetShowTrajectory                       () const;
        void                    SetShowTrajectory                       ( bool value );

        float                   GetSizeXScreenPercent                   () const;
        void                    SetSizeXScreenPercent                   ( float value );

        float                   GetSizeXScreenPercentMax                () const;
        void                    SetSizeXScreenPercentMax                ( float value );

        float                   GetSizeYScreenPercent                   () const;
        void                    SetSizeYScreenPercent                   ( float value );

        float                   GetSizeYScreenPercentMax                () const;
        void                    SetSizeYScreenPercentMax                ( float value );

        float                   GetSm_AimIntertia                       () const;
        void                    SetSm_AimIntertia                       ( float value );

        bool                    GetSm_AutoAim                           () const;
        void                    SetSm_AutoAim                           ( bool value );

        float                   GetSm_BulletHitBulletBonusCoef          () const;
        void                    SetSm_BulletHitBulletBonusCoef          ( float value );

        uint                    GetSm_BulletHitBulletBonusDuration      () const;
        void                    SetSm_BulletHitBulletBonusDuration      ( uint value );

        class CPlugSound*       GetSoundAlive                           () const;
        void                    SetSoundAlive                           ( class CPlugSound* value );

        class CPlugSound*       GetSoundFire                            () const;
        void                    SetSoundFire                            ( class CPlugSound* value );

        Vec3D                   GetSoundFireOffset                      () const;
        void                    SetSoundFireOffset                      ( Vec3D value );

        class CPlugSound*       GetSoundGauge                           () const;
        void                    SetSoundGauge                           ( class CPlugSound* value );

        class CPlugSound*       GetSoundReloading                       () const;
        void                    SetSoundReloading                       ( class CPlugSound* value );

        float                   GetSpearLockDist                        () const;
        void                    SetSpearLockDist                        ( float value );

        float                   GetSpeed                                () const;
        void                    SetSpeed                                ( float value );

        class CFuncKeysReal*    GetSpeedFromHorizonAngle                () const;
        void                    SetSpeedFromHorizonAngle                ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetSpeedFromTriggerDuration             () const;
        void                    SetSpeedFromTriggerDuration             ( class CFuncKeysReal* value );

        class CFuncKeysReal*    GetSpreadCoefFormChargeDuration         () const;
        void                    SetSpreadCoefFormChargeDuration         ( class CFuncKeysReal* value );

        float                   GetTrajectoryUTurnDistance              () const;
        void                    SetTrajectoryUTurnDistance              ( float value );

        float                   GetTriLaserRadiusAtOneMeter_Zoom0       () const;
        void                    SetTriLaserRadiusAtOneMeter_Zoom0       ( float value );

        float                   GetTriLaserRadiusAtOneMeter_Zoom1       () const;
        void                    SetTriLaserRadiusAtOneMeter_Zoom1       ( float value );

        float                   GetVisualOffsetDuration                 () const;
        void                    SetVisualOffsetDuration                 ( float value );

        Vec3D                   GetVisualOffsetFirstPerson              () const;
        void                    SetVisualOffsetFirstPerson              ( Vec3D value );

        bool                    GetWarmUp                               () const;
        void                    SetWarmUp                               ( bool value );

