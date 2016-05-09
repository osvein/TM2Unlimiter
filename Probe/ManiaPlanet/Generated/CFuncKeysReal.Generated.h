        enum { CLASSID = 0x0501A000 };

        static CFuncKeysReal*   CreateInstance ();

        enum eRealInterp
        {
            REALINTERP_NONE,
            REALINTERP_LINEAR,
            REALINTERP_HERMITE,
            REALINTERP_SMOOTHSTEP
        };
        static std::wstring     RealInterpToString                      ( eRealInterp value );
        static eRealInterp      ParseRealInterp                         ( const std::wstring& wstrName );

        bool                    GetForceTangentMaxX                     () const;
        void                    SetForceTangentMaxX                     ( bool value );

        bool                    GetForceTangentMinX                     () const;
        void                    SetForceTangentMinX                     ( bool value );

        float                   GetForcedTangentMaxX                    () const;
        void                    SetForcedTangentMaxX                    ( float value );

        float                   GetForcedTangentMinX                    () const;
        void                    SetForcedTangentMinX                    ( float value );

        eRealInterp             GetRealInterp                           () const;
        void                    SetRealInterp                           ( eRealInterp value );

        Array < float >&        GetYs                                   () const;
        void                    SetYs                                   ( Array < float >& value );

