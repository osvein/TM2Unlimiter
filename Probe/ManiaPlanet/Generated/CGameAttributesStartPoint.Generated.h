        enum { CLASSID = 0x03074000 };

        static CGameAttributesStartPoint* CreateInstance ();

        Matrix43                GetSpawnLoc                             () const;
        void                    SetSpawnLoc                             ( Matrix43 value );

        uint                    GetTeam                                 () const;
        void                    SetTeam                                 ( uint value );

