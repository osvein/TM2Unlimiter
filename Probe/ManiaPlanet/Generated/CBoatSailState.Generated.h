        enum { CLASSID = 0x0A03E000 };

        static CBoatSailState*  CreateInstance ();

        enum eSailState
        {
            SAILSTATE_PREPAREHAULUP,
            SAILSTATE_HAULUP,
            SAILSTATE_UP,
            SAILSTATE_PREPAREHAULDOWN,
            SAILSTATE_HAULDOWN,
            SAILSTATE_DOWN
        };
        static std::wstring     SailStateToString                       ( eSailState value );
        static eSailState       ParseSailState                          ( const std::wstring& wstrName );

        bool                    GetAutomaticSheetTargetSpeedEnable      () const;
        void                    SetAutomaticSheetTargetSpeedEnable      ( bool value );

        class CPlugTree*        GetBoomLowTree                          () const;
        void                    SetBoomLowTree                          ( class CPlugTree* value );

        class CPlugTree*        GetBoomTree                             () const;
        void                    SetBoomTree                             ( class CPlugTree* value );

        eSailState              GetSailState                            () const;
        void                    SetSailState                            ( eSailState value );

        float                   GetSailStateCoef                        () const;
        void                    SetSailStateCoef                        ( float value );

        class CPlugTree*        GetSailTree                             () const;
        void                    SetSailTree                             ( class CPlugTree* value );

        class CPlugVisualIndexedTriangles* GetSailVisualBase                       () const;
        void                    SetSailVisualBase                       ( class CPlugVisualIndexedTriangles* value );

        class CPlugVisualIndexedTriangles* GetSailVisualFlat                       () const;
        void                    SetSailVisualFlat                       ( class CPlugVisualIndexedTriangles* value );

