        enum { CLASSID = 0x0702A000 };

        static CControlCurve*   CreateInstance ();

        enum eCurveDrawMode
        {
            CURVEDRAWMODE_STEPS,
            CURVEDRAWMODE_LINEAR,
            CURVEDRAWMODE_SMOOTH
        };
        static std::wstring     CurveDrawModeToString                   ( eCurveDrawMode value );
        static eCurveDrawMode   ParseCurveDrawMode                      ( const std::wstring& wstrName );

        bool                    GetAreControlPointsVisible              () const;
        void                    SetAreControlPointsVisible              ( bool value );

        class CPlugShaderGeneric* GetControlPointShader                   () const;
        void                    SetControlPointShader                   ( class CPlugShaderGeneric* value );

        class CPlugVisualIndexedLines* GetControlPointVisual                   () const;
        void                    SetControlPointVisual                   ( class CPlugVisualIndexedLines* value );

        color                   GetControlPointsColor                   () const;
        void                    SetControlPointsColor                   ( color value );

        uint                    GetCurrentLayer                         () const;
        void                    SetCurrentLayer                         ( uint value );

        class CCurveInterface*  GetCurve                                () const;
        void                    SetCurve                                ( class CCurveInterface* value );

        color                   GetCurveColor                           () const;
        void                    SetCurveColor                           ( color value );

        eCurveDrawMode          GetCurveDrawMode                        () const;
        void                    SetCurveDrawMode                        ( eCurveDrawMode value );

        float                   GetCurveHalfWidth                       () const;
        void                    SetCurveHalfWidth                       ( float value );

        uint                    GetCurvePrecision                       () const;
        void                    SetCurvePrecision                       ( uint value );

        class CPlugTree*        GetCurveTree                            () const;
        void                    SetCurveTree                            ( class CPlugTree* value );

        class CPlugVisualIndexedLines* GetCurveVisual                          () const;
        void                    SetCurveVisual                          ( class CPlugVisualIndexedLines* value );

        float                   GetEndX                                 () const;
        void                    SetEndX                                 ( float value );

        float                   GetEndY                                 () const;
        void                    SetEndY                                 ( float value );

        float                   GetGridX                                () const;
        void                    SetGridX                                ( float value );

        float                   GetGridY                                () const;
        void                    SetGridY                                ( float value );

        uint                    GetLayersCount                          () const;
        void                    SetLayersCount                          ( uint value );

        uint                    GetSelectedControlPoint                 () const;
        void                    SetSelectedControlPoint                 ( uint value );

        color                   GetSelectedControlPointColor            () const;
        void                    SetSelectedControlPointColor            ( color value );

        class CPlugShaderGeneric* GetSelectedControlPointShader           () const;
        void                    SetSelectedControlPointShader           ( class CPlugShaderGeneric* value );

        float                   GetStartX                               () const;
        void                    SetStartX                               ( float value );

        float                   GetStartY                               () const;
        void                    SetStartY                               ( float value );

        bool                    GetUseSnapping                          () const;
        void                    SetUseSnapping                          ( bool value );

        Vec2D                   ScreenToControlSpace                    ( Vec2D vecPosInScreenSpace );
