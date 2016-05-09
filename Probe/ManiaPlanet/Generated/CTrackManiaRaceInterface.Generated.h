        enum { CLASSID = 0x240C6000 };

        static CTrackManiaRaceInterface* CreateInstance ();

        uint                    GetCarDistanceDisplay0                  () const;
        void                    SetCarDistanceDisplay0                  ( uint value );

        uint                    GetCarDistanceDisplay1                  () const;
        void                    SetCarDistanceDisplay1                  ( uint value );

        uint                    GetCarDistanceDisplay2                  () const;
        void                    SetCarDistanceDisplay2                  ( uint value );

        uint                    GetCarDistanceDisplay3                  () const;
        void                    SetCarDistanceDisplay3                  ( uint value );

        uint                    GetCarSpeedDisplay0                     () const;
        void                    SetCarSpeedDisplay0                     ( uint value );

        uint                    GetCarSpeedDisplay1                     () const;
        void                    SetCarSpeedDisplay1                     ( uint value );

        uint                    GetCarSpeedDisplay2                     () const;
        void                    SetCarSpeedDisplay2                     ( uint value );

        uint                    GetCarSpeedDisplay3                     () const;
        void                    SetCarSpeedDisplay3                     ( uint value );

        StringW                 GetCheckPointInfo_CurrentRacePositionText0() const;
        void                    SetCheckPointInfo_CurrentRacePositionText0( StringW value );

        StringW                 GetCheckPointInfo_CurrentRacePositionText1() const;
        void                    SetCheckPointInfo_CurrentRacePositionText1( StringW value );

        StringW                 GetCheckPointInfo_CurrentRacePositionText2() const;
        void                    SetCheckPointInfo_CurrentRacePositionText2( StringW value );

        StringW                 GetCheckPointInfo_CurrentRacePositionText3() const;
        void                    SetCheckPointInfo_CurrentRacePositionText3( StringW value );

        StringA                 GetCheckPointInfo_OffsetTimeText0       () const;
        void                    SetCheckPointInfo_OffsetTimeText0       ( StringA value );

        StringA                 GetCheckPointInfo_OffsetTimeText1       () const;
        void                    SetCheckPointInfo_OffsetTimeText1       ( StringA value );

        StringA                 GetCheckPointInfo_OffsetTimeText2       () const;
        void                    SetCheckPointInfo_OffsetTimeText2       ( StringA value );

        StringA                 GetCheckPointInfo_OffsetTimeText3       () const;
        void                    SetCheckPointInfo_OffsetTimeText3       ( StringA value );

        StringA                 GetCheckPointInfo_TimeText0             () const;
        void                    SetCheckPointInfo_TimeText0             ( StringA value );

        StringA                 GetCheckPointInfo_TimeText1             () const;
        void                    SetCheckPointInfo_TimeText1             ( StringA value );

        StringA                 GetCheckPointInfo_TimeText2             () const;
        void                    SetCheckPointInfo_TimeText2             ( StringA value );

        StringA                 GetCheckPointInfo_TimeText3             () const;
        void                    SetCheckPointInfo_TimeText3             ( StringA value );

        float                   GetDownloadProgressActivity             () const;
        void                    SetDownloadProgressActivity             ( float value );

        float                   GetDownloadProgressAvatarsCur           () const;
        void                    SetDownloadProgressAvatarsCur           ( float value );

        float                   GetDownloadProgressAvatarsTotal         () const;
        void                    SetDownloadProgressAvatarsTotal         ( float value );

        float                   GetDownloadProgressChallengeCur         () const;
        void                    SetDownloadProgressChallengeCur         ( float value );

        float                   GetDownloadProgressChallengeTotal       () const;
        void                    SetDownloadProgressChallengeTotal       ( float value );

        float                   GetDownloadProgressMapsCur              () const;
        void                    SetDownloadProgressMapsCur              ( float value );

        float                   GetDownloadProgressMapsTotal            () const;
        void                    SetDownloadProgressMapsTotal            ( float value );

        float                   GetDownloadProgressPlayersCur           () const;
        void                    SetDownloadProgressPlayersCur           ( float value );

        float                   GetDownloadProgressPlayersTotal         () const;
        void                    SetDownloadProgressPlayersTotal         ( float value );

        class CTrackManiaNetwork* GetNetwork                              () const;
        void                    SetNetwork                              ( class CTrackManiaNetwork* value );

        class CTrackManiaRace*  GetRace                                 () const;
        void                    SetRace                                 ( class CTrackManiaRace* value );

        uint                    GetRaceChrono0                          () const;
        void                    SetRaceChrono0                          ( uint value );

        uint                    GetRaceChrono1                          () const;
        void                    SetRaceChrono1                          ( uint value );

        uint                    GetRaceChrono2                          () const;
        void                    SetRaceChrono2                          ( uint value );

        uint                    GetRaceChrono3                          () const;
        void                    SetRaceChrono3                          ( uint value );

        uint                    GetTimeCountDown                        () const;
        void                    SetTimeCountDown                        ( uint value );

        class CTrackManiaPlayer* GetUiPlayer0                            () const;
        void                    SetUiPlayer0                            ( class CTrackManiaPlayer* value );

        class CTrackManiaPlayer* GetUiPlayer1                            () const;
        void                    SetUiPlayer1                            ( class CTrackManiaPlayer* value );

        class CTrackManiaPlayer* GetUiPlayer2                            () const;
        void                    SetUiPlayer2                            ( class CTrackManiaPlayer* value );

        class CTrackManiaPlayer* GetUiPlayer3                            () const;
        void                    SetUiPlayer3                            ( class CTrackManiaPlayer* value );

        class CTrackManiaPlayerInfo* GetUiPlayerInfo0                        () const;
        void                    SetUiPlayerInfo0                        ( class CTrackManiaPlayerInfo* value );

        class CTrackManiaPlayerInfo* GetUiPlayerInfo1                        () const;
        void                    SetUiPlayerInfo1                        ( class CTrackManiaPlayerInfo* value );

        class CTrackManiaPlayerInfo* GetUiPlayerInfo2                        () const;
        void                    SetUiPlayerInfo2                        ( class CTrackManiaPlayerInfo* value );

        class CTrackManiaPlayerInfo* GetUiPlayerInfo3                        () const;
        void                    SetUiPlayerInfo3                        ( class CTrackManiaPlayerInfo* value );

        uint                    GetWarmUpRoundCount                     () const;
        void                    SetWarmUpRoundCount                     ( uint value );

        uint                    GetWarmUpRoundCur                       () const;
        void                    SetWarmUpRoundCur                       ( uint value );

        void                    ShowChallengeCard                       ();
