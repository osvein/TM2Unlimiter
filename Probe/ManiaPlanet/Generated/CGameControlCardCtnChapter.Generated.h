        enum { CLASSID = 0x030D8000 };

        static CGameControlCardCtnChapter* CreateInstance ();

        class CPlugBitmap*      GetBannerChallenge                      () const;
        void                    SetBannerChallenge                      ( class CPlugBitmap* value );

        class CPlugBitmap*      GetIcon                                 () const;
        void                    SetIcon                                 ( class CPlugBitmap* value );

        StringW                 GetStrName                              () const;
        void                    SetStrName                              ( StringW value );

