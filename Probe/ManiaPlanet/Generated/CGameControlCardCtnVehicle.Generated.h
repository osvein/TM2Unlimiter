        enum { CLASSID = 0x030DD000 };

        static CGameControlCardCtnVehicle* CreateInstance ();

        class CPlugBitmap*      GetIcon                                 () const;
        void                    SetIcon                                 ( class CPlugBitmap* value );

        StringW                 GetStrName                              () const;
        void                    SetStrName                              ( StringW value );

