        enum { CLASSID = 0x05017000 };

        static CFuncColor*      CreateInstance ();

        float                   GetBlend                                () const;
        void                    SetBlend                                ( float value );

        color                   GetColor0                               () const;
        void                    SetColor0                               ( color value );

        color                   GetColor1                               () const;
        void                    SetColor1                               ( color value );

        color                   GetOutColor                             () const;
        void                    SetOutColor                             ( color value );

