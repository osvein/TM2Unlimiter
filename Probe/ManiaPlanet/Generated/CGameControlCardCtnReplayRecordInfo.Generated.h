        enum { CLASSID = 0x030C8000 };

        static CGameControlCardCtnReplayRecordInfo* CreateInstance ();

        bool                    GetShortName                            () const;
        void                    SetShortName                            ( bool value );

        StringW                 GetStrName                              () const;
        void                    SetStrName                              ( StringW value );

        uint                    GetTime                                 () const;
        void                    SetTime                                 ( uint value );

