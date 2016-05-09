        enum { CLASSID = 0x030D5000 };

        static CGameControlCardCtnArticle* CreateInstance ();

        class CPlugBitmap*      GetIcon                                 () const;
        void                    SetIcon                                 ( class CPlugBitmap* value );

        StringW                 GetStrName                              () const;
        void                    SetStrName                              ( StringW value );

