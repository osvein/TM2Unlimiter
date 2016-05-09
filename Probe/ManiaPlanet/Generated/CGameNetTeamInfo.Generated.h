        enum { CLASSID = 0x03025000 };

        static CGameNetTeamInfo* CreateInstance ();

        StringW                 GetDescription                          () const;
        void                    SetDescription                          ( StringW value );

        uint                    GetDraws                                () const;
        void                    SetDraws                                ( uint value );

        class CSystemData*      GetLogo                                 () const;
        void                    SetLogo                                 ( class CSystemData* value );

        uint                    GetLosses                               () const;
        void                    SetLosses                               ( uint value );

        uint                    GetMembersCount                         () const;
        void                    SetMembersCount                         ( uint value );

        List < StringA >&       GetMembersLogin                         () const;
        void                    SetMembersLogin                         ( List < StringA >& value );

        List < StringW >&       GetMembersNickName                      () const;
        void                    SetMembersNickName                      ( List < StringW >& value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        StringW                 GetPath                                 () const;
        void                    SetPath                                 ( StringW value );

        uint                    GetRanking                              () const;
        void                    SetRanking                              ( uint value );

        uint                    GetWins                                 () const;
        void                    SetWins                                 ( uint value );

