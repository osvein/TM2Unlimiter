        enum { CLASSID = 0x24031000 };

        static CTrackManiaPlayer* CreateInstance ();

        enum eRaceState
        {
            RACESTATE_BEFORESTART,
            RACESTATE_RUNNING,
            RACESTATE_FINISHED,
            RACESTATE_ELIMINATED
        };
        static std::wstring     RaceStateToString                       ( eRaceState value );
        static eRaceState       ParseRaceState                          ( const std::wstring& wstrName );

        bool                    GetAutoPilotIsEnabled                   () const;
        void                    SetAutoPilotIsEnabled                   ( bool value );

        uint                    GetCurCheckpointLapTime                 () const;
        void                    SetCurCheckpointLapTime                 ( uint value );

        uint                    GetCurCheckpointRaceTime                () const;
        void                    SetCurCheckpointRaceTime                ( uint value );

        class CTmRaceResultNod* GetCurLap                               () const;
        void                    SetCurLap                               ( class CTmRaceResultNod* value );

        uint                    GetCurLapIndex                          () const;
        void                    SetCurLapIndex                          ( uint value );

        class CTmRaceResultNod* GetCurRace                              () const;
        void                    SetCurRace                              ( class CTmRaceResultNod* value );

        int                     GetCurTriggerIndex                      () const;
        void                    SetCurTriggerIndex                      ( int value );

        uint                    GetCurrentNbLaps                        () const;
        void                    SetCurrentNbLaps                        ( uint value );

        uint                    GetLapStartTime                         () const;
        void                    SetLapStartTime                         ( uint value );

        uint                    GetNbRespawns                           () const;
        void                    SetNbRespawns                           ( uint value );

        uint                    GetRaceStartTime                        () const;
        void                    SetRaceStartTime                        ( uint value );

        eRaceState              GetRaceState                            () const;
        void                    SetRaceState                            ( eRaceState value );

        Matrix43                GetVehicleSpawnLoc                      () const;
        void                    SetVehicleSpawnLoc                      ( Matrix43 value );

