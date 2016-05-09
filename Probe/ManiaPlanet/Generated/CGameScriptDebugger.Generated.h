        enum { CLASSID = 0x0308D000 };

        static CGameScriptDebugger* CreateInstance ();

        enum eVisibility
        {
            VISIBILITY_HIDDEN,
            VISIBILITY_REDUCED,
            VISIBILITY_FULL
        };
        static std::wstring     VisibilityToString                      ( eVisibility value );
        static eVisibility      ParseVisibility                         ( const std::wstring& wstrName );

        eVisibility             GetVisibility                           () const;
        void                    SetVisibility                           ( eVisibility value );

