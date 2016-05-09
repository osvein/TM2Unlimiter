        enum { CLASSID = 0x0A05E000 };

        static CSceneMobilLeaves* CreateInstance ();

        float                   GetCurvature                            () const;
        void                    SetCurvature                            ( float value );

        float                   GetFarZ                                 () const;
        void                    SetFarZ                                 ( float value );

        float                   GetLeafAlphaSpeedMax                    () const;
        void                    SetLeafAlphaSpeedMax                    ( float value );

        float                   GetLeafBetaSpeedlMax                    () const;
        void                    SetLeafBetaSpeedlMax                    ( float value );

        uint                    GetLeafEmitterMaxCount                  () const;
        void                    SetLeafEmitterMaxCount                  ( uint value );

        float                   GetLeafFallingSpeedBase                 () const;
        void                    SetLeafFallingSpeedBase                 ( float value );

        float                   GetLeafFallingSpeedRandom               () const;
        void                    SetLeafFallingSpeedRandom               ( float value );

        uint                    GetLeafMaxCount                         () const;
        void                    SetLeafMaxCount                         ( uint value );

        float                   GetLeafOscillationAmplitudeBase         () const;
        void                    SetLeafOscillationAmplitudeBase         ( float value );

        float                   GetLeafOscillationAmplitudeRandom       () const;
        void                    SetLeafOscillationAmplitudeRandom       ( float value );

        float                   GetLeafOscillationPeriodBase            () const;
        void                    SetLeafOscillationPeriodBase            ( float value );

        float                   GetLeafOscillationPeriodRandom          () const;
        void                    SetLeafOscillationPeriodRandom          ( float value );

        float                   GetLeafRadiusBase                       () const;
        void                    SetLeafRadiusBase                       ( float value );

        float                   GetLeafRadiusRandom                     () const;
        void                    SetLeafRadiusRandom                     ( float value );

        class CPlugShader*      GetLeafShader                           () const;
        void                    SetLeafShader                           ( class CPlugShader* value );

        float                   GetRespawnPeriod                        () const;
        void                    SetRespawnPeriod                        ( float value );

        Vec3D                   GetWind                                 () const;
        void                    SetWind                                 ( Vec3D value );

        void                    ResetLeaves                             ();
