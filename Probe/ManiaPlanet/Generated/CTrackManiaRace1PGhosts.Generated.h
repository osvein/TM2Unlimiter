        enum { CLASSID = 0x24078000 };

        static CTrackManiaRace1PGhosts* CreateInstance ();

        List < nodptr<class CGameCtnGhostInfo> >& GetChallengeGhostInfos                  () const;
        void                    SetChallengeGhostInfos                  ( List < nodptr<class CGameCtnGhostInfo> >& value );

        Array < class CGameCtnGhost* >& GetMedalGhosts                          () const;
        void                    SetMedalGhosts                          ( Array < class CGameCtnGhost* >& value );

