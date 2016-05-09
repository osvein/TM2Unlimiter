        enum { CLASSID = 0x0701E000 };

        static CControlColorChooser* CreateInstance ();

        enum eStyleType
        {
            STYLETYPE_HUESLIDER,
            STYLETYPE_SLSQUARE
        };
        static std::wstring     StyleTypeToString                       ( eStyleType value );
        static eStyleType       ParseStyleType                          ( const std::wstring& wstrName );

        color                   GetColor                                () const;
        void                    SetColor                                ( color value );

        class CPlugShader*      GetColorChooserShader                   () const;
        void                    SetColorChooserShader                   ( class CPlugShader* value );

        Vec2D                   GetColorChooserSize                     () const;
        void                    SetColorChooserSize                     ( Vec2D value );

        float                   GetHue                                  () const;
        void                    SetHue                                  ( float value );

        eStyleType              GetStyleType                            () const;
        void                    SetStyleType                            ( eStyleType value );

