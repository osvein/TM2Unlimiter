        enum { CLASSID = 0x0315E000 };

        static CGameTeamProfile* CreateInstance ();

        float                   GetColorLinearHuePrimary                () const;
        void                    SetColorLinearHuePrimary                ( float value );

        float                   GetColorLinearHueSecondary              () const;
        void                    SetColorLinearHueSecondary              ( float value );

        color                   GetColorSrgbPrimary                     () const;
        void                    SetColorSrgbPrimary                     ( color value );

        color                   GetColorSrgbSecondary                   () const;
        void                    SetColorSrgbSecondary                   ( color value );

        StringW                 GetColorText                            () const;
        void                    SetColorText                            ( StringW value );

        StringW                 GetColorizedName                        () const;
        void                    SetColorizedName                        ( StringW value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        StringW                 GetZonePath                             () const;
        void                    SetZonePath                             ( StringW value );

        void                    UpdateCache                             ();
