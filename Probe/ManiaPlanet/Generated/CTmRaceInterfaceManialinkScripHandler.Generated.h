        enum { CLASSID = 0x24057000 };

        static CTmRaceInterfaceManialinkScripHandler* CreateInstance ();

        class CTrackManiaPlayer* GetGUIPlayer                            () const;
        void                    SetGUIPlayer                            ( class CTrackManiaPlayer* value );

        class CTrackManiaPlayer* GetInputPlayer                          () const;
        void                    SetInputPlayer                          ( class CTrackManiaPlayer* value );

        List < nodptr<class CTrackManiaPlayer> >& GetPlayers                              () const;
        void                    SetPlayers                              ( List < nodptr<class CTrackManiaPlayer> >& value );

