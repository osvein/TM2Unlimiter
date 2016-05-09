        enum { CLASSID = 0x07017000 };

        static CControlStyle*   CreateInstance ();

        enum eEditableColorFromPalette
        {
            EDITABLECOLORFROMPALETTE_COLOR_0,
            EDITABLECOLORFROMPALETTE_COLOR_1,
            EDITABLECOLORFROMPALETTE_COLOR_2,
            EDITABLECOLORFROMPALETTE_COLOR_3,
            EDITABLECOLORFROMPALETTE_COLOR_4,
            EDITABLECOLORFROMPALETTE_COLOR_5,
            EDITABLECOLORFROMPALETTE_COLOR_6,
            EDITABLECOLORFROMPALETTE_COLOR_7,
            EDITABLECOLORFROMPALETTE_CUSTOM
        };
        static std::wstring     EditableColorFromPaletteToString        ( eEditableColorFromPalette value );
        static eEditableColorFromPalette ParseEditableColorFromPalette           ( const std::wstring& wstrName );

        enum eEnumForceDisplayType
        {
            ENUMFORCEDISPLAYTYPE_TEXT,
            ENUMFORCEDISPLAYTYPE_ICON,
            ENUMFORCEDISPLAYTYPE_TEXT_ICON
        };
        static std::wstring     EnumForceDisplayTypeToString            ( eEnumForceDisplayType value );
        static eEnumForceDisplayType ParseEnumForceDisplayType               ( const std::wstring& wstrName );

        enum eGrayedColorFromPalette
        {
            GRAYEDCOLORFROMPALETTE_COLOR_0,
            GRAYEDCOLORFROMPALETTE_COLOR_1,
            GRAYEDCOLORFROMPALETTE_COLOR_2,
            GRAYEDCOLORFROMPALETTE_COLOR_3,
            GRAYEDCOLORFROMPALETTE_COLOR_4,
            GRAYEDCOLORFROMPALETTE_COLOR_5,
            GRAYEDCOLORFROMPALETTE_COLOR_6,
            GRAYEDCOLORFROMPALETTE_COLOR_7,
            GRAYEDCOLORFROMPALETTE_CUSTOM
        };
        static std::wstring     GrayedColorFromPaletteToString          ( eGrayedColorFromPalette value );
        static eGrayedColorFromPalette ParseGrayedColorFromPalette             ( const std::wstring& wstrName );

        enum eLabelColorFromPalette
        {
            LABELCOLORFROMPALETTE_COLOR_0,
            LABELCOLORFROMPALETTE_COLOR_1,
            LABELCOLORFROMPALETTE_COLOR_2,
            LABELCOLORFROMPALETTE_COLOR_3,
            LABELCOLORFROMPALETTE_COLOR_4,
            LABELCOLORFROMPALETTE_COLOR_5,
            LABELCOLORFROMPALETTE_COLOR_6,
            LABELCOLORFROMPALETTE_COLOR_7,
            LABELCOLORFROMPALETTE_CUSTOM
        };
        static std::wstring     LabelColorFromPaletteToString           ( eLabelColorFromPalette value );
        static eLabelColorFromPalette ParseLabelColorFromPalette              ( const std::wstring& wstrName );

        class CPlugSound*       GetActionBackSound                      () const;
        void                    SetActionBackSound                      ( class CPlugSound* value );

        class CPlugSound*       GetActionSound                          () const;
        void                    SetActionSound                          ( class CPlugSound* value );

        Id                      GetButtonDefaultIconId                  () const;
        void                    SetButtonDefaultIconId                  ( Id value );

        class CFuncEnum*        GetButtonDefaultIcons                   () const;
        void                    SetButtonDefaultIcons                   ( class CFuncEnum* value );

        float                   GetButtonIconHeight                     () const;
        void                    SetButtonIconHeight                     ( float value );

        float                   GetButtonIconWidth                      () const;
        void                    SetButtonIconWidth                      ( float value );

        class CPlugShader*      GetDefaultShader                        () const;
        void                    SetDefaultShader                        ( class CPlugShader* value );

        StringW                 GetEditableCharAttributes               () const;
        void                    SetEditableCharAttributes               ( StringW value );

        color                   GetEditableColor                        () const;
        void                    SetEditableColor                        ( color value );

        float                   GetEditableColorAlpha                   () const;
        void                    SetEditableColorAlpha                   ( float value );

        eEditableColorFromPalette GetEditableColorFromPalette             () const;
        void                    SetEditableColorFromPalette             ( eEditableColorFromPalette value );

        bool                    GetEditableForceEmbossed                () const;
        void                    SetEditableForceEmbossed                ( bool value );

        class CControlEffectMaster* GetEffectMaster                         () const;
        void                    SetEffectMaster                         ( class CControlEffectMaster* value );

        eEnumForceDisplayType   GetEnumForceDisplayType                 () const;
        void                    SetEnumForceDisplayType                 ( eEnumForceDisplayType value );

        class CFuncEnum*        GetEnumForceIcons                       () const;
        void                    SetEnumForceIcons                       ( class CFuncEnum* value );

        float                   GetEnumIconHeight                       () const;
        void                    SetEnumIconHeight                       ( float value );

        float                   GetEnumIconWidth                        () const;
        void                    SetEnumIconWidth                        ( float value );

        class CPlugShader*      GetEnumListShader                       () const;
        void                    SetEnumListShader                       ( class CPlugShader* value );

        uint                    GetEnumMaxElemCount                     () const;
        void                    SetEnumMaxElemCount                     ( uint value );

        class CPlugShader*      GetEnumSound                            () const;
        void                    SetEnumSound                            ( class CPlugShader* value );

        bool                    GetFitTextSize                          () const;
        void                    SetFitTextSize                          ( bool value );

        bool                    GetFocusAreaEnable                      () const;
        void                    SetFocusAreaEnable                      ( bool value );

        class CPlugMaterial*    GetFocusAreaMaterial                    () const;
        void                    SetFocusAreaMaterial                    ( class CPlugMaterial* value );

        class CPlugMaterial*    GetFocusAreaMaterialFocused             () const;
        void                    SetFocusAreaMaterialFocused             ( class CPlugMaterial* value );

        class CPlugMaterial*    GetFocusAreaMaterialReadOnly            () const;
        void                    SetFocusAreaMaterialReadOnly            ( class CPlugMaterial* value );

        class CPlugMaterial*    GetFocusAreaMaterialSelected            () const;
        void                    SetFocusAreaMaterialSelected            ( class CPlugMaterial* value );

        float                   GetFocusAreaMinHeight                   () const;
        void                    SetFocusAreaMinHeight                   ( float value );

        float                   GetFocusAreaMinWidth                    () const;
        void                    SetFocusAreaMinWidth                    ( float value );

        class CPlugSolid*       GetFocusAreaSolid                       () const;
        void                    SetFocusAreaSolid                       ( class CPlugSolid* value );

        float                   GetFocusAreaXMargin                     () const;
        void                    SetFocusAreaXMargin                     ( float value );

        float                   GetFocusAreaYMargin                     () const;
        void                    SetFocusAreaYMargin                     ( float value );

        float                   GetFocusAreaZOffset                     () const;
        void                    SetFocusAreaZOffset                     ( float value );

        class CMwCmdBlockMain*  GetFocusGainedScript                    () const;
        void                    SetFocusGainedScript                    ( class CMwCmdBlockMain* value );

        class CMwCmdBlockMain*  GetFocusLostScript                      () const;
        void                    SetFocusLostScript                      ( class CMwCmdBlockMain* value );

        class CPlugSound*       GetFocusSound                           () const;
        void                    SetFocusSound                           ( class CPlugSound* value );

        class CPlugFont*        GetFont                                 () const;
        void                    SetFont                                 ( class CPlugFont* value );

        float                   GetFontHeight                           () const;
        void                    SetFontHeight                           ( float value );

        float                   GetFontRatioXY                          () const;
        void                    SetFontRatioXY                          ( float value );

        StringW                 GetGrayedCharAttributes                 () const;
        void                    SetGrayedCharAttributes                 ( StringW value );

        color                   GetGrayedColor                          () const;
        void                    SetGrayedColor                          ( color value );

        float                   GetGrayedColorAlpha                     () const;
        void                    SetGrayedColorAlpha                     ( float value );

        eGrayedColorFromPalette GetGrayedColorFromPalette               () const;
        void                    SetGrayedColorFromPalette               ( eGrayedColorFromPalette value );

        bool                    GetGrayedForceEmbossed                  () const;
        void                    SetGrayedForceEmbossed                  ( bool value );

        StringW                 GetLabelCharAttributes                  () const;
        void                    SetLabelCharAttributes                  ( StringW value );

        color                   GetLabelColor                           () const;
        void                    SetLabelColor                           ( color value );

        float                   GetLabelColorAlpha                      () const;
        void                    SetLabelColorAlpha                      ( float value );

        eLabelColorFromPalette  GetLabelColorFromPalette                () const;
        void                    SetLabelColorFromPalette                ( eLabelColorFromPalette value );

        bool                    GetLabelForceEmbossed                   () const;
        void                    SetLabelForceEmbossed                   ( bool value );

        color                   GetLineGradientColor0                   () const;
        void                    SetLineGradientColor0                   ( color value );

        float                   GetLineGradientColor0Alpha              () const;
        void                    SetLineGradientColor0Alpha              ( float value );

        color                   GetLineGradientColor1                   () const;
        void                    SetLineGradientColor1                   ( color value );

        float                   GetLineGradientColor1Alpha              () const;
        void                    SetLineGradientColor1Alpha              ( float value );

        color                   GetQuadGradientColor0                   () const;
        void                    SetQuadGradientColor0                   ( color value );

        float                   GetQuadGradientColor0Alpha              () const;
        void                    SetQuadGradientColor0Alpha              ( float value );

        color                   GetQuadGradientColor1                   () const;
        void                    SetQuadGradientColor1                   ( color value );

        float                   GetQuadGradientColor1Alpha              () const;
        void                    SetQuadGradientColor1Alpha              ( float value );

        bool                    GetQuadIsFill                           () const;
        void                    SetQuadIsFill                           ( bool value );

        bool                    GetQuadIsLines                          () const;
        void                    SetQuadIsLines                          ( bool value );

        color                   GetQuadLinesColor                       () const;
        void                    SetQuadLinesColor                       ( color value );

        float                   GetQuadLinesColorAlpha                  () const;
        void                    SetQuadLinesColorAlpha                  ( float value );

        float                   GetQuadZ                                () const;
        void                    SetQuadZ                                ( float value );

        float                   GetQuadZLines                           () const;
        void                    SetQuadZLines                           ( float value );

        Vec2D                   GetQuad_UvBottomRight                   () const;
        void                    SetQuad_UvBottomRight                   ( Vec2D value );

        Vec2D                   GetQuad_UvTopLeft                       () const;
        void                    SetQuad_UvTopLeft                       ( Vec2D value );

        float                   GetSkew                                 () const;
        void                    SetSkew                                 ( float value );

        float                   GetSliderBarHeight                      () const;
        void                    SetSliderBarHeight                      ( float value );

        class CFuncEnum*        GetSliderBarIcons                       () const;
        void                    SetSliderBarIcons                       ( class CFuncEnum* value );

        float                   GetSliderBarWidth                       () const;
        void                    SetSliderBarWidth                       ( float value );

        float                   GetSliderCursorHeight                   () const;
        void                    SetSliderCursorHeight                   ( float value );

        class CFuncEnum*        GetSliderCursorIcons                    () const;
        void                    SetSliderCursorIcons                    ( class CFuncEnum* value );

        float                   GetSliderCursorWidth                    () const;
        void                    SetSliderCursorWidth                    ( float value );

        class CPlugSound*       GetSliderSound                          () const;
        void                    SetSliderSound                          ( class CPlugSound* value );

