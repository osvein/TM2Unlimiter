        enum { CLASSID = 0x03062000 };

        static CGameSkillScoreComputer* CreateInstance ();

        uint                    GetGameMode                             () const;
        void                    SetGameMode                             ( uint value );

        float                   GetPlayerRank                           () const;
        void                    SetPlayerRank                           ( float value );

        float                   GetPlayersWithSameRecordCount           () const;
        void                    SetPlayersWithSameRecordCount           ( float value );

        uint                    GetRecord                               () const;
        void                    SetRecord                               ( uint value );

        uint                    GetSkillScore                           () const;
        void                    SetSkillScore                           ( uint value );

        float                   GetTotalPlayersCount                    () const;
        void                    SetTotalPlayersCount                    ( float value );

