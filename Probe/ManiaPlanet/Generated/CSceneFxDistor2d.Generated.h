        enum { CLASSID = 0x0A07B000 };

        static CSceneFxDistor2d* CreateInstance ();

        class CPlugBitmap*      GetBitmapDistor                         () const;
        void                    SetBitmapDistor                         ( class CPlugBitmap* value );

        float                   GetDistorScale                          () const;
        void                    SetDistorScale                          ( float value );

