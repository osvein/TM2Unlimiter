        enum { CLASSID = 0x0500A000 };

        static CFuncKeysPath*   CreateInstance ();

        enum eDrawMode
        {
            DRAWMODE_LINE,
            DRAWMODE_BSPLINE,
            DRAWMODE_BSPLINETENSION,
            DRAWMODE_BSPLINEBIAS,
            DRAWMODE_BEZIERSPLINE,
            DRAWMODE_BETASPLINE,
            DRAWMODE_HERMITE
        };
        static std::wstring     DrawModeToString                        ( eDrawMode value );
        static eDrawMode        ParseDrawMode                           ( const std::wstring& wstrName );

        float                   GetBSplineBias                          () const;
        void                    SetBSplineBias                          ( float value );

        float                   GetBSplineTension                       () const;
        void                    SetBSplineTension                       ( float value );

        float                   GetBetaSplineSkew                       () const;
        void                    SetBetaSplineSkew                       ( float value );

        float                   GetBetaSplineTension                    () const;
        void                    SetBetaSplineTension                    ( float value );

        eDrawMode               GetDrawMode                             () const;
        void                    SetDrawMode                             ( eDrawMode value );

        bool                    GetUseTangentOrientation                () const;
        void                    SetUseTangentOrientation                ( bool value );

