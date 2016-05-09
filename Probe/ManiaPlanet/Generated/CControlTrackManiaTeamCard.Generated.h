        enum { CLASSID = 0x24090000 };

        static CControlTrackManiaTeamCard* CreateInstance ();

        StringW                 GetStrTeamName                          () const;
        void                    SetStrTeamName                          ( StringW value );

        StringA                 GetStrTeamScore                         () const;
        void                    SetStrTeamScore                         ( StringA value );

        uint                    GetTeam                                 () const;
        void                    SetTeam                                 ( uint value );

