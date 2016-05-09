        enum { CLASSID = 0x0A108000 };

        static CManoeuvre*      CreateInstance ();

        float                   GetDuration                             () const;
        void                    SetDuration                             ( float value );

        uint                    GetOldTeamActionIndex                   () const;
        void                    SetOldTeamActionIndex                   ( uint value );

        float                   GetSlowDownCoef                         () const;
        void                    SetSlowDownCoef                         ( float value );

        Id                      GetSound1Id                             () const;
        void                    SetSound1Id                             ( Id value );

        float                   GetSound1Time                           () const;
        void                    SetSound1Time                           ( float value );

        Id                      GetSound2Id                             () const;
        void                    SetSound2Id                             ( Id value );

        float                   GetSound2Time                           () const;
        void                    SetSound2Time                           ( float value );

        Id                      GetTeamActionId                         () const;
        void                    SetTeamActionId                         ( Id value );

