        enum { CLASSID = 0x090B5000 };

        static CPlugParticleSplashModel* CreateInstance ();

        enum ePosType
        {
            POSTYPE_FIXED,
            POSTYPE_RANDOMINZONE,
            POSTYPE_FIXEDPOSTIMEHALFSIZE,
            POSTYPE_RANDOMINELLIPSOID,
            POSTYPE_RANDOMONCIRCLEXY,
            POSTYPE_RANDOMONCIRCLEXZ
        };
        static std::wstring     PosTypeToString                         ( ePosType value );
        static ePosType         ParsePosType                            ( const std::wstring& wstrName );

        float                   GetNormalVel                            () const;
        void                    SetNormalVel                            ( float value );

        float                   GetNormalVelVariation                   () const;
        void                    SetNormalVelVariation                   ( float value );

        bool                    GetOrientationOffset                    () const;
        void                    SetOrientationOffset                    ( bool value );

        float                   GetPitch                                () const;
        void                    SetPitch                                ( float value );

        float                   GetPitchVariation                       () const;
        void                    SetPitchVariation                       ( float value );

        Vec3D                   GetPos                                  () const;
        void                    SetPos                                  ( Vec3D value );

        ePosType                GetPosType                              () const;
        void                    SetPosType                              ( ePosType value );

        float                   GetRoll                                 () const;
        void                    SetRoll                                 ( float value );

        float                   GetRollVariation                        () const;
        void                    SetRollVariation                        ( float value );

        Vec3D                   GetSizeScale                            () const;
        void                    SetSizeScale                            ( Vec3D value );

        uint                    GetSplashCount                          () const;
        void                    SetSplashCount                          ( uint value );

        bool                    GetVelAlongDir                          () const;
        void                    SetVelAlongDir                          ( bool value );

        float                   GetVelBaseCoef                          () const;
        void                    SetVelBaseCoef                          ( float value );

        float                   GetVelLength                            () const;
        void                    SetVelLength                            ( float value );

        float                   GetVelLengthVariation                   () const;
        void                    SetVelLengthVariation                   ( float value );

        float                   GetVelPitch                             () const;
        void                    SetVelPitch                             ( float value );

        float                   GetVelPitchVariation                    () const;
        void                    SetVelPitchVariation                    ( float value );

        float                   GetVelYaw                               () const;
        void                    SetVelYaw                               ( float value );

        float                   GetVelYawVariation                      () const;
        void                    SetVelYawVariation                      ( float value );

        float                   GetYaw                                  () const;
        void                    SetYaw                                  ( float value );

        float                   GetYawVariation                         () const;
        void                    SetYawVariation                         ( float value );

