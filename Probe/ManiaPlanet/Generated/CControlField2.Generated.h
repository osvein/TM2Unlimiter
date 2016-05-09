        enum { CLASSID = 0x07018000 };

        static CControlField2*  CreateInstance ();

        enum eControlMode
        {
            CONTROLMODE_VIEW,
            CONTROLMODE_EDIT
        };
        static std::wstring     ControlModeToString                     ( eControlMode value );
        static eControlMode     ParseControlMode                        ( const std::wstring& wstrName );

        enum eDirectionPaintMode
        {
            DIRECTIONPAINTMODE_NONE,
            DIRECTIONPAINTMODE_STATIC,
            DIRECTIONPAINTMODE_DYNAMIC
        };
        static std::wstring     DirectionPaintModeToString              ( eDirectionPaintMode value );
        static eDirectionPaintMode ParseDirectionPaintMode                 ( const std::wstring& wstrName );

        enum eDisplayMode
        {
            DISPLAYMODE_ROTATIONANDSCALE,
            DISPLAYMODE_SCALE
        };
        static std::wstring     DisplayModeToString                     ( eDisplayMode value );
        static eDisplayMode     ParseDisplayMode                        ( const std::wstring& wstrName );

        enum eIntensityPaintMode
        {
            INTENSITYPAINTMODE_NONE,
            INTENSITYPAINTMODE_STATIC,
            INTENSITYPAINTMODE_DYNAMIC
        };
        static std::wstring     IntensityPaintModeToString              ( eIntensityPaintMode value );
        static eIntensityPaintMode ParseIntensityPaintMode                 ( const std::wstring& wstrName );

        enum eRenderMode
        {
            RENDERMODE_TRIANGLES,
            RENDERMODE_LINES
        };
        static std::wstring     RenderModeToString                      ( eRenderMode value );
        static eRenderMode      ParseRenderMode                         ( const std::wstring& wstrName );

        color                   GetArrowColor                           () const;
        void                    SetArrowColor                           ( color value );

        color                   GetArrowColorMax                        () const;
        void                    SetArrowColorMax                        ( color value );

        color                   GetArrowColorMin                        () const;
        void                    SetArrowColorMin                        ( color value );

        float                   GetArrowRatio                           () const;
        void                    SetArrowRatio                           ( float value );

        float                   GetBrushDirection                       () const;
        void                    SetBrushDirection                       ( float value );

        float                   GetBrushIntensity                       () const;
        void                    SetBrushIntensity                       ( float value );

        float                   GetBrushSize                            () const;
        void                    SetBrushSize                            ( float value );

        eControlMode            GetControlMode                          () const;
        void                    SetControlMode                          ( eControlMode value );

        Vec2D                   GetDeltaDebug                           () const;
        void                    SetDeltaDebug                           ( Vec2D value );

        eDirectionPaintMode     GetDirectionPaintMode                   () const;
        void                    SetDirectionPaintMode                   ( eDirectionPaintMode value );

        eDisplayMode            GetDisplayMode                          () const;
        void                    SetDisplayMode                          ( eDisplayMode value );

        float                   GetDisplaySize                          () const;
        void                    SetDisplaySize                          ( float value );

        uint                    GetDisplaySkipLevel                     () const;
        void                    SetDisplaySkipLevel                     ( uint value );

        eIntensityPaintMode     GetIntensityPaintMode                   () const;
        void                    SetIntensityPaintMode                   ( eIntensityPaintMode value );

        bool                    GetIsAutoDisplaySkipLevel               () const;
        void                    SetIsAutoDisplaySkipLevel               ( bool value );

        bool                    GetIsDisplayDrawRect                    () const;
        void                    SetIsDisplayDrawRect                    ( bool value );

        bool                    GetIsDisplayFieldRect                   () const;
        void                    SetIsDisplayFieldRect                   ( bool value );

        bool                    GetIsIntensityInArrowSize               () const;
        void                    SetIsIntensityInArrowSize               ( bool value );

        bool                    GetIsInterpolate                        () const;
        void                    SetIsInterpolate                        ( bool value );

        eRenderMode             GetRenderMode                           () const;
        void                    SetRenderMode                           ( eRenderMode value );

        float                   GetRotationModifSpeed                   () const;
        void                    SetRotationModifSpeed                   ( float value );

        float                   GetScaleModifSpeed                      () const;
        void                    SetScaleModifSpeed                      ( float value );

