        enum { CLASSID = 0x030CD000 };

        static CGameRemoteBufferDataInfoRankings* CreateInstance ();

        uint                    GetCountAchievementRankingPerPage       () const;
        void                    SetCountAchievementRankingPerPage       ( uint value );

        uint                    GetCountLeagueRankingPerPage            () const;
        void                    SetCountLeagueRankingPerPage            ( uint value );

        uint                    GetCountPlayerRankingPerPage            () const;
        void                    SetCountPlayerRankingPerPage            ( uint value );

        uint                    GetCountSkillRankingPerPage             () const;
        void                    SetCountSkillRankingPerPage             ( uint value );

        uint                    GetCountTeamRankingPerPage              () const;
        void                    SetCountTeamRankingPerPage              ( uint value );

        uint                    GetRefreshAchievementRankingDuration    () const;
        void                    SetRefreshAchievementRankingDuration    ( uint value );

        uint                    GetRefreshLeagueRankingDuration         () const;
        void                    SetRefreshLeagueRankingDuration         ( uint value );

        uint                    GetRefreshPlayerRankingDuration         () const;
        void                    SetRefreshPlayerRankingDuration         ( uint value );

        uint                    GetRefreshSkillRankingDuration          () const;
        void                    SetRefreshSkillRankingDuration          ( uint value );

        uint                    GetRefreshTeamRankingDuration           () const;
        void                    SetRefreshTeamRankingDuration           ( uint value );

