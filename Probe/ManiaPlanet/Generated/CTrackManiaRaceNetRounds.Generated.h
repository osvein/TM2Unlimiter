        enum { CLASSID = 0x24037000 };

        static CTrackManiaRaceNetRounds* CreateInstance ();

        uint                    GetCupRoundsPerChallenge                () const;
        void                    SetCupRoundsPerChallenge                ( uint value );

        uint                    GetCupWarmUpDuration                    () const;
        void                    SetCupWarmUpDuration                    ( uint value );

        uint                    GetNbValidRounds                        () const;
        void                    SetNbValidRounds                        ( uint value );

