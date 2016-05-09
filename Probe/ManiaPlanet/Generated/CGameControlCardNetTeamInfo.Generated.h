        enum { CLASSID = 0x030DC000 };

        static CGameControlCardNetTeamInfo* CreateInstance ();

        uint                    GetDraws                                () const;
        void                    SetDraws                                ( uint value );

        class CPlugBitmap*      GetLogo                                 () const;
        void                    SetLogo                                 ( class CPlugBitmap* value );

        uint                    GetLosses                               () const;
        void                    SetLosses                               ( uint value );

        uint                    GetMembersCount                         () const;
        void                    SetMembersCount                         ( uint value );

        List < nodptr<class CControlListItem> >& GetNodsMembers                          () const;
        void                    SetNodsMembers                          ( List < nodptr<class CControlListItem> >& value );

        uint                    GetRanking                              () const;
        void                    SetRanking                              ( uint value );

        StringW                 GetStrDescription                       () const;
        void                    SetStrDescription                       ( StringW value );

        StringA                 GetStrHomeUrl                           () const;
        void                    SetStrHomeUrl                           ( StringA value );

        StringA                 GetStrLogoUrl                           () const;
        void                    SetStrLogoUrl                           ( StringA value );

        StringW                 GetStrName                              () const;
        void                    SetStrName                              ( StringW value );

        StringW                 GetStrPath                              () const;
        void                    SetStrPath                              ( StringW value );

        uint                    GetWins                                 () const;
        void                    SetWins                                 ( uint value );

