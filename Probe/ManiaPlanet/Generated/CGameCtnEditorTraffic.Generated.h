        enum { CLASSID = 0x03158000 };

        static CGameCtnEditorTraffic* CreateInstance ();

        float                   GetAirClipYIncr                         () const;
        void                    SetAirClipYIncr                         ( float value );

        uint                    GetCurrentGraphSplineBaseIndex          () const;
        void                    SetCurrentGraphSplineBaseIndex          ( uint value );

        Vec3D                   GetCursorCenterWorldPos                 () const;
        void                    SetCursorCenterWorldPos                 ( Vec3D value );

        float                   GetCursorLanesSpacing                   () const;
        void                    SetCursorLanesSpacing                   ( float value );

        uint                    GetCursorNumberOfLanes                  () const;
        void                    SetCursorNumberOfLanes                  ( uint value );

        float                   GetCursorRotationStep                   () const;
        void                    SetCursorRotationStep                   ( float value );

        float                   GetCursorVerticalOffset                 () const;
        void                    SetCursorVerticalOffset                 ( float value );

        float                   GetCursorVerticalOffsetMin              () const;
        void                    SetCursorVerticalOffsetMin              ( float value );

        float                   GetCursorVerticalStep                   () const;
        void                    SetCursorVerticalStep                   ( float value );

        float                   GetCursorYaw                            () const;
        void                    SetCursorYaw                            ( float value );

        bool                    GetDrawClipsPassingPoints               () const;
        void                    SetDrawClipsPassingPoints               ( bool value );

        bool                    GetEnableClipsMagnetization             () const;
        void                    SetEnableClipsMagnetization             ( bool value );

        bool                    GetEnableSplinesBoundariesEdition       () const;
        void                    SetEnableSplinesBoundariesEdition       ( bool value );

        bool                    GetIsInsertionMode                      () const;
        void                    SetIsInsertionMode                      ( bool value );

        Vec3D                   GetMagnetCursorYawPitchRoll             () const;
        void                    SetMagnetCursorYawPitchRoll             ( Vec3D value );

        float                   GetMagnetizationRadius                  () const;
        void                    SetMagnetizationRadius                  ( float value );

        float                   GetPhyPeriod                            () const;
        void                    SetPhyPeriod                            ( float value );

        float                   GetPickKeyRadius                        () const;
        void                    SetPickKeyRadius                        ( float value );

        class CPlugTrafficGraph* GetTrafficGraph                         () const;
        void                    SetTrafficGraph                         ( class CPlugTrafficGraph* value );

        void                    CycleCurrentLane                        ();
        void                    DeleteCurrentLanes                      ();
        void                    NewCurrentLanes                         ();
        void                    StartTrafficPreview                     ();
        void                    StopTrafficPreview                      ();
