        enum { CLASSID = 0x03049000 };

        static CGameLeagueManager* CreateInstance ();

        uint                    GetCacheDuration                        () const;
        void                    SetCacheDuration                        ( uint value );

        List < nodptr<class CGameLeague> >& GetLeagues                              () const;
        void                    SetLeagues                              ( List < nodptr<class CGameLeague> >& value );

