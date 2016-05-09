        enum { CLASSID = 0x030B8000 };

        static CGameCtnPainter* CreateInstance ();

        enum ePainterMode
        {
            PAINTERMODE_FILL,
            PAINTERMODE_BRUSH,
            PAINTERMODE_STICKER,
            PAINTERMODE_LAYER
        };
        static std::wstring     PainterModeToString                     ( ePainterMode value );
        static ePainterMode     ParsePainterMode                        ( const std::wstring& wstrName );

        float                   GetAngle                                () const;
        void                    SetAngle                                ( float value );

        class CPlugBitmap*      GetBitmapText                           () const;
        void                    SetBitmapText                           ( class CPlugBitmap* value );

        bool                    GetButtonBrushModeEnabled               () const;
        void                    SetButtonBrushModeEnabled               ( bool value );

        bool                    GetButtonColorPickerModeSelected        () const;
        void                    SetButtonColorPickerModeSelected        ( bool value );

        bool                    GetButtonFillModeEnabled                () const;
        void                    SetButtonFillModeEnabled                ( bool value );

        bool                    GetButtonInvertXAxisSelected            () const;
        void                    SetButtonInvertXAxisSelected            ( bool value );

        bool                    GetButtonLayerModeEnabled               () const;
        void                    SetButtonLayerModeEnabled               ( bool value );

        bool                    GetButtonPaintSymModeSelected           () const;
        void                    SetButtonPaintSymModeSelected           ( bool value );

        bool                    GetButtonPaintWithTextEnabled           () const;
        void                    SetButtonPaintWithTextEnabled           ( bool value );

        bool                    GetButtonStickerModeEnabled             () const;
        void                    SetButtonStickerModeEnabled             ( bool value );

        bool                    GetButtonStickerModeSelected            () const;
        void                    SetButtonStickerModeSelected            ( bool value );

        bool                    GetButtonTeamModeEnabled                () const;
        void                    SetButtonTeamModeEnabled                ( bool value );

        class CGameControlCameraOrbital3d* GetControlCameraOrbital3d               () const;
        void                    SetControlCameraOrbital3d               ( class CGameControlCameraOrbital3d* value );

        class CPlugBitmap*      GetIconSkinBitmap                       () const;
        void                    SetIconSkinBitmap                       ( class CPlugBitmap* value );

        color                   GetPaintColor                           () const;
        void                    SetPaintColor                           ( color value );

        class CPlugSolid*       GetPaintSolid                           () const;
        void                    SetPaintSolid                           ( class CPlugSolid* value );

        class CPlugShader*      GetPaintSolidShader                     () const;
        void                    SetPaintSolidShader                     ( class CPlugShader* value );

        ePainterMode            GetPainterMode                          () const;
        void                    SetPainterMode                          ( ePainterMode value );

        class CSceneMobil*      GetPlayerMobil                          () const;
        void                    SetPlayerMobil                          ( class CSceneMobil* value );

        float                   GetScale                                () const;
        void                    SetScale                                ( float value );

        float                   GetShininess                            () const;
        void                    SetShininess                            ( float value );

        StringW                 GetTextToCreateBitmap                   () const;
        void                    SetTextToCreateBitmap                   ( StringW value );

        float                   GetTransparency                         () const;
        void                    SetTransparency                         ( float value );

        void                    EngageColorChooserMode                  ();
        void                    HasToAlignSticker                       ();
        void                    ImageQuarterRotLeft                     ();
        void                    ImageQuarterRotRight                    ();
        void                    OnButtonCurrentColorClicked             ();
        void                    OnButtonCustomColor0Clicked             ();
        void                    OnButtonCustomColor1Clicked             ();
        void                    OnButtonCustomColor2Clicked             ();
        void                    OnButtonCustomColor3Clicked             ();
        void                    OnButtonCustomColor4Clicked             ();
        void                    OnOkInHelpFrame                         ();
        void                    Redo                                    ();
        void                    ReloadSkin                              ();
        void                    SaveSkin                                ();
        void                    SaveSkinAs                              ();
        void                    SaveSkinAs_OnOk                         ();
        void                    Undo                                    ();
        void                    WantHelpDialog                          ();
