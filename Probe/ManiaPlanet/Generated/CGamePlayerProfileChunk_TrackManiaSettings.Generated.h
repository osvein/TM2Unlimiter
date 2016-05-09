        enum { CLASSID = 0x240D5000 };

        static CGamePlayerProfileChunk_TrackManiaSettings* CreateInstance ();

        List < bool >&          GetIsDisplayRaceHelp                    () const;
        void                    SetIsDisplayRaceHelp                    ( List < bool >& value );

        bool                    GetIsShowPlayerGhost                    () const;
        void                    SetIsShowPlayerGhost                    ( bool value );

        bool                    GetNadeoGhostsUnlockMessage             () const;
        void                    SetNadeoGhostsUnlockMessage             ( bool value );

        Array < bool >&         GetRacePlayerInfoIsShow                 () const;
        void                    SetRacePlayerInfoIsShow                 ( Array < bool >& value );

        uint                    GetRespawnCount                         () const;
        void                    SetRespawnCount                         ( uint value );

        uint                    GetRestartCount                         () const;
        void                    SetRestartCount                         ( uint value );

