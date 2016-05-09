        enum { CLASSID = 0x09080000 };

        static CPlugBitmapShader* CreateInstance ();

        class CPlugBitmap*      GetBitmapToSwap                         () const;
        void                    SetBitmapToSwap                         ( class CPlugBitmap* value );

        class CPlugShader*      GetShader                               () const;
        void                    SetShader                               ( class CPlugShader* value );

