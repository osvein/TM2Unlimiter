        enum { CLASSID = 0x030D9000 };

        static CGameControlCardCtnGhost* CreateInstance ();

        StringW                 GetStrName                              () const;
        void                    SetStrName                              ( StringW value );

        uint                    GetTime                                 () const;
        void                    SetTime                                 ( uint value );

