        enum { CLASSID = 0x05016000 };

        static CFuncShaderFxFactor* CreateInstance ();

        enum eMapFx
        {
            MAPFX_SELFILLUMLUMINANCE,
            MAPFX_LIGHTMAPINTENSITY
        };
        static std::wstring     MapFxToString                           ( eMapFx value );
        static eMapFx           ParseMapFx                              ( const std::wstring& wstrName );

        enum eType
        {
            TYPE_LINEAR,
            TYPE_SMOOTH,
            TYPE_REFRESH_GLOW
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        float                   GetAmplitude                            () const;
        void                    SetAmplitude                            ( float value );

        float                   GetBase                                 () const;
        void                    SetBase                                 ( float value );

        eMapFx                  GetMapFx                                () const;
        void                    SetMapFx                                ( eMapFx value );

        float                   GetOffset                               () const;
        void                    SetOffset                               ( float value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

