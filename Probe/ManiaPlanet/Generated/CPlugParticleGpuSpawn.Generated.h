        enum { CLASSID = 0x090C5000 };

        static CPlugParticleGpuSpawn* CreateInstance ();

        enum ePosition
        {
            POSITION_POINT,
            POSITION_SPHERE,
            POSITION_DISC,
            POSITION_BOX
        };
        static std::wstring     PositionToString                        ( ePosition value );
        static ePosition        ParsePosition                           ( const std::wstring& wstrName );

        enum eSpawn
        {
            SPAWN_SPLASH,
            SPAWN_CONTINUOUS
        };
        static std::wstring     SpawnToString                           ( eSpawn value );
        static eSpawn           ParseSpawn                              ( const std::wstring& wstrName );

        StringA                 GetLblPosition                          () const;
        void                    SetLblPosition                          ( StringA value );

        StringA                 GetLblVelocity                          () const;
        void                    SetLblVelocity                          ( StringA value );

        float                   GetPosB_CenterX                         () const;
        void                    SetPosB_CenterX                         ( float value );

        float                   GetPosB_CenterY                         () const;
        void                    SetPosB_CenterY                         ( float value );

        float                   GetPosB_CenterZ                         () const;
        void                    SetPosB_CenterZ                         ( float value );

        float                   GetPosB_HDiagX                          () const;
        void                    SetPosB_HDiagX                          ( float value );

        float                   GetPosB_HDiagY                          () const;
        void                    SetPosB_HDiagY                          ( float value );

        float                   GetPosB_HDiagZ                          () const;
        void                    SetPosB_HDiagZ                          ( float value );

        float                   GetPosD_MaxZ                            () const;
        void                    SetPosD_MaxZ                            ( float value );

        float                   GetPosD_MinZ                            () const;
        void                    SetPosD_MinZ                            ( float value );

        float                   GetPosD_RadiusMax                       () const;
        void                    SetPosD_RadiusMax                       ( float value );

        float                   GetPosD_RadiusMin                       () const;
        void                    SetPosD_RadiusMin                       ( float value );

        float                   GetPosS_PitchMaxDegree                  () const;
        void                    SetPosS_PitchMaxDegree                  ( float value );

        float                   GetPosS_PitchMinDegree                  () const;
        void                    SetPosS_PitchMinDegree                  ( float value );

        float                   GetPosS_RadiusMax                       () const;
        void                    SetPosS_RadiusMax                       ( float value );

        float                   GetPosS_RadiusMin                       () const;
        void                    SetPosS_RadiusMin                       ( float value );

        ePosition               GetPosition                             () const;
        void                    SetPosition                             ( ePosition value );

        eSpawn                  GetSpawn                                () const;
        void                    SetSpawn                                ( eSpawn value );

        float                   GetVelEmitterCoef                       () const;
        void                    SetVelEmitterCoef                       ( float value );

        float                   GetVelLength                            () const;
        void                    SetVelLength                            ( float value );

        float                   GetVelLengthVariation                   () const;
        void                    SetVelLengthVariation                   ( float value );

        float                   GetVelPitchMax                          () const;
        void                    SetVelPitchMax                          ( float value );

        float                   GetVelPitchMin                          () const;
        void                    SetVelPitchMin                          ( float value );

        float                   GetcParticlePerSecond                   () const;
        void                    SetcParticlePerSecond                   ( float value );

        uint                    GetcParticleSplash                      () const;
        void                    SetcParticleSplash                      ( uint value );

