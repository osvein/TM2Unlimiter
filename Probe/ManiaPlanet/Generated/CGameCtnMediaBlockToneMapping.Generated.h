        enum { CLASSID = 0x03127000 };

        static CGameCtnMediaBlockToneMapping* CreateInstance ();

        enum eFilmCurve
        {
            FILMCURVE_DISABLE,
            FILMCURVE_PRESET1,
            FILMCURVE_PRESET2,
            FILMCURVE_PRESET3
        };
        static std::wstring     FilmCurveToString                       ( eFilmCurve value );
        static eFilmCurve       ParseFilmCurve                          ( const std::wstring& wstrName );

        float                   GetExposure                             () const;
        void                    SetExposure                             ( float value );

        eFilmCurve              GetFilmCurve                            () const;
        void                    SetFilmCurve                            ( eFilmCurve value );

        float                   GetMaxHDR                               () const;
        void                    SetMaxHDR                               ( float value );

