        enum { CLASSID = 0x09089000 };

        static CPlugBitmapRenderCamera* CreateInstance ();

        enum eCameraMode
        {
            CAMERAMODE_IMAGE_SPACE,
            CAMERAMODE_VISUAL_SPACE,
            CAMERAMODE_CAMERAMAP
        };
        static std::wstring     CameraModeToString                      ( eCameraMode value );
        static eCameraMode      ParseCameraMode                         ( const std::wstring& wstrName );

        class CMwNod*           GetCamera                               () const;
        void                    SetCamera                               ( class CMwNod* value );

        eCameraMode             GetCameraMode                           () const;
        void                    SetCameraMode                           ( eCameraMode value );

        Matrix43                GetCameraToVisual                       () const;
        void                    SetCameraToVisual                       ( Matrix43 value );

        float                   GetDepthBias                            () const;
        void                    SetDepthBias                            ( float value );

        float                   GetDepthBiasSlope                       () const;
        void                    SetDepthBiasSlope                       ( float value );

        float                   GetScaleZRange                          () const;
        void                    SetScaleZRange                          ( float value );

        bool                    GetUseCameraDrawRect                    () const;
        void                    SetUseCameraDrawRect                    ( bool value );

        bool                    GetUseCameraScissor                     () const;
        void                    SetUseCameraScissor                     ( bool value );

