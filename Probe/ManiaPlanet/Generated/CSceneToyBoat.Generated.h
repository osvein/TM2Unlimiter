        enum { CLASSID = 0x0A100000 };

        static CSceneToyBoat*   CreateInstance ();

        float                   GetAWADeg                               () const;
        void                    SetAWADeg                               ( float value );

        float                   GetAWSKnot                              () const;
        void                    SetAWSKnot                              ( float value );

        float                   GetBSAvgKnot                            () const;
        void                    SetBSAvgKnot                            ( float value );

        float                   GetBSKnot                               () const;
        void                    SetBSKnot                               ( float value );

        float                   GetBSTheoricalKnot                      () const;
        void                    SetBSTheoricalKnot                      ( float value );

        float                   GetCOGAvgDeg                            () const;
        void                    SetCOGAvgDeg                            ( float value );

        float                   GetContactForceFluidFrictionCoef        () const;
        void                    SetContactForceFluidFrictionCoef        ( float value );

        float                   GetContactRelSpeedMultCoef              () const;
        void                    SetContactRelSpeedMultCoef              ( float value );

        float                   GetContactRotationImpulseCoef           () const;
        void                    SetContactRotationImpulseCoef           ( float value );

        bool                    GetDbgEngine                            () const;
        void                    SetDbgEngine                            ( bool value );

        float                   GetDbgEngineSpeedKnot                   () const;
        void                    SetDbgEngineSpeedKnot                   ( float value );

        float                   GetGamePlayCoef_BSCatchBack             () const;
        void                    SetGamePlayCoef_BSCatchBack             ( float value );

        float                   GetGamePlayCoef_BSGeneral               () const;
        void                    SetGamePlayCoef_BSGeneral               ( float value );

        float                   GetGamePlayCoef_BSLevel                 () const;
        void                    SetGamePlayCoef_BSLevel                 ( float value );

        float                   GetGamePlayCoef_BSManoeuvre             () const;
        void                    SetGamePlayCoef_BSManoeuvre             ( float value );

        float                   GetGamePlayCoef_BSNoSpi                 () const;
        void                    SetGamePlayCoef_BSNoSpi                 ( float value );

        float                   GetGamePlayCoef_BSSpi                   () const;
        void                    SetGamePlayCoef_BSSpi                   ( float value );

        float                   GetHdgDeg                               () const;
        void                    SetHdgDeg                               ( float value );

        float                   GetHeelDeg                              () const;
        void                    SetHeelDeg                              ( float value );

        class CBoatParam*       GetParams                               () const;
        void                    SetParams                               ( class CBoatParam* value );

        float                   GetRealBoatLength                       () const;
        void                    SetRealBoatLength                       ( float value );

        float                   GetRealBoatWidth                        () const;
        void                    SetRealBoatWidth                        ( float value );

        float                   GetReplacementStepLength                () const;
        void                    SetReplacementStepLength                ( float value );

        float                   GetSOGAvgKnot                           () const;
        void                    SetSOGAvgKnot                           ( float value );

        List < nodptr<class CBoatSail> >& GetSailStates                           () const;
        void                    SetSailStates                           ( List < nodptr<class CBoatSail> >& value );

        class CPlugParticleEmitterModel* GetSplashEmitterModel                   () const;
        void                    SetSplashEmitterModel                   ( class CPlugParticleEmitterModel* value );

        bool                    GetStemWavesVisible                     () const;
        void                    SetStemWavesVisible                     ( bool value );

        float                   GetStreamDirectionDeg                   () const;
        void                    SetStreamDirectionDeg                   ( float value );

        float                   GetStreamSpeedKnot                      () const;
        void                    SetStreamSpeedKnot                      ( float value );

        float                   GetTWADeg                               () const;
        void                    SetTWADeg                               ( float value );

        float                   GetTWDDeg                               () const;
        void                    SetTWDDeg                               ( float value );

        float                   GetTWDWorldDeg                          () const;
        void                    SetTWDWorldDeg                          ( float value );

        float                   GetTWSKnot                              () const;
        void                    SetTWSKnot                              ( float value );

        float                   GetTWSWorldKnot                         () const;
        void                    SetTWSWorldKnot                         ( float value );

        bool                    GetTeamMatesVisible                     () const;
        void                    SetTeamMatesVisible                     ( bool value );

        float                   GetTillerTargetAngle                    () const;
        void                    SetTillerTargetAngle                    ( float value );

        bool                    GetWindIndicatorVisible                 () const;
        void                    SetWindIndicatorVisible                 ( bool value );

        class CMotionWindBlocker* GetWindShadow                           () const;
        void                    SetWindShadow                           ( class CMotionWindBlocker* value );

        void                    ChangeSail                              ();
        void                    EdBoatCreate                            ();
        void                    ResetLocation                           ();
        void                    RetrieveSounds                          ();
