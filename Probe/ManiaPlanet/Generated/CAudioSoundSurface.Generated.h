        enum { CLASSID = 0x10006000 };

        static CAudioSoundSurface* CreateInstance ();

        enum eSurfaceId
        {
            SURFACEID_CONCRETE,
            SURFACEID_PAVEMENT,
            SURFACEID_GRASS,
            SURFACEID_ICE,
            SURFACEID_METAL,
            SURFACEID_SAND,
            SURFACEID_DIRT,
            SURFACEID_TURBO,
            SURFACEID_DIRTROAD,
            SURFACEID_RUBBER,
            SURFACEID_SLIDINGRUBBER,
            SURFACEID_TEST,
            SURFACEID_ROCK,
            SURFACEID_WATER,
            SURFACEID_WOOD,
            SURFACEID_DANGER,
            SURFACEID_ASPHALT,
            SURFACEID_WETDIRTROAD,
            SURFACEID_WETASPHALT,
            SURFACEID_WETPAVEMENT,
            SURFACEID_WETGRASS,
            SURFACEID_SNOW,
            SURFACEID_RESONANTMETAL,
            SURFACEID_GOLFBALL,
            SURFACEID_GOLFWALL,
            SURFACEID_GOLFGROUND,
            SURFACEID_TURBO2,
            SURFACEID_BUMPER,
            SURFACEID_NOTCOLLIDABLE,
            SURFACEID_FREEWHEELING,
            SURFACEID_TURBOROULETTE,
            SURFACEID_WALLJUMP,
            SURFACEID_METALTRANS,
            SURFACEID_STONE,
            SURFACEID_PLAYER,
            SURFACEID_TRUNK,
            SURFACEID_TECHLASER,
            SURFACEID_SLIDINGWOOD,
            SURFACEID_PLAYERONLY,
            SURFACEID_TECH,
            SURFACEID_TECHARMOR,
            SURFACEID_TECHSAFE,
            SURFACEID_OFFZONE,
            SURFACEID_BULLET,
            SURFACEID_TECHHOOK
        };
        static std::wstring     SurfaceIdToString                       ( eSurfaceId value );
        static eSurfaceId       ParseSurfaceId                          ( const std::wstring& wstrName );

        uint                    GetImpact                               () const;
        void                    SetImpact                               ( uint value );

        float                   GetSkidIntensity                        () const;
        void                    SetSkidIntensity                        ( float value );

        float                   GetSpeed                                () const;
        void                    SetSpeed                                ( float value );

        float                   GetSpeedNormalised                      () const;
        void                    SetSpeedNormalised                      ( float value );

        eSurfaceId              GetSurfaceId                            () const;
        void                    SetSurfaceId                            ( eSurfaceId value );

