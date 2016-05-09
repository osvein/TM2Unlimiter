        enum { CLASSID = 0x2D005000 };

        static CSmArenaScore*   CreateInstance ();

        uint                    GetDamageInflicted                      () const;
        void                    SetDamageInflicted                      ( uint value );

        uint                    GetDamageInflicted_Ed                   () const;
        void                    SetDamageInflicted_Ed                   ( uint value );

        uint                    GetDamageTaken                          () const;
        void                    SetDamageTaken                          ( uint value );

        uint                    GetDamageTaken_Ed                       () const;
        void                    SetDamageTaken_Ed                       ( uint value );

        uint                    GetNbEliminationsInflicted              () const;
        void                    SetNbEliminationsInflicted              ( uint value );

        uint                    GetNbEliminationsInflicted_Ed           () const;
        void                    SetNbEliminationsInflicted_Ed           ( uint value );

        uint                    GetNbEliminationsTaken                  () const;
        void                    SetNbEliminationsTaken                  ( uint value );

        uint                    GetNbEliminationsTaken_Ed               () const;
        void                    SetNbEliminationsTaken_Ed               ( uint value );

        uint                    GetNbRespawnsRequested                  () const;
        void                    SetNbRespawnsRequested                  ( uint value );

        uint                    GetNbRespawnsRequested_Ed               () const;
        void                    SetNbRespawnsRequested_Ed               ( uint value );

        uint                    GetPoints                               () const;
        void                    SetPoints                               ( uint value );

        uint                    GetRoundPoints                          () const;
        void                    SetRoundPoints                          ( uint value );

        void                    Reset                                   ();
