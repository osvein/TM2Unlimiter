        enum { CLASSID = 0x030EF000 };

        static CGameEditPos3D*  CreateInstance ();

        enum eGridDisplayType
        {
            GRIDDISPLAYTYPE_GRIDCLASSIC,
            GRIDDISPLAYTYPE_GRIDPLANE,
            GRIDDISPLAYTYPE_GRIDSMALLPLANE
        };
        static std::wstring     GridDisplayTypeToString                 ( eGridDisplayType value );
        static eGridDisplayType ParseGridDisplayType                    ( const std::wstring& wstrName );

        float                   GetAlphaGridPlane                       () const;
        void                    SetAlphaGridPlane                       ( float value );

        float                   GetAlphaGroundLines                     () const;
        void                    SetAlphaGroundLines                     ( float value );

        float                   GetAlphaGroundPlane                     () const;
        void                    SetAlphaGroundPlane                     ( float value );

        color                   GetColorAxisX                           () const;
        void                    SetColorAxisX                           ( color value );

        color                   GetColorAxisY                           () const;
        void                    SetColorAxisY                           ( color value );

        color                   GetColorAxisZ                           () const;
        void                    SetColorAxisZ                           ( color value );

        color                   GetColorGradationX                      () const;
        void                    SetColorGradationX                      ( color value );

        color                   GetColorGradationY                      () const;
        void                    SetColorGradationY                      ( color value );

        color                   GetColorGradationZ                      () const;
        void                    SetColorGradationZ                      ( color value );

        color                   GetColorGridLines                       () const;
        void                    SetColorGridLines                       ( color value );

        color                   GetColorGridPlane                       () const;
        void                    SetColorGridPlane                       ( color value );

        color                   GetColorGroundLines                     () const;
        void                    SetColorGroundLines                     ( color value );

        color                   GetColorGroundPlane                     () const;
        void                    SetColorGroundPlane                     ( color value );

        bool                    GetCursorAutoSnap                       () const;
        void                    SetCursorAutoSnap                       ( bool value );

        color                   GetCursorColorBase                      () const;
        void                    SetCursorColorBase                      ( color value );

        color                   GetCursorColorDraw                      () const;
        void                    SetCursorColorDraw                      ( color value );

        color                   GetCursorColorMerge                     () const;
        void                    SetCursorColorMerge                     ( color value );

        color                   GetCursorColorMove                      () const;
        void                    SetCursorColorMove                      ( color value );

        color                   GetCursorColorRotate                    () const;
        void                    SetCursorColorRotate                    ( color value );

        color                   GetCursorColorSplit                     () const;
        void                    SetCursorColorSplit                     ( color value );

        color                   GetCursorColorUVMapping                 () const;
        void                    SetCursorColorUVMapping                 ( color value );

        Vec3D                   GetCursorOffset                         () const;
        void                    SetCursorOffset                         ( Vec3D value );

        Vec3D                   GetCursorStepSize                       () const;
        void                    SetCursorStepSize                       ( Vec3D value );

        float                   GetGradationLength                      () const;
        void                    SetGradationLength                      ( float value );

        eGridDisplayType        GetGridDisplayType                      () const;
        void                    SetGridDisplayType                      ( eGridDisplayType value );

        Vec3D                   GetPos3D                                () const;
        void                    SetPos3D                                ( Vec3D value );

        bool                    GetShowAxisGradations                   () const;
        void                    SetShowAxisGradations                   ( bool value );

        class CMwNod*           GetToyCursor                            () const;
        void                    SetToyCursor                            ( class CMwNod* value );

        class CMwNod*           GetToyPlane                             () const;
        void                    SetToyPlane                             ( class CMwNod* value );

        class CMwNod*           GetVisualCursor                         () const;
        void                    SetVisualCursor                         ( class CMwNod* value );

        class CMwNod*           GetVisualCursorAxes                     () const;
        void                    SetVisualCursorAxes                     ( class CMwNod* value );

        class CMwNod*           GetVisualCursorGrid                     () const;
        void                    SetVisualCursorGrid                     ( class CMwNod* value );

        class CMwNod*           GetVisualGround                         () const;
        void                    SetVisualGround                         ( class CMwNod* value );

        void                    Hide                                    ();
        void                    Show                                    ();
