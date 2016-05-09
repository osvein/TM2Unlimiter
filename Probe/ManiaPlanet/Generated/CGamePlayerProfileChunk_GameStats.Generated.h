        enum { CLASSID = 0x03147000 };

        static CGamePlayerProfileChunk_GameStats* CreateInstance ();

        uint                    GetAverageNbFinish                      () const;
        void                    SetAverageNbFinish                      ( uint value );

        uint                    GetAverageNbReset                       () const;
        void                    SetAverageNbReset                       ( uint value );

        uint                    GetAverageTimeInEditChallenge           () const;
        void                    SetAverageTimeInEditChallenge           ( uint value );

        uint                    GetAverageTimeInHotSeat                 () const;
        void                    SetAverageTimeInHotSeat                 ( uint value );

        uint                    GetAverageTimeInNetwork                 () const;
        void                    SetAverageTimeInNetwork                 ( uint value );

        uint                    GetAverageTimeInNetworkCup              () const;
        void                    SetAverageTimeInNetworkCup              ( uint value );

        uint                    GetAverageTimeInNetworkLaps             () const;
        void                    SetAverageTimeInNetworkLaps             ( uint value );

        uint                    GetAverageTimeInNetworkRounds           () const;
        void                    SetAverageTimeInNetworkRounds           ( uint value );

        uint                    GetAverageTimeInNetworkScript           () const;
        void                    SetAverageTimeInNetworkScript           ( uint value );

        uint                    GetAverageTimeInNetworkStunts           () const;
        void                    SetAverageTimeInNetworkStunts           ( uint value );

        uint                    GetAverageTimeInNetworkTimeAttack       () const;
        void                    SetAverageTimeInNetworkTimeAttack       ( uint value );

        uint                    GetAverageTimeInSolo                    () const;
        void                    SetAverageTimeInSolo                    ( uint value );

        uint                    GetAverageTimeInSoloPlatform            () const;
        void                    SetAverageTimeInSoloPlatform            ( uint value );

        uint                    GetAverageTimeInSoloPuzzle              () const;
        void                    SetAverageTimeInSoloPuzzle              ( uint value );

        uint                    GetAverageTimeInSoloRace                () const;
        void                    SetAverageTimeInSoloRace                ( uint value );

        uint                    GetAverageTimeInSoloScript              () const;
        void                    SetAverageTimeInSoloScript              ( uint value );

        uint                    GetAverageTimeInSplitScreen             () const;
        void                    SetAverageTimeInSplitScreen             ( uint value );

        uint                    GetAverageTimePlay                      () const;
        void                    SetAverageTimePlay                      ( uint value );

        List < nodptr<class CGamePlayerProfileChunk_ChallengesStats> >& GetChallengesStatsChunks                () const;
        void                    SetChallengesStatsChunks                ( List < nodptr<class CGamePlayerProfileChunk_ChallengesStats> >& value );

        uint                    GetMaxNbFinish                          () const;
        void                    SetMaxNbFinish                          ( uint value );

        uint                    GetMaxNbReset                           () const;
        void                    SetMaxNbReset                           ( uint value );

        uint                    GetMaxTimeInEditChallenge               () const;
        void                    SetMaxTimeInEditChallenge               ( uint value );

        uint                    GetMaxTimeInHotSeat                     () const;
        void                    SetMaxTimeInHotSeat                     ( uint value );

        uint                    GetMaxTimeInNetwork                     () const;
        void                    SetMaxTimeInNetwork                     ( uint value );

        uint                    GetMaxTimeInNetworkCup                  () const;
        void                    SetMaxTimeInNetworkCup                  ( uint value );

        uint                    GetMaxTimeInNetworkLaps                 () const;
        void                    SetMaxTimeInNetworkLaps                 ( uint value );

        uint                    GetMaxTimeInNetworkRounds               () const;
        void                    SetMaxTimeInNetworkRounds               ( uint value );

        uint                    GetMaxTimeInNetworkScript               () const;
        void                    SetMaxTimeInNetworkScript               ( uint value );

        uint                    GetMaxTimeInNetworkStunts               () const;
        void                    SetMaxTimeInNetworkStunts               ( uint value );

        uint                    GetMaxTimeInNetworkTimeAttack           () const;
        void                    SetMaxTimeInNetworkTimeAttack           ( uint value );

        uint                    GetMaxTimeInSolo                        () const;
        void                    SetMaxTimeInSolo                        ( uint value );

        uint                    GetMaxTimeInSoloPlatform                () const;
        void                    SetMaxTimeInSoloPlatform                ( uint value );

        uint                    GetMaxTimeInSoloPuzzle                  () const;
        void                    SetMaxTimeInSoloPuzzle                  ( uint value );

        uint                    GetMaxTimeInSoloRace                    () const;
        void                    SetMaxTimeInSoloRace                    ( uint value );

        uint                    GetMaxTimeInSoloScript                  () const;
        void                    SetMaxTimeInSoloScript                  ( uint value );

        uint                    GetMaxTimeInSplitScreen                 () const;
        void                    SetMaxTimeInSplitScreen                 ( uint value );

        uint                    GetMaxTimePlay                          () const;
        void                    SetMaxTimePlay                          ( uint value );

        StringW                 GetMostEdited                           () const;
        void                    SetMostEdited                           ( StringW value );

        StringW                 GetMostNetted                           () const;
        void                    SetMostNetted                           ( StringW value );

        StringW                 GetMostPlayed                           () const;
        void                    SetMostPlayed                           ( StringW value );

        StringW                 GetMostRaced                            () const;
        void                    SetMostRaced                            ( StringW value );

        uint                    GetTotalNbChallenges                    () const;
        void                    SetTotalNbChallenges                    ( uint value );

        uint                    GetTotalNbFinish                        () const;
        void                    SetTotalNbFinish                        ( uint value );

        uint                    GetTotalNbReset                         () const;
        void                    SetTotalNbReset                         ( uint value );

        uint                    GetTotalTimeInEditChallenge             () const;
        void                    SetTotalTimeInEditChallenge             ( uint value );

        uint                    GetTotalTimeInEditReplay                () const;
        void                    SetTotalTimeInEditReplay                ( uint value );

        uint                    GetTotalTimeInEditSkin                  () const;
        void                    SetTotalTimeInEditSkin                  ( uint value );

        uint                    GetTotalTimeInHotSeat                   () const;
        void                    SetTotalTimeInHotSeat                   ( uint value );

        uint                    GetTotalTimeInManiaLink                 () const;
        void                    SetTotalTimeInManiaLink                 ( uint value );

        uint                    GetTotalTimeInNetwork                   () const;
        void                    SetTotalTimeInNetwork                   ( uint value );

        uint                    GetTotalTimeInNetworkCup                () const;
        void                    SetTotalTimeInNetworkCup                ( uint value );

        uint                    GetTotalTimeInNetworkLaps               () const;
        void                    SetTotalTimeInNetworkLaps               ( uint value );

        uint                    GetTotalTimeInNetworkRounds             () const;
        void                    SetTotalTimeInNetworkRounds             ( uint value );

        uint                    GetTotalTimeInNetworkScript             () const;
        void                    SetTotalTimeInNetworkScript             ( uint value );

        uint                    GetTotalTimeInNetworkStunts             () const;
        void                    SetTotalTimeInNetworkStunts             ( uint value );

        uint                    GetTotalTimeInNetworkTimeAttack         () const;
        void                    SetTotalTimeInNetworkTimeAttack         ( uint value );

        uint                    GetTotalTimeInSolo                      () const;
        void                    SetTotalTimeInSolo                      ( uint value );

        uint                    GetTotalTimeInSoloPlatform              () const;
        void                    SetTotalTimeInSoloPlatform              ( uint value );

        uint                    GetTotalTimeInSoloPuzzle                () const;
        void                    SetTotalTimeInSoloPuzzle                ( uint value );

        uint                    GetTotalTimeInSoloRace                  () const;
        void                    SetTotalTimeInSoloRace                  ( uint value );

        uint                    GetTotalTimeInSoloScript                () const;
        void                    SetTotalTimeInSoloScript                ( uint value );

        uint                    GetTotalTimeInSplitScreen               () const;
        void                    SetTotalTimeInSplitScreen               ( uint value );

        uint                    GetTotalTimePlay                        () const;
        void                    SetTotalTimePlay                        ( uint value );

