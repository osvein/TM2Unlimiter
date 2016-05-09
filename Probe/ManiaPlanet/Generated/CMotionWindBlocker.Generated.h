        enum { CLASSID = 0x08051000 };

        static CMotionWindBlocker* CreateInstance ();

        float                   GetBlockerBase                          () const;
        void                    SetBlockerBase                          ( float value );

        float                   GetBlockerBaseXCenter                   () const;
        void                    SetBlockerBaseXCenter                   ( float value );

        float                   GetBlockerBaseXCenterVal                () const;
        void                    SetBlockerBaseXCenterVal                ( float value );

        float                   GetBlockerBaseXMult                     () const;
        void                    SetBlockerBaseXMult                     ( float value );

        float                   GetBlockerCoeffX                        () const;
        void                    SetBlockerCoeffX                        ( float value );

        float                   GetBlockerCoeffY                        () const;
        void                    SetBlockerCoeffY                        ( float value );

        float                   GetBlockerCoeffYMax                     () const;
        void                    SetBlockerCoeffYMax                     ( float value );

        float                   GetBlockerOffsetX                       () const;
        void                    SetBlockerOffsetX                       ( float value );

        float                   GetBlockerPosRatio                      () const;
        void                    SetBlockerPosRatio                      ( float value );

        float                   GetBlockerValXCoeff                     () const;
        void                    SetBlockerValXCoeff                     ( float value );

        float                   GetHeight                               () const;
        void                    SetHeight                               ( float value );

        Vec2D                   GetPos0                                 () const;
        void                    SetPos0                                 ( Vec2D value );

        Vec2D                   GetPos1                                 () const;
        void                    SetPos1                                 ( Vec2D value );

        float                   GetSecondSegmentCenterRatio             () const;
        void                    SetSecondSegmentCenterRatio             ( float value );

        float                   GetSecondSegmentLength                  () const;
        void                    SetSecondSegmentLength                  ( float value );

        float                   GetSillageAngleDeviationDiv             () const;
        void                    SetSillageAngleDeviationDiv             ( float value );

        float                   GetSillageBase                          () const;
        void                    SetSillageBase                          ( float value );

        float                   GetSillageCoeffX                        () const;
        void                    SetSillageCoeffX                        ( float value );

        float                   GetSillageCoeffY                        () const;
        void                    SetSillageCoeffY                        ( float value );

        float                   GetSillageCoeffYRot                     () const;
        void                    SetSillageCoeffYRot                     ( float value );

        float                   GetSillageFadderAwa                     () const;
        void                    SetSillageFadderAwa                     ( float value );

        float                   GetSillageMaxAwa                        () const;
        void                    SetSillageMaxAwa                        ( float value );

        float                   GetSillageOffsetMult                    () const;
        void                    SetSillageOffsetMult                    ( float value );

        float                   GetSillageRotAwa                        () const;
        void                    SetSillageRotAwa                        ( float value );

        float                   GetSizeF7F3Ratio                        () const;
        void                    SetSizeF7F3Ratio                        ( float value );

        float                   GetTurbulenceAngleDeviationMult         () const;
        void                    SetTurbulenceAngleDeviationMult         ( float value );

        float                   GetTurbulenceBase                       () const;
        void                    SetTurbulenceBase                       ( float value );

        float                   GetTurbulenceBaseXCenter                () const;
        void                    SetTurbulenceBaseXCenter                ( float value );

        float                   GetTurbulenceBaseXCenterVal             () const;
        void                    SetTurbulenceBaseXCenterVal             ( float value );

        float                   GetTurbulenceBaseXMult                  () const;
        void                    SetTurbulenceBaseXMult                  ( float value );

        float                   GetTurbulenceCoeffX                     () const;
        void                    SetTurbulenceCoeffX                     ( float value );

        float                   GetTurbulenceCoeffY                     () const;
        void                    SetTurbulenceCoeffY                     ( float value );

        float                   GetTurbulenceFadderAwa                  () const;
        void                    SetTurbulenceFadderAwa                  ( float value );

        float                   GetTurbulenceMaxAwa                     () const;
        void                    SetTurbulenceMaxAwa                     ( float value );

        float                   GetTurbulencePosRatio                   () const;
        void                    SetTurbulencePosRatio                   ( float value );

        bool                    GetUseNewWindShadowing                  () const;
        void                    SetUseNewWindShadowing                  ( bool value );

        float                   GetWindDirDevCoef                       () const;
        void                    SetWindDirDevCoef                       ( float value );

        float                   GetWindDirDevMax                        () const;
        void                    SetWindDirDevMax                        ( float value );

