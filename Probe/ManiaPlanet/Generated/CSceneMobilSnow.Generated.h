        enum { CLASSID = 0x0A070000 };

        static CSceneMobilSnow* CreateInstance ();

        enum eEditKind
        {
            EDITKIND_SNOW,
            EDITKIND_RAIN,
            EDITKIND_SUSPENSION,
            EDITKIND_KANJI,
            EDITKIND_POLLEN,
            EDITKIND_STARS
        };
        static std::wstring     EditKindToString                        ( eEditKind value );
        static eEditKind        ParseEditKind                           ( const std::wstring& wstrName );

        enum eKind
        {
            KIND_SNOW,
            KIND_RAIN,
            KIND_SUSPENSION,
            KIND_KANJI,
            KIND_POLLEN,
            KIND_STARS
        };
        static std::wstring     KindToString                            ( eKind value );
        static eKind            ParseKind                               ( const std::wstring& wstrName );

        float                   GetDiam                                 () const;
        void                    SetDiam                                 ( float value );

        class CPlugBitmap*      GetEditBitmap                           () const;
        void                    SetEditBitmap                           ( class CPlugBitmap* value );

        eEditKind               GetEditKind                             () const;
        void                    SetEditKind                             ( eEditKind value );

        uint                    GetEditParticleCount                    () const;
        void                    SetEditParticleCount                    ( uint value );

        float                   GetFarZ                                 () const;
        void                    SetFarZ                                 ( float value );

        float                   GetIntensity                            () const;
        void                    SetIntensity                            ( float value );

        eKind                   GetKind                                 () const;
        void                    SetKind                                 ( eKind value );

        uint                    GetLifeSpan                             () const;
        void                    SetLifeSpan                             ( uint value );

        float                   GetParam1                               () const;
        void                    SetParam1                               ( float value );

        bool                    GetWindRotate                           () const;
        void                    SetWindRotate                           ( bool value );

        float                   GetXYRatio                              () const;
        void                    SetXYRatio                              ( float value );

        void                    EditInit                                ();
