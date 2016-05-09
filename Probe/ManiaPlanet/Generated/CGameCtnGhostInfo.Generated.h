        enum { CLASSID = 0x03091000 };

        static CGameCtnGhostInfo* CreateInstance ();

        StringA                 GetLogin                                () const;
        void                    SetLogin                                ( StringA value );

        StringW                 GetNickname                             () const;
        void                    SetNickname                             ( StringW value );

        uint                    GetStuntsScore                          () const;
        void                    SetStuntsScore                          ( uint value );

        uint                    GetTime                                 () const;
        void                    SetTime                                 ( uint value );

