        enum { CLASSID = 0x06001000 };

        static CHmsCamera*      CreateInstance ();

        enum eDofLensMode
        {
            DOFLENSMODE_FOCAL,
            DOFLENSMODE_SIZE
        };
        static std::wstring     DofLensModeToString                     ( eDofLensMode value );
        static eDofLensMode     ParseDofLensMode                        ( const std::wstring& wstrName );

        enum eViewportRatio
        {
            VIEWPORTRATIO_NONE,
            VIEWPORTRATIO_FOVY,
            VIEWPORTRATIO_FOVX
        };
        static std::wstring     ViewportRatioToString                   ( eViewportRatio value );
        static eViewportRatio   ParseViewportRatio                      ( const std::wstring& wstrName );

        enum eiPrecalcRender
        {

        };
        static std::wstring     iPrecalcRenderToString                  ( eiPrecalcRender value );
        static eiPrecalcRender  ParseiPrecalcRender                     ( const std::wstring& wstrName );

        float                   GetAsyncPrevDeltaRotationScale          () const;
        void                    SetAsyncPrevDeltaRotationScale          ( float value );

        float                   GetAsyncPrevDeltaTimeMax                () const;
        void                    SetAsyncPrevDeltaTimeMax                ( float value );

        color                   GetClearColor                           () const;
        void                    SetClearColor                           ( color value );

        bool                    GetClearColorEnable                     () const;
        void                    SetClearColorEnable                     ( bool value );

        bool                    GetClearZBuffer                         () const;
        void                    SetClearZBuffer                         ( bool value );

        float                   GetDesaturate01                         () const;
        void                    SetDesaturate01                         ( float value );

        float                   GetDofFocusZ                            () const;
        void                    SetDofFocusZ                            ( float value );

        float                   GetDofLensFocal                         () const;
        void                    SetDofLensFocal                         ( float value );

        eDofLensMode            GetDofLensMode                          () const;
        void                    SetDofLensMode                          ( eDofLensMode value );

        float                   GetDofLensSize                          () const;
        void                    SetDofLensSize                          ( float value );

        Vec2D                   GetDrawRectMax                          () const;
        void                    SetDrawRectMax                          ( Vec2D value );

        Vec2D                   GetDrawRectMin                          () const;
        void                    SetDrawRectMin                          ( Vec2D value );

        float                   GetFarZ                                 () const;
        void                    SetFarZ                                 ( float value );

        float                   GetFov                                  () const;
        void                    SetFov                                  ( float value );

        bool                    GetFovRectEnable                        () const;
        void                    SetFovRectEnable                        ( bool value );

        Vec2D                   GetFovRectMax                           () const;
        void                    SetFovRectMax                           ( Vec2D value );

        Vec2D                   GetFovRectMin                           () const;
        void                    SetFovRectMin                           ( Vec2D value );

        bool                    GetIsOverlay3d                          () const;
        void                    SetIsOverlay3d                          ( bool value );

        float                   GetNearZ                                () const;
        void                    SetNearZ                                ( float value );

        Matrix43                GetNextLocation                         () const;
        void                    SetNextLocation                         ( Matrix43 value );

        bool                    GetPickEnable                           () const;
        void                    SetPickEnable                           ( bool value );

        class CHmsPicker*       GetPicker                               () const;
        void                    SetPicker                               ( class CHmsPicker* value );

        float                   GetRatioXY                              () const;
        void                    SetRatioXY                              ( float value );

        bool                    GetScissorEnable                        () const;
        void                    SetScissorEnable                        ( bool value );

        Vec2D                   GetScissorRectMax                       () const;
        void                    SetScissorRectMax                       ( Vec2D value );

        Vec2D                   GetScissorRectMin                       () const;
        void                    SetScissorRectMin                       ( Vec2D value );

        float                   GetStereoScreenDist                     () const;
        void                    SetStereoScreenDist                     ( float value );

        bool                    GetTargetFpsEnable                      () const;
        void                    SetTargetFpsEnable                      ( bool value );

        float                   GetTargetFpsZClipMinValue               () const;
        void                    SetTargetFpsZClipMinValue               ( float value );

        float                   GetTargetFpsZClipSpeed                  () const;
        void                    SetTargetFpsZClipSpeed                  ( float value );

        bool                    GetUseViewDependantRendering            () const;
        void                    SetUseViewDependantRendering            ( bool value );

        bool                    GetUseZBuffer                           () const;
        void                    SetUseZBuffer                           ( bool value );

        eViewportRatio          GetViewportRatio                        () const;
        void                    SetViewportRatio                        ( eViewportRatio value );

        bool                    GetZClipEnable                          () const;
        void                    SetZClipEnable                          ( bool value );

        float                   GetZClipMargin                          () const;
        void                    SetZClipMargin                          ( float value );

        float                   GetZClipValue                           () const;
        void                    SetZClipValue                           ( float value );

        float                   GetZClipZBuffer1End                     () const;
        void                    SetZClipZBuffer1End                     ( float value );

        float                   GetZClipZBuffer2Start                   () const;
        void                    SetZClipZBuffer2Start                   ( float value );

        eiPrecalcRender         GetiPrecalcRender                       () const;
        void                    SetiPrecalcRender                       ( eiPrecalcRender value );

        void                    ResetLocation                           ();
