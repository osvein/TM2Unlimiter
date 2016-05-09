        enum { CLASSID = 0x2408C000 };

        static CTrackManiaControlPlayerInfoCard* CreateInstance ();

        class CPlugBitmap*      GetAvatar                               () const;
        void                    SetAvatar                               ( class CPlugBitmap* value );

        bool                    GetIsRoundsMode                         () const;
        void                    SetIsRoundsMode                         ( bool value );

        bool                    GetIsStuntsMode                         () const;
        void                    SetIsStuntsMode                         ( bool value );

        uint                    GetNbSpectators                         () const;
        void                    SetNbSpectators                         ( uint value );

        class CTrackManiaRace*  GetRace                                 () const;
        void                    SetRace                                 ( class CTrackManiaRace* value );

        bool                    GetReadyToGoNext                        () const;
        void                    SetReadyToGoNext                        ( bool value );

        bool                    GetShowBasedTimeInfosInRounds           () const;
        void                    SetShowBasedTimeInfosInRounds           ( bool value );

        uint                    GetSpectatorMode                        () const;
        void                    SetSpectatorMode                        ( uint value );

        StringA                 GetStrBestTimeOrScore                   () const;
        void                    SetStrBestTimeOrScore                   ( StringA value );

        StringA                 GetStrCurrentRaceRank                   () const;
        void                    SetStrCurrentRaceRank                   ( StringA value );

        StringA                 GetStrLadderRaceScore                   () const;
        void                    SetStrLadderRaceScore                   ( StringA value );

        uint                    GetStrLadderRankingSimple               () const;
        void                    SetStrLadderRankingSimple               ( uint value );

        float                   GetStrLadderScore                       () const;
        void                    SetStrLadderScore                       ( float value );

        StringA                 GetStrLadderTeamName                    () const;
        void                    SetStrLadderTeamName                    ( StringA value );

        StringA                 GetStrLastRaceRoundScore                () const;
        void                    SetStrLastRaceRoundScore                ( StringA value );

        StringA                 GetStrOffsetFromBestAtCurrentCP_MmSsCc  () const;
        void                    SetStrOffsetFromBestAtCurrentCP_MmSsCc  ( StringA value );

        StringA                 GetStrPlayerBestRaceScore               () const;
        void                    SetStrPlayerBestRaceScore               ( StringA value );

        StringA                 GetStrPlayerBestRaceTime                () const;
        void                    SetStrPlayerBestRaceTime                ( StringA value );

        StringW                 GetStrPlayerName                        () const;
        void                    SetStrPlayerName                        ( StringW value );

        StringA                 GetStrPlayerRaceBestTimeOrScoreDelay    () const;
        void                    SetStrPlayerRaceBestTimeOrScoreDelay    ( StringA value );

        StringA                 GetStrPrevRaceTimeOrScore               () const;
        void                    SetStrPrevRaceTimeOrScore               ( StringA value );

        StringA                 GetStrRaceBestScore                     () const;
        void                    SetStrRaceBestScore                     ( StringA value );

        StringA                 GetStrRaceBestTime                      () const;
        void                    SetStrRaceBestTime                      ( StringA value );

        StringA                 GetStrScoreOffsetFromBestAtCurrentCP    () const;
        void                    SetStrScoreOffsetFromBestAtCurrentCP    ( StringA value );

        StringA                 GetStrTotalRoundScore                   () const;
        void                    SetStrTotalRoundScore                   ( StringA value );

