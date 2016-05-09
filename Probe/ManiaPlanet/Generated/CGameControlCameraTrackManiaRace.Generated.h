        enum { CLASSID = 0x24085000 };

        static CGameControlCameraTrackManiaRace* CreateInstance ();

        float                   GetCarCameraAlign                       () const;
        void                    SetCarCameraAlign                       ( float value );

        float                   GetCarCameraDistance                    () const;
        void                    SetCarCameraDistance                    ( float value );

        float                   GetCarCameraHeight                      () const;
        void                    SetCarCameraHeight                      ( float value );

        float                   GetCarCameraTargetDistance              () const;
        void                    SetCarCameraTargetDistance              ( float value );

        float                   GetConeAperture                         () const;
        void                    SetConeAperture                         ( float value );

        float                   GetConeMaxSpeed                         () const;
        void                    SetConeMaxSpeed                         ( float value );

        float                   GetConeMinSpeed                         () const;
        void                    SetConeMinSpeed                         ( float value );

        bool                    GetIsSegmentCast                        () const;
        void                    SetIsSegmentCast                        ( bool value );

        float                   GetSegmentCastLength                    () const;
        void                    SetSegmentCastLength                    ( float value );

        float                   GetSegmentCastMinDist                   () const;
        void                    SetSegmentCastMinDist                   ( float value );

        bool                    GetUseSpeedDir                          () const;
        void                    SetUseSpeedDir                          ( bool value );

