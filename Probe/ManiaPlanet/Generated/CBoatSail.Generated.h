        enum { CLASSID = 0x0A10B000 };

        static CBoatSail*       CreateInstance ();

        enum eSailType
        {
            SAILTYPE_MAINSAIL,
            SAILTYPE_GENOA,
            SAILTYPE_SPI,
            SAILTYPE_CODE0,
            SAILTYPE_STAYSAIL,
            SAILTYPE_SPIASYM,
            SAILTYPE_NONE
        };
        static std::wstring     SailTypeToString                        ( eSailType value );
        static eSailType        ParseSailType                           ( const std::wstring& wstrName );

        class CFuncCurvesReal*  GetAccelerationCurves                   () const;
        void                    SetAccelerationCurves                   ( class CFuncCurvesReal* value );

        float                   GetAutomaticSheetTargetSpeed            () const;
        void                    SetAutomaticSheetTargetSpeed            ( float value );

        class CFuncCurves2Real* GetBSCoefCurves                         () const;
        void                    SetBSCoefCurves                         ( class CFuncCurves2Real* value );

        class CFuncCurvesReal*  GetBoomAngleCurves                      () const;
        void                    SetBoomAngleCurves                      ( class CFuncCurvesReal* value );

        Id                      GetBoomId                               () const;
        void                    SetBoomId                               ( Id value );

        float                   GetBoomSpeed                            () const;
        void                    SetBoomSpeed                            ( float value );

        float                   GetBulgeIntens                          () const;
        void                    SetBulgeIntens                          ( float value );

        float                   GetBulgeSpeed                           () const;
        void                    SetBulgeSpeed                           ( float value );

        class CFuncCurves2Real* GetHeelAngleCoefCurves                  () const;
        void                    SetHeelAngleCoefCurves                  ( class CFuncCurves2Real* value );

        class CFuncCurvesReal*  GetHeelAngleCurves                      () const;
        void                    SetHeelAngleCurves                      ( class CFuncCurvesReal* value );

        bool                    GetIsReefingGear                        () const;
        void                    SetIsReefingGear                        ( bool value );

        class CFuncCurvesReal*  GetLuffAngleSpeedCurves                 () const;
        void                    SetLuffAngleSpeedCurves                 ( class CFuncCurvesReal* value );

        class CManoeuvre*       GetManoeuvreHaulDown                    () const;
        void                    SetManoeuvreHaulDown                    ( class CManoeuvre* value );

        class CManoeuvre*       GetManoeuvreHaulUp                      () const;
        void                    SetManoeuvreHaulUp                      ( class CManoeuvre* value );

        class CManoeuvre*       GetManoeuvrePrepareHaulDown             () const;
        void                    SetManoeuvrePrepareHaulDown             ( class CManoeuvre* value );

        class CManoeuvre*       GetManoeuvrePrepareHaulUp               () const;
        void                    SetManoeuvrePrepareHaulUp               ( class CManoeuvre* value );

        float                   GetOldHeelCoef                          () const;
        void                    SetOldHeelCoef                          ( float value );

        float                   GetOldLuffBlockadeBsSlowDown            () const;
        void                    SetOldLuffBlockadeBsSlowDown            ( float value );

        float                   GetOldLuffBlockadeWindAngle             () const;
        void                    SetOldLuffBlockadeWindAngle             ( float value );

        float                   GetOldLuffLimitBsSlowDown               () const;
        void                    SetOldLuffLimitBsSlowDown               ( float value );

        float                   GetOldLuffLimitWindAngle                () const;
        void                    SetOldLuffLimitWindAngle                ( float value );

        class CFuncCurvesReal*  GetOptimalSailAngleCurves               () const;
        void                    SetOptimalSailAngleCurves               ( class CFuncCurvesReal* value );

        List < nodptr<class CFuncCurvesReal> >& GetOptimalSailAngleCurvesArray          () const;
        void                    SetOptimalSailAngleCurvesArray          ( List < nodptr<class CFuncCurvesReal> >& value );

        class CFuncCurvesReal*  GetRevolveAngleSpeedCurves              () const;
        void                    SetRevolveAngleSpeedCurves              ( class CFuncCurvesReal* value );

        Id                      GetSailFlatId                           () const;
        void                    SetSailFlatId                           ( Id value );

        Id                      GetSailId                               () const;
        void                    SetSailId                               ( Id value );

        float                   GetSailSpeedCoefEaseOut                 () const;
        void                    SetSailSpeedCoefEaseOut                 ( float value );

        float                   GetSailSpeedCoefSheet                   () const;
        void                    SetSailSpeedCoefSheet                   ( float value );

        eSailType               GetSailType                             () const;
        void                    SetSailType                             ( eSailType value );

        float                   GetSheetAngleMax                        () const;
        void                    SetSheetAngleMax                        ( float value );

        class CFuncKeysReal*    GetSheetAngleMaxCurve                   () const;
        void                    SetSheetAngleMaxCurve                   ( class CFuncKeysReal* value );

        float                   GetSheetAngleMin                        () const;
        void                    SetSheetAngleMin                        ( float value );

        class CFuncKeysReal*    GetShiverAngleCurve                     () const;
        void                    SetShiverAngleCurve                     ( class CFuncKeysReal* value );

        bool                    GetShiverWindFree                       () const;
        void                    SetShiverWindFree                       ( bool value );

        float                   GetVisualHaulDelta                      () const;
        void                    SetVisualHaulDelta                      ( float value );

        float                   GetVisualShiverAmplitude                () const;
        void                    SetVisualShiverAmplitude                ( float value );

        float                   GetVisualShiverSpeedCoef                () const;
        void                    SetVisualShiverSpeedCoef                ( float value );

        float                   GetVisualShiverSpeedMax                 () const;
        void                    SetVisualShiverSpeedMax                 ( float value );

        class CFuncCurvesReal*  GetVppCurves                            () const;
        void                    SetVppCurves                            ( class CFuncCurvesReal* value );

