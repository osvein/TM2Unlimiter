        enum { CLASSID = 0x09048000 };

        static CPlugBitmapPackInput* CreateInstance ();

        List < nodptr<class CPlugBitmap> >& GetFidBitmaps                           () const;
        void                    SetFidBitmaps                           ( List < nodptr<class CPlugBitmap> >& value );

        uint                    GetLayerCount                           () const;
        void                    SetLayerCount                           ( uint value );

