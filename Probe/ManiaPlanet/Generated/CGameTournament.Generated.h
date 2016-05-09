        enum { CLASSID = 0x030CF000 };

        static CGameTournament* CreateInstance ();

        uint                    GetContestantsInCount                   () const;
        void                    SetContestantsInCount                   ( uint value );

        uint                    GetContestantsOutCount                  () const;
        void                    SetContestantsOutCount                  ( uint value );

        StringW                 GetDescription                          () const;
        void                    SetDescription                          ( StringW value );

        class CSystemData*      GetLogo                                 () const;
        void                    SetLogo                                 ( class CSystemData* value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        StringW                 GetPath                                 () const;
        void                    SetPath                                 ( StringW value );

        uint                    GetRoundsCount                          () const;
        void                    SetRoundsCount                          ( uint value );

