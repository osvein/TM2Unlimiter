        enum { CLASSID = 0x090B2000 };

        static CPlugParticleEmitterSubModel* CreateInstance ();

        enum eColorGradientUse
        {
            COLORGRADIENTUSE_RANDOMCONSTANTCOLOR,
            COLORGRADIENTUSE_COLOROVERLIFE
        };
        static std::wstring     ColorGradientUseToString                ( eColorGradientUse value );
        static eColorGradientUse ParseColorGradientUse                   ( const std::wstring& wstrName );

        enum eMultiStateRenderMode
        {
            MULTISTATERENDERMODE_LINENORMAL,
            MULTISTATERENDERMODE_LINEWIDEWORLD,
            MULTISTATERENDERMODE_LINEWIDESCREEN,
            MULTISTATERENDERMODE_QUADCENTERLEFT,
            MULTISTATERENDERMODE_QUADUP,
            MULTISTATERENDERMODE_WATERSPLASH,
            MULTISTATERENDERMODE_LIGHTTRAIL,
            MULTISTATERENDERMODE_GRASSMARKS
        };
        static std::wstring     MultiStateRenderModeToString            ( eMultiStateRenderMode value );
        static eMultiStateRenderMode ParseMultiStateRenderMode               ( const std::wstring& wstrName );

        enum eParticleEmitterSubModel
        {
            PARTICLEEMITTERSUBMODEL_STANDARD,
            PARTICLEEMITTERSUBMODEL_MULTISTATE,
            PARTICLEEMITTERSUBMODEL_ONEPARTICLE,
            PARTICLEEMITTERSUBMODEL_VORTEXSIM_PARTICLE,
            PARTICLEEMITTERSUBMODEL_VORTEXSIM_VORTEXFILAMENT,
            PARTICLEEMITTERSUBMODEL_VORTEXSIM_REPULSOR,
            PARTICLEEMITTERSUBMODEL_CHAIN,
            PARTICLEEMITTERSUBMODEL_GPU
        };
        static std::wstring     ParticleEmitterSubModelToString         ( eParticleEmitterSubModel value );
        static eParticleEmitterSubModel ParseParticleEmitterSubModel            ( const std::wstring& wstrName );

        enum eSpawnCond
        {
            SPAWNCOND_ACTIVE_FIXEDPERIOD,
            SPAWNCOND_ACTIVE_MINDIST,
            SPAWNCOND_ACTIVE,
            SPAWNCOND_NONE,
            SPAWNCOND_ACTIVE_FIXEDDIST
        };
        static std::wstring     SpawnCondToString                       ( eSpawnCond value );
        static eSpawnCond       ParseSpawnCond                          ( const std::wstring& wstrName );

        enum eStandardRenderMode
        {
            STANDARDRENDERMODE_QUADCAMERA,
            STANDARDRENDERMODE_WATERSPLASH,
            STANDARDRENDERMODE_QUADSPEED,
            STANDARDRENDERMODE_LINESSPEEDCAMERA,
            STANDARDRENDERMODE_SOLID,
            STANDARDRENDERMODE_TRIANGLE,
            STANDARDRENDERMODE_LIGHTONLY,
            STANDARDRENDERMODE_BEAM
        };
        static std::wstring     StandardRenderModeToString              ( eStandardRenderMode value );
        static eStandardRenderMode ParseStandardRenderMode                 ( const std::wstring& wstrName );

        enum eTextureAtlas
        {
            TEXTUREATLAS_NONE,
            TEXTUREATLAS_FIXED,
            TEXTUREATLAS_RANDOM,
            TEXTUREATLAS_ANIMATEDRANDOM,
            TEXTUREATLAS_ANIMATEDSYNCHRO
        };
        static std::wstring     TextureAtlasToString                    ( eTextureAtlas value );
        static eTextureAtlas    ParseTextureAtlas                       ( const std::wstring& wstrName );

        float                   GetBeamLengthMax                        () const;
        void                    SetBeamLengthMax                        ( float value );

        float                   GetBeamLengthSpeedScale                 () const;
        void                    SetBeamLengthSpeedScale                 ( float value );

        uint                    GetCircularTrailVertPerPartCount        () const;
        void                    SetCircularTrailVertPerPartCount        ( uint value );

        float                   GetCollisionBounce                      () const;
        void                    SetCollisionBounce                      ( float value );

        float                   GetCollisionDamper                      () const;
        void                    SetCollisionDamper                      ( float value );

        bool                    GetCollisionEnabled                     () const;
        void                    SetCollisionEnabled                     ( bool value );

        float                   GetCollisionRadius                      () const;
        void                    SetCollisionRadius                      ( float value );

        bool                    GetColorBirthUseIntensity               () const;
        void                    SetColorBirthUseIntensity               ( bool value );

        class CFuncColorGradient* GetColorGradient                        () const;
        void                    SetColorGradient                        ( class CFuncColorGradient* value );

        eColorGradientUse       GetColorGradientUse                     () const;
        void                    SetColorGradientUse                     ( eColorGradientUse value );

        bool                    GetColorIsEmitterHue00                  () const;
        void                    SetColorIsEmitterHue00                  ( bool value );

        bool                    GetColorModulateWithTransparency        () const;
        void                    SetColorModulateWithTransparency        ( bool value );

        bool                    GetColorUseEmitterHue                   () const;
        void                    SetColorUseEmitterHue                   ( bool value );

        float                   GetEmitStateFromImpactDirNormalCoef     () const;
        void                    SetEmitStateFromImpactDirNormalCoef     ( float value );

        float                   GetEmitStateFromImpactDirTangentialCoef () const;
        void                    SetEmitStateFromImpactDirTangentialCoef ( float value );

        float                   GetFluidFrictionBirth                   () const;
        void                    SetFluidFrictionBirth                   ( float value );

        float                   GetFluidFrictionBirthIntensityBase      () const;
        void                    SetFluidFrictionBirthIntensityBase      ( float value );

        bool                    GetFluidFrictionBirthUseIntensity       () const;
        void                    SetFluidFrictionBirthUseIntensity       ( bool value );

        float                   GetFluidFrictionBirthVariation          () const;
        void                    SetFluidFrictionBirthVariation          ( float value );

        class CPlugParticleGpuModel* GetGpuModel                             () const;
        void                    SetGpuModel                             ( class CPlugParticleGpuModel* value );

        class CPlugParticleGpuSpawn* GetGpuSpawn                             () const;
        void                    SetGpuSpawn                             ( class CPlugParticleGpuSpawn* value );

        class CFuncEnvelope*    GetIntensityFilter                      () const;
        void                    SetIntensityFilter                      ( class CFuncEnvelope* value );

        bool                    GetIsActive                             () const;
        void                    SetIsActive                             ( bool value );

        bool                    GetIsSolo                               () const;
        void                    SetIsSolo                               ( bool value );

        float                   GetLife                                 () const;
        void                    SetLife                                 ( float value );

        uint                    GetLifePeriodMs_OnePart                 () const;
        void                    SetLifePeriodMs_OnePart                 ( uint value );

        float                   GetLifeVariation                        () const;
        void                    SetLifeVariation                        ( float value );

        class GxLightBall*      GetLight                                () const;
        void                    SetLight                                ( class GxLightBall* value );

        class CFuncColorGradient* GetLightColorOverLife                   () const;
        void                    SetLightColorOverLife                   ( class CFuncColorGradient* value );

        class CFuncEnvelope*    GetLightRadiusOverLife                  () const;
        void                    SetLightRadiusOverLife                  ( class CFuncEnvelope* value );

        bool                    GetLightUseEmitterHue                   () const;
        void                    SetLightUseEmitterHue                   ( bool value );

        class CPlugMaterial*    GetMaterial                             () const;
        void                    SetMaterial                             ( class CPlugMaterial* value );

        uint                    GetMaxParticleCount                     () const;
        void                    SetMaxParticleCount                     ( uint value );

        eMultiStateRenderMode   GetMultiStateRenderMode                 () const;
        void                    SetMultiStateRenderMode                 ( eMultiStateRenderMode value );

        bool                    GetMultiState_IsAsyncLink               () const;
        void                    SetMultiState_IsAsyncLink               ( bool value );

        bool                    GetPartChain_AddLinkOnDestroy           () const;
        void                    SetPartChain_AddLinkOnDestroy           ( bool value );

        uint                    GetPartChain_MaxCount                   () const;
        void                    SetPartChain_MaxCount                   ( uint value );

        uint                    GetPartChain_MaxPartPerChain            () const;
        void                    SetPartChain_MaxPartPerChain            ( uint value );

        eParticleEmitterSubModel GetParticleEmitterSubModel              () const;
        void                    SetParticleEmitterSubModel              ( eParticleEmitterSubModel value );

        bool                    GetPrecalcEnabled                       () const;
        void                    SetPrecalcEnabled                       ( bool value );

        uint                    GetPrecalcPartCount                     () const;
        void                    SetPrecalcPartCount                     ( uint value );

        uint                    GetPrecalcSampleRate                    () const;
        void                    SetPrecalcSampleRate                    ( uint value );

        bool                    GetRelativeToEmitter                    () const;
        void                    SetRelativeToEmitter                    ( bool value );

        float                   GetRollSpeedBirth                       () const;
        void                    SetRollSpeedBirth                       ( float value );

        float                   GetRollSpeedBirthVariation              () const;
        void                    SetRollSpeedBirthVariation              ( float value );

        class CPlugShader*      GetShader                               () const;
        void                    SetShader                               ( class CPlugShader* value );

        float                   GetSimulatedSmokeFilamentBaseStrength   () const;
        void                    SetSimulatedSmokeFilamentBaseStrength   ( float value );

        float                   GetSimulatedSmokeFilamentPositionRandomRadius() const;
        void                    SetSimulatedSmokeFilamentPositionRandomRadius( float value );

        float                   GetSimulatedSmokeFilamentPositionRandomness() const;
        void                    SetSimulatedSmokeFilamentPositionRandomness( float value );

        class CFuncKeysReal*    GetSimulatedSmokeFilamentStrengthOverLife() const;
        void                    SetSimulatedSmokeFilamentStrengthOverLife( class CFuncKeysReal* value );

        float                   GetSimulatedSmokeGravity                () const;
        void                    SetSimulatedSmokeGravity                ( float value );

        float                   GetSimulatedSmokeInfluenceRadius        () const;
        void                    SetSimulatedSmokeInfluenceRadius        ( float value );

        uint                    GetSimulatedSmokeLifeSpanMs             () const;
        void                    SetSimulatedSmokeLifeSpanMs             ( uint value );

        class CFuncKeysReal*    GetSimulatedSmokeParticleAlphaOverLife  () const;
        void                    SetSimulatedSmokeParticleAlphaOverLife  ( class CFuncKeysReal* value );

        color                   GetSimulatedSmokeParticleBaseColor      () const;
        void                    SetSimulatedSmokeParticleBaseColor      ( color value );

        float                   GetSimulatedSmokeParticleBaseSize       () const;
        void                    SetSimulatedSmokeParticleBaseSize       ( float value );

        float                   GetSimulatedSmokeParticleLifeDistance   () const;
        void                    SetSimulatedSmokeParticleLifeDistance   ( float value );

        float                   GetSimulatedSmokeParticlePositionRandomRadius() const;
        void                    SetSimulatedSmokeParticlePositionRandomRadius( float value );

        float                   GetSimulatedSmokeParticlePositionRandomness() const;
        void                    SetSimulatedSmokeParticlePositionRandomness( float value );

        class CFuncKeysReal*    GetSimulatedSmokeParticleSizeOverLife   () const;
        void                    SetSimulatedSmokeParticleSizeOverLife   ( class CFuncKeysReal* value );

        float                   GetSimulatedSmokeParticleSizeRandomness () const;
        void                    SetSimulatedSmokeParticleSizeRandomness ( float value );

        float                   GetSizeBirth                            () const;
        void                    SetSizeBirth                            ( float value );

        float                   GetSizeBirthEmissionZoneScale           () const;
        void                    SetSizeBirthEmissionZoneScale           ( float value );

        float                   GetSizeBirthRatioXY                     () const;
        void                    SetSizeBirthRatioXY                     ( float value );

        bool                    GetSizeBirthUseEmissionZone             () const;
        void                    SetSizeBirthUseEmissionZone             ( bool value );

        bool                    GetSizeBirthUseIntensity                () const;
        void                    SetSizeBirthUseIntensity                ( bool value );

        float                   GetSizeBirthVariation                   () const;
        void                    SetSizeBirthVariation                   ( float value );

        class CFuncEnvelope*    GetSizeOverLife                         () const;
        void                    SetSizeOverLife                         ( class CFuncEnvelope* value );

        bool                    GetSizeUseSizeX                         () const;
        void                    SetSizeUseSizeX                         ( bool value );

        class CFuncEnvelope*    GetSizeXOverLife                        () const;
        void                    SetSizeXOverLife                        ( class CFuncEnvelope* value );

        class CPlugSolid2Model* GetSolid2                               () const;
        void                    SetSolid2                               ( class CPlugSolid2Model* value );

        class CPlugVisualIndexedTriangles* GetSolidVisual                          () const;
        void                    SetSolidVisual                          ( class CPlugVisualIndexedTriangles* value );

        bool                    GetSortSprites                          () const;
        void                    SetSortSprites                          ( bool value );

        eSpawnCond              GetSpawnCond                            () const;
        void                    SetSpawnCond                            ( eSpawnCond value );

        uint                    GetSpawnEndTime                         () const;
        void                    SetSpawnEndTime                         ( uint value );

        float                   GetSpawnMinDist                         () const;
        void                    SetSpawnMinDist                         ( float value );

        float                   GetSpawnPeriod                          () const;
        void                    SetSpawnPeriod                          ( float value );

        uint                    GetSpawnStartTime                       () const;
        void                    SetSpawnStartTime                       ( uint value );

        class CPlugParticleSplashModel* GetSplashModel                          () const;
        void                    SetSplashModel                          ( class CPlugParticleSplashModel* value );

        Vec2D                   GetSpritePivotPoint                     () const;
        void                    SetSpritePivotPoint                     ( Vec2D value );

        eStandardRenderMode     GetStandardRenderMode                   () const;
        void                    SetStandardRenderMode                   ( eStandardRenderMode value );

        eTextureAtlas           GetTextureAtlas                         () const;
        void                    SetTextureAtlas                         ( eTextureAtlas value );

        uint                    GetTextureAtlasAnimationPeriodMs        () const;
        void                    SetTextureAtlasAnimationPeriodMs        ( uint value );

        bool                    GetTextureAtlasAnimationRandomPhase     () const;
        void                    SetTextureAtlasAnimationRandomPhase     ( bool value );

        uint                    GetTextureAtlasCount                    () const;
        void                    SetTextureAtlasCount                    ( uint value );

        uint                    GetTextureAtlasDimX                     () const;
        void                    SetTextureAtlasDimX                     ( uint value );

        uint                    GetTextureAtlasDimY                     () const;
        void                    SetTextureAtlasDimY                     ( uint value );

        uint                    GetTextureAtlasFixedIndex               () const;
        void                    SetTextureAtlasFixedIndex               ( uint value );

        bool                    GetTextureAtlasTopToBottom              () const;
        void                    SetTextureAtlasTopToBottom              ( bool value );

        float                   GetTransparencyBirth                    () const;
        void                    SetTransparencyBirth                    ( float value );

        bool                    GetTransparencyBirthUseIntensity        () const;
        void                    SetTransparencyBirthUseIntensity        ( bool value );

        float                   GetTransparencyBirthVariation           () const;
        void                    SetTransparencyBirthVariation           ( float value );

        class CFuncEnvelope*    GetTransparencyOverLife                 () const;
        void                    SetTransparencyOverLife                 ( class CFuncEnvelope* value );

        float                   GetUScaleDist                           () const;
        void                    SetUScaleDist                           ( float value );

        float                   GetVScaleDist                           () const;
        void                    SetVScaleDist                           ( float value );

        float                   GetViewDistMax                          () const;
        void                    SetViewDistMax                          ( float value );

        float                   GetWaterSplashVelY                      () const;
        void                    SetWaterSplashVelY                      ( float value );

        float                   GetWeightBirth                          () const;
        void                    SetWeightBirth                          ( float value );

        float                   GetWeightBirthVariation                 () const;
        void                    SetWeightBirthVariation                 ( float value );

