        enum { CLASSID = 0x03088000 };

        static CGameHud3d*      CreateInstance ();

        bool                    GetDisplayAvatar                        () const;
        void                    SetDisplayAvatar                        ( bool value );

        bool                    GetDisplayBg                            () const;
        void                    SetDisplayBg                            ( bool value );

        bool                    GetDisplayName                          () const;
        void                    SetDisplayName                          ( bool value );

        float                   GetDisplaySize                          () const;
        void                    SetDisplaySize                          ( float value );

        float                   GetDistMax                              () const;
        void                    SetDistMax                              ( float value );

        bool                    GetDoDistanceFade                       () const;
        void                    SetDoDistanceFade                       ( bool value );

        bool                    GetForceNameShadow                      () const;
        void                    SetForceNameShadow                      ( bool value );

        float                   GetGaugeHeight                          () const;
        void                    SetGaugeHeight                          ( float value );

        float                   GetGaugeWidth                           () const;
        void                    SetGaugeWidth                           ( float value );

        float                   GetGaugeYPos                            () const;
        void                    SetGaugeYPos                            ( float value );

        float                   GetLineWidthRatio                       () const;
        void                    SetLineWidthRatio                       ( float value );

        float                   GetMarkerBaseAlpha                      () const;
        void                    SetMarkerBaseAlpha                      ( float value );

        color                   GetMarkerBaseTint                       () const;
        void                    SetMarkerBaseTint                       ( color value );

        bool                    GetMarkers                              () const;
        void                    SetMarkers                              ( bool value );

        float                   GetNameClipLengthSizeRatio              () const;
        void                    SetNameClipLengthSizeRatio              ( float value );

        float                   GetNameRatioXY                          () const;
        void                    SetNameRatioXY                          ( float value );

        class CScene2d*         GetOverlay                              () const;
        void                    SetOverlay                              ( class CScene2d* value );

        float                   GetPlayerBaseAlpha                      () const;
        void                    SetPlayerBaseAlpha                      ( float value );

        color                   GetPlayerBaseTint                       () const;
        void                    SetPlayerBaseTint                       ( color value );

        bool                    GetPlayers                              () const;
        void                    SetPlayers                              ( bool value );

        float                   GetScreenCartoucheAltitude              () const;
        void                    SetScreenCartoucheAltitude              ( float value );

        uint                    GetVisibilityFadeDuration               () const;
        void                    SetVisibilityFadeDuration               ( uint value );

        uint                    GetVisibilityTestPeriod                 () const;
        void                    SetVisibilityTestPeriod                 ( uint value );

        float                   GetWorldCartoucheAltitude               () const;
        void                    SetWorldCartoucheAltitude               ( float value );

