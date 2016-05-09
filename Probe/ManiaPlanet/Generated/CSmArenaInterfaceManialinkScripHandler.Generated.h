        enum { CLASSID = 0x2D003000 };

        static CSmArenaInterfaceManialinkScripHandler* CreateInstance ();

        int                     GetArenaNow                             () const;
        void                    SetArenaNow                             ( int value );

        class CSmPlayer*        GetGUIPlayer                            () const;
        void                    SetGUIPlayer                            ( class CSmPlayer* value );

        class CSmPlayer*        GetInputPlayer                          () const;
        void                    SetInputPlayer                          ( class CSmPlayer* value );

        List < nodptr<class CSmPlayer> >& GetPlayers                              () const;
        void                    SetPlayers                              ( List < nodptr<class CSmPlayer> >& value );

        List < nodptr<class CGameTeamProfile> >& GetTeams                                () const;
        void                    SetTeams                                ( List < nodptr<class CGameTeamProfile> >& value );

