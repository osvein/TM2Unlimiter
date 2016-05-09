        enum { CLASSID = 0x090D3000 };

        static CPlugFogMatter*  CreateInstance ();

        color                   GetColorLinear                          () const;
        void                    SetColorLinear                          ( color value );

        float                   GetDensity                              () const;
        void                    SetDensity                              ( float value );

