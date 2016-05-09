        enum { CLASSID = 0x0907C000 };

        static CPlugMaterialFxFur* CreateInstance ();

        class CPlugBitmap*      GetFenceBitmap                          () const;
        void                    SetFenceBitmap                          ( class CPlugBitmap* value );

        uint                    GetFenceCount                           () const;
        void                    SetFenceCount                           ( uint value );

        float                   GetFenceHeight                          () const;
        void                    SetFenceHeight                          ( float value );

        uint                    GetShellCount                           () const;
        void                    SetShellCount                           ( uint value );

        float                   GetShellHighAlpha                       () const;
        void                    SetShellHighAlpha                       ( float value );

        color                   GetShellHighRGB                         () const;
        void                    SetShellHighRGB                         ( color value );

        float                   GetShellLowAlpha                        () const;
        void                    SetShellLowAlpha                        ( float value );

        color                   GetShellLowRGB                          () const;
        void                    SetShellLowRGB                          ( color value );

        float                   GetShellThick                           () const;
        void                    SetShellThick                           ( float value );

