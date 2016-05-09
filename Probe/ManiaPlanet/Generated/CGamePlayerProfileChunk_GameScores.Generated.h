        enum { CLASSID = 0x03146000 };

        static CGamePlayerProfileChunk_GameScores* CreateInstance ();

        List < nodptr<class CGamePlayerProfileChunk_ChallengesScores> >& GetChallengesScoresChunks               () const;
        void                    SetChallengesScoresChunks               ( List < nodptr<class CGamePlayerProfileChunk_ChallengesScores> >& value );

        uint                    GetGlobalSkillPoints                    () const;
        void                    SetGlobalSkillPoints                    ( uint value );

