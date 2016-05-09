        enum { CLASSID = 0x0A10E000 };

        static CBoatParam*      CreateInstance ();

        enum eBoatType
        {
            BOATTYPE_MONOCOQUE,
            BOATTYPE_CATAMARAN,
            BOATTYPE_TRIMARAN
        };
        static std::wstring     BoatTypeToString                        ( eBoatType value );
        static eBoatType        ParseBoatType                           ( const std::wstring& wstrName );

        class CFuncKeysReal*    GetBSCoefFromHeelCurve                  () const;
        void                    SetBSCoefFromHeelCurve                  ( class CFuncKeysReal* value );

        eBoatType               GetBoatType                             () const;
        void                    SetBoatType                             ( eBoatType value );

        float                   GetBoatWidth                            () const;
        void                    SetBoatWidth                            ( float value );

        Vec3D                   GetCameraInsideB                        () const;
        void                    SetCameraInsideB                        ( Vec3D value );

        Vec3D                   GetCameraInsideE                        () const;
        void                    SetCameraInsideE                        ( Vec3D value );

        Vec3D                   GetCameraInsideE_Amplifior              () const;
        void                    SetCameraInsideE_Amplifior              ( Vec3D value );

        float                   GetDecelerationConstant                 () const;
        void                    SetDecelerationConstant                 ( float value );

        float                   GetDecelerationDynamic                  () const;
        void                    SetDecelerationDynamic                  ( float value );

        class CFuncCurvesReal*  GetDecelerationFromTillerCurves         () const;
        void                    SetDecelerationFromTillerCurves         ( class CFuncCurvesReal* value );

        class CFuncCurvesReal*  GetDecelerationFromTillerCurvesBearAway () const;
        void                    SetDecelerationFromTillerCurvesBearAway ( class CFuncCurvesReal* value );

        float                   GetDynamicAcceleration                  () const;
        void                    SetDynamicAcceleration                  ( float value );

        float                   GetExtraHullHeightDelta                 () const;
        void                    SetExtraHullHeightDelta                 ( float value );

        float                   GetFloating                             () const;
        void                    SetFloating                             ( float value );

        float                   GetFloatingDeltaY                       () const;
        void                    SetFloatingDeltaY                       ( float value );

        float                   GetFloatingForceFromImmersionNormed     () const;
        void                    SetFloatingForceFromImmersionNormed     ( float value );

        float                   GetFloatingForceFromImmersionNormedSq   () const;
        void                    SetFloatingForceFromImmersionNormedSq   ( float value );

        float                   GetFloatingForceFullImmersionDist       () const;
        void                    SetFloatingForceFullImmersionDist       ( float value );

        float                   GetFluidFrictionFront                   () const;
        void                    SetFluidFrictionFront                   ( float value );

        float                   GetFluidFrictionY                       () const;
        void                    SetFluidFrictionY                       ( float value );

        float                   GetGravity                              () const;
        void                    SetGravity                              ( float value );

        float                   GetHeelInertia                          () const;
        void                    SetHeelInertia                          ( float value );

        float                   GetHeelMax                              () const;
        void                    SetHeelMax                              ( float value );

        float                   GetHeelOscillation                      () const;
        void                    SetHeelOscillation                      ( float value );

        float                   GetHeelOscillationSpeed                 () const;
        void                    SetHeelOscillationSpeed                 ( float value );

        float                   GetHeelSpeed                            () const;
        void                    SetHeelSpeed                            ( float value );

        bool                    GetIsNewSailPhysics                     () const;
        void                    SetIsNewSailPhysics                     ( bool value );

        bool                    GetIsNewSeaPhysics                      () const;
        void                    SetIsNewSeaPhysics                      ( bool value );

        float                   GetLateralForceFromLateralSpeedSq       () const;
        void                    SetLateralForceFromLateralSpeedSq       ( float value );

        float                   GetOldAccelerationConstant              () const;
        void                    SetOldAccelerationConstant              ( float value );

        class CMwRefBuffer*     GetOldAnimList                          () const;
        void                    SetOldAnimList                          ( class CMwRefBuffer* value );

        class CFuncPathMesh*    GetOldFuncPathMesh                      () const;
        void                    SetOldFuncPathMesh                      ( class CFuncPathMesh* value );

        class CFuncPathMesh*    GetOldHeelCoefCurve                     () const;
        void                    SetOldHeelCoefCurve                     ( class CFuncPathMesh* value );

        float                   GetOldHeelLuff                          () const;
        void                    SetOldHeelLuff                          ( float value );

        class CMotionTeamManager* GetOldTeamManagerModel                  () const;
        void                    SetOldTeamManagerModel                  ( class CMotionTeamManager* value );

        float                   GetOldWreckAngle                        () const;
        void                    SetOldWreckAngle                        ( float value );

        float                   GetPitchInertia                         () const;
        void                    SetPitchInertia                         ( float value );

        float                   GetPitchOscillation                     () const;
        void                    SetPitchOscillation                     ( float value );

        float                   GetPitchOscillationSpeed                () const;
        void                    SetPitchOscillationSpeed                ( float value );

        float                   GetPitchSpeed                           () const;
        void                    SetPitchSpeed                           ( float value );

        float                   GetRollCoef                             () const;
        void                    SetRollCoef                             ( float value );

        float                   GetRotationRadius                       () const;
        void                    SetRotationRadius                       ( float value );

        List < nodptr<class CBoatSail> >& GetSails                                () const;
        void                    SetSails                                ( List < nodptr<class CBoatSail> >& value );

        List < nodptr<class CSceneToyStem> >& GetStemWaves                            () const;
        void                    SetStemWaves                            ( List < nodptr<class CSceneToyStem> >& value );

        float                   GetSurf                                 () const;
        void                    SetSurf                                 ( float value );

        class CBoatTeamDesc*    GetTeamDesc                             () const;
        void                    SetTeamDesc                             ( class CBoatTeamDesc* value );

        class CPlugSolid*       GetTeamMateModelFid                     () const;
        void                    SetTeamMateModelFid                     ( class CPlugSolid* value );

        Id                      GetTeamMateTreeToFollowId               () const;
        void                    SetTeamMateTreeToFollowId               ( Id value );

        float                   GetTillerAngleMax                       () const;
        void                    SetTillerAngleMax                       ( float value );

        float                   GetTillerInertia                        () const;
        void                    SetTillerInertia                        ( float value );

        float                   GetWaterLineHeightDelta                 () const;
        void                    SetWaterLineHeightDelta                 ( float value );

        Vec3D                   GetWindIndicatorDistance                () const;
        void                    SetWindIndicatorDistance                ( Vec3D value );

        class CMotionWindBlocker* GetWindShadow                           () const;
        void                    SetWindShadow                           ( class CMotionWindBlocker* value );

        float                   Getm_CollisionSoundBoatSpeedDeltaThreshold() const;
        void                    Setm_CollisionSoundBoatSpeedDeltaThreshold( float value );

