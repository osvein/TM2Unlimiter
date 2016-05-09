        enum { CLASSID = 0x09046000 };

        static CPlugBitmapPackElem* CreateInstance ();

        class CPlugBitmap*      GetFidBitmapSrc                         () const;
        void                    SetFidBitmapSrc                         ( class CPlugBitmap* value );

        uint                    GetTexelCountX                          () const;
        void                    SetTexelCountX                          ( uint value );

        uint                    GetTexelCountY                          () const;
        void                    SetTexelCountY                          ( uint value );

        uint                    GetTexelStartX                          () const;
        void                    SetTexelStartX                          ( uint value );

        uint                    GetTexelStartY                          () const;
        void                    SetTexelStartY                          ( uint value );

