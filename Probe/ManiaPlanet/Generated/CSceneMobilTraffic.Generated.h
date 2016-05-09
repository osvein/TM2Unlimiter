        enum { CLASSID = 0x0A068000 };

        static CSceneMobilTraffic* CreateInstance ();

        enum eKind
        {
            KIND_SMOOTH_TURNS,
            KIND_SHARP_TURNS
        };
        static std::wstring     KindToString                            ( eKind value );
        static eKind            ParseKind                               ( const std::wstring& wstrName );

        enum eSpeed
        {
            SPEED_SLOW,
            SPEED_AVERAGE,
            SPEED_FAST
        };
        static std::wstring     SpeedToString                           ( eSpeed value );
        static eSpeed           ParseSpeed                              ( const std::wstring& wstrName );

        eKind                   GetKind                                 () const;
        void                    SetKind                                 ( eKind value );

        eSpeed                  GetSpeed                                () const;
        void                    SetSpeed                                ( eSpeed value );

        class CSceneTrafficPath* GetTrafficPath                          () const;
        void                    SetTrafficPath                          ( class CSceneTrafficPath* value );

        float                   GetTrafficPathTimeOffset                () const;
        void                    SetTrafficPathTimeOffset                ( float value );

