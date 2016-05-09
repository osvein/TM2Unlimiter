        enum { CLASSID = 0x2409F000 };

        static CTrackManiaScore* CreateInstance ();

        uint                    GetBestRaceInputsTimeStartInReplay      () const;
        void                    SetBestRaceInputsTimeStartInReplay      ( uint value );

        uint                    GetBestStuntsScore                      () const;
        void                    SetBestStuntsScore                      ( uint value );

        uint                    GetBestTime                             () const;
        void                    SetBestTime                             ( uint value );

        uint                    GetLapsNbCheckpoint                     () const;
        void                    SetLapsNbCheckpoint                     ( uint value );

        uint                    GetLastRaceDeltaPoints                  () const;
        void                    SetLastRaceDeltaPoints                  ( uint value );

        uint                    GetLastRaceTime                         () const;
        void                    SetLastRaceTime                         ( uint value );

        uint                    GetRaceInputsDuration                   () const;
        void                    SetRaceInputsDuration                   ( uint value );

        uint                    GetRaceInputsValidationSeed             () const;
        void                    SetRaceInputsValidationSeed             ( uint value );

        uint                    GetScore                                () const;
        void                    SetScore                                ( uint value );

        StringA                 GetStrBestStuntsScore                   () const;
        void                    SetStrBestStuntsScore                   ( StringA value );

        StringA                 GetStrPrevRaceDeltaPoints               () const;
        void                    SetStrPrevRaceDeltaPoints               ( StringA value );

        StringA                 GetStrPrevRaceTime                      () const;
        void                    SetStrPrevRaceTime                      ( StringA value );

        StringA                 GetStrRaceBestTime                      () const;
        void                    SetStrRaceBestTime                      ( StringA value );

