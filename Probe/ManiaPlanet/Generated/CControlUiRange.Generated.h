        enum { CLASSID = 0x07014000 };

        static CControlUiRange* CreateInstance ();

        float                   GetBackgroundMargin                     () const;
        void                    SetBackgroundMargin                     ( float value );

        float                   GetBlockOverlapRatio                    () const;
        void                    SetBlockOverlapRatio                    ( float value );

        bool                    GetCenteredBar                          () const;
        void                    SetCenteredBar                          ( bool value );

        color                   GetColor                                () const;
        void                    SetColor                                ( color value );

        color                   GetColor2                               () const;
        void                    SetColor2                               ( color value );

        float                   GetColor2Alpha                          () const;
        void                    SetColor2Alpha                          ( float value );

        float                   GetColorAlpha                           () const;
        void                    SetColorAlpha                           ( float value );

        bool                    GetDrawBackground                       () const;
        void                    SetDrawBackground                       ( bool value );

        bool                    GetDrawBlockBackground                  () const;
        void                    SetDrawBlockBackground                  ( bool value );

        float                   GetGradingRatio                         () const;
        void                    SetGradingRatio                         ( float value );

        Id                      GetIconId                               () const;
        void                    SetIconId                               ( Id value );

        bool                    GetLastGradingIsGhostlike               () const;
        void                    SetLastGradingIsGhostlike               ( bool value );

        float                   GetRatio                                () const;
        void                    SetRatio                                ( float value );

        float                   GetScaling                              () const;
        void                    SetScaling                              ( float value );

        uint                    GetUnit1                                () const;
        void                    SetUnit1                                ( uint value );

        uint                    GetUnit2                                () const;
        void                    SetUnit2                                ( uint value );

        uint                    GetUnitMax                              () const;
        void                    SetUnitMax                              ( uint value );

        void                    CreateRotate                            ( Vec3D vecAxis, float fMinAngle, float fMaxAngle );
        void                    CreateTranslate                         ( Vec3D vecStartPoint, Vec3D vecEndPoint );
