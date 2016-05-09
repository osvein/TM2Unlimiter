        enum { CLASSID = 0x030DA000 };

        static CGameControlCardCtnGhostInfo* CreateInstance ();

        StringW                 GetStrName                              () const;
        void                    SetStrName                              ( StringW value );

        uint                    GetTime                                 () const;
        void                    SetTime                                 ( uint value );

