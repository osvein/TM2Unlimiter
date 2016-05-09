        enum { CLASSID = 0x09036000 };

        static CPlugBitmapPacker* CreateInstance ();

        uint                    GetBitmapSizeMax                        () const;
        void                    SetBitmapSizeMax                        ( uint value );

        class CSystemFidsFolder* GetFidsBrowseMaterials                  () const;
        void                    SetFidsBrowseMaterials                  ( class CSystemFidsFolder* value );

        class CSystemFidsFolder* GetFidsBrowseSolids                     () const;
        void                    SetFidsBrowseSolids                     ( class CSystemFidsFolder* value );

        List < nodptr<class CPlugBitmapPackInput> >& GetPackInputs                           () const;
        void                    SetPackInputs                           ( List < nodptr<class CPlugBitmapPackInput> >& value );

        List < nodptr<class CPlugBitmapPack> >& GetPacks                                () const;
        void                    SetPacks                                ( List < nodptr<class CPlugBitmapPack> >& value );

        void                    AddPackInput                            ();
        void                    FidParametersPush                       ();
        void                    FindPackListFromPath                    ();
        void                    FindTextureTiling                       ();
        void                    PackBitmaps                             ();
