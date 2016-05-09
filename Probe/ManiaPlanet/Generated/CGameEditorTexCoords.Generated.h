        enum { CLASSID = 0x030E0000 };

        static CGameEditorTexCoords* CreateInstance ();

        float                   GetAlpha                                () const;
        void                    SetAlpha                                ( float value );

        color                   GetColorSelectable                      () const;
        void                    SetColorSelectable                      ( color value );

        color                   GetColorSelected                        () const;
        void                    SetColorSelected                        ( color value );

        float                   GetDrawTcRectMargin                     () const;
        void                    SetDrawTcRectMargin                     ( float value );

        Vec2D                   GetDrawTcRectMax                        () const;
        void                    SetDrawTcRectMax                        ( Vec2D value );

        Vec2D                   GetDrawTcRectMin                        () const;
        void                    SetDrawTcRectMin                        ( Vec2D value );

        float                   GetDrawTcRectMinSize                    () const;
        void                    SetDrawTcRectMinSize                    ( float value );

        Vec2D                   GetDrawVisualRectMax                    () const;
        void                    SetDrawVisualRectMax                    ( Vec2D value );

        Vec2D                   GetDrawVisualRectMin                    () const;
        void                    SetDrawVisualRectMin                    ( Vec2D value );

        uint                    GetGridPixelStep                        () const;
        void                    SetGridPixelStep                        ( uint value );

        class CMwNod*           GetOverlay                              () const;
        void                    SetOverlay                              ( class CMwNod* value );

        bool                    GetSnapToGrid                           () const;
        void                    SetSnapToGrid                           ( bool value );

        void                    CenterViewOnSelection                   ();
        void                    ResetView                               ();
        void                    UpdateSelectables                       ();
