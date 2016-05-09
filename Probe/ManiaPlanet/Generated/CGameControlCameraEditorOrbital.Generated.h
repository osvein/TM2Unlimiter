        enum { CLASSID = 0x03125000 };

        static CGameControlCameraEditorOrbital* CreateInstance ();

        float                   GetCameraToTargetDistance               () const;
        void                    SetCameraToTargetDistance               ( float value );

        float                   GetCurrentHAngle                        () const;
        void                    SetCurrentHAngle                        ( float value );

        float                   GetCurrentVAngle                        () const;
        void                    SetCurrentVAngle                        ( float value );

        float                   GetDestinationHAngle                    () const;
        void                    SetDestinationHAngle                    ( float value );

        float                   GetMaxDistance                          () const;
        void                    SetMaxDistance                          ( float value );

        float                   GetMaxVAngle                            () const;
        void                    SetMaxVAngle                            ( float value );

        float                   GetMinDistance                          () const;
        void                    SetMinDistance                          ( float value );

        float                   GetMinVAngle                            () const;
        void                    SetMinVAngle                            ( float value );

        float                   GetParamAutopanTime                     () const;
        void                    SetParamAutopanTime                     ( float value );

        uint                    GetParamCameraBaseRaiseTime             () const;
        void                    SetParamCameraBaseRaiseTime             ( uint value );

        float                   GetParamPanDistance                     () const;
        void                    SetParamPanDistance                     ( float value );

        float                   GetParamPanMinimum                      () const;
        void                    SetParamPanMinimum                      ( float value );

        float                   GetParamRotationSpeed                   () const;
        void                    SetParamRotationSpeed                   ( float value );

        float                   GetParamScrollAreaMax                   () const;
        void                    SetParamScrollAreaMax                   ( float value );

        float                   GetParamScrollAreaStart                 () const;
        void                    SetParamScrollAreaStart                 ( float value );

        uint                    GetParamScrollHoldTime                  () const;
        void                    SetParamScrollHoldTime                  ( uint value );

        float                   GetParamScrollLowerLimitEnd             () const;
        void                    SetParamScrollLowerLimitEnd             ( float value );

        float                   GetParamScrollLowerLimitStart           () const;
        void                    SetParamScrollLowerLimitStart           ( float value );

        uint                    GetParamScrollRepeatTime                () const;
        void                    SetParamScrollRepeatTime                ( uint value );

        float                   GetParamScrollSpeed0                    () const;
        void                    SetParamScrollSpeed0                    ( float value );

        float                   GetParamScrollSpeed1                    () const;
        void                    SetParamScrollSpeed1                    ( float value );

        float                   GetParamTurnCameraDistance_X            () const;
        void                    SetParamTurnCameraDistance_X            ( float value );

        float                   GetParamTurnCameraDistance_Y            () const;
        void                    SetParamTurnCameraDistance_Y            ( float value );

        float                   GetParamZoomClosePower                  () const;
        void                    SetParamZoomClosePower                  ( float value );

        float                   GetParamZoomDistanceClose               () const;
        void                    SetParamZoomDistanceClose               ( float value );

        float                   GetParamZoomPower                       () const;
        void                    SetParamZoomPower                       ( float value );

        Vec3D                   GetTargetedPosition                     () const;
        void                    SetTargetedPosition                     ( Vec3D value );

