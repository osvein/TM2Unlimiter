        enum { CLASSID = 0x030D0000 };

        static CGameChampionship* CreateInstance ();

        bool                    GetCanSubscribe                         () const;
        void                    SetCanSubscribe                         ( bool value );

        List < nodptr<class CGameLeague> >& GetContestants                          () const;
        void                    SetContestants                          ( List < nodptr<class CGameLeague> >& value );

        StringW                 GetDescription                          () const;
        void                    SetDescription                          ( StringW value );

        class CGameCalendar*    GetGeneralCalendar                      () const;
        void                    SetGeneralCalendar                      ( class CGameCalendar* value );

        bool                    GetIsPrivate                            () const;
        void                    SetIsPrivate                            ( bool value );

        class CSystemData*      GetLogo                                 () const;
        void                    SetLogo                                 ( class CSystemData* value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        StringW                 GetPath                                 () const;
        void                    SetPath                                 ( StringW value );

        List < nodptr<class CGameTournament> >& GetTournaments                          () const;
        void                    SetTournaments                          ( List < nodptr<class CGameTournament> >& value );

