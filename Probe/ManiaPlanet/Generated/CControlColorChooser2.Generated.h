        enum { CLASSID = 0x0701F000 };

        static CControlColorChooser2* CreateInstance ();

        color                   GetColor                                () const;
        void                    SetColor                                ( color value );

        class CControlColorChooser* GetColorChooserHue                      () const;
        void                    SetColorChooserHue                      ( class CControlColorChooser* value );

        class CControlColorChooser* GetColorChooserSV                       () const;
        void                    SetColorChooserSV                       ( class CControlColorChooser* value );

