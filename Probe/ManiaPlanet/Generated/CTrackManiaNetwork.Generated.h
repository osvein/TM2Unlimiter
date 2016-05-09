        enum { CLASSID = 0x2402F000 };

        static CTrackManiaNetwork* CreateInstance ();

        bool                    GetCurrentRaceIsValid                   () const;
        void                    SetCurrentRaceIsValid                   ( bool value );

        bool                    GetForceEndRound                        () const;
        void                    SetForceEndRound                        ( bool value );

        class CTrackManiaPlayerInfo* GetPlayerInfo                           () const;
        void                    SetPlayerInfo                           ( class CTrackManiaPlayerInfo* value );

        class CTrackManiaRaceRules* GetTmRaceRules                          () const;
        void                    SetTmRaceRules                          ( class CTrackManiaRaceRules* value );

        uint                    GetWaitTimeBeforeTwoValidations         () const;
        void                    SetWaitTimeBeforeTwoValidations         ( uint value );

