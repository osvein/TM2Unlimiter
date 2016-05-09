        enum { CLASSID = 0x0306E000 };

        static CGameControlCameraOrbital3d* CreateInstance ();

        bool                    GetCanCameraMove                        () const;
        void                    SetCanCameraMove                        ( bool value );

        float                   GetDefaultRadius                        () const;
        void                    SetDefaultRadius                        ( float value );

        bool                    GetFixedTargetLocation                  () const;
        void                    SetFixedTargetLocation                  ( bool value );

        float                   GetFovKeySensitivity                    () const;
        void                    SetFovKeySensitivity                    ( float value );

        float                   GetLatitude                             () const;
        void                    SetLatitude                             ( float value );

        float                   GetLatitudeMax                          () const;
        void                    SetLatitudeMax                          ( float value );

        float                   GetLatitudeMin                          () const;
        void                    SetLatitudeMin                          ( float value );

        float                   GetLongitude                            () const;
        void                    SetLongitude                            ( float value );

        float                   GetMouseBorderMoveSize                  () const;
        void                    SetMouseBorderMoveSize                  ( float value );

        float                   GetOcclusionDistFromHit                 () const;
        void                    SetOcclusionDistFromHit                 ( float value );

        bool                    GetOcclusionIsEnable                    () const;
        void                    SetOcclusionIsEnable                    ( bool value );

        float                   GetOcclusionTargetRadius                () const;
        void                    SetOcclusionTargetRadius                ( float value );

        float                   GetRadius                               () const;
        void                    SetRadius                               ( float value );

        float                   GetRadiusMax                            () const;
        void                    SetRadiusMax                            ( float value );

        float                   GetRadiusMin                            () const;
        void                    SetRadiusMin                            ( float value );

        Vec3D                   GetRadiusScale                          () const;
        void                    SetRadiusScale                          ( Vec3D value );

        Vec2D                   GetRotateSpeed                          () const;
        void                    SetRotateSpeed                          ( Vec2D value );

        bool                    GetUseAutoRadiusFromTargets             () const;
        void                    SetUseAutoRadiusFromTargets             ( bool value );

        bool                    GetUseNonLinearZoom                     () const;
        void                    SetUseNonLinearZoom                     ( bool value );

        bool                    GetUsingBorderToRotate                  () const;
        void                    SetUsingBorderToRotate                  ( bool value );

        float                   GetWheelSensitivity                     () const;
        void                    SetWheelSensitivity                     ( float value );

        float                   GetZoomKeySensitivity                   () const;
        void                    SetZoomKeySensitivity                   ( float value );

