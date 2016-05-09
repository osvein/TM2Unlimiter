        enum { CLASSID = 0x24014000 };

        static CTrackManiaRace* CreateInstance ();

        bool                    GetForceDisplayNames                    () const;
        void                    SetForceDisplayNames                    ( bool value );

        float                   GetFps                                  () const;
        void                    SetFps                                  ( float value );

        class CTrackMania*      GetGame                                 () const;
        void                    SetGame                                 ( class CTrackMania* value );

        bool                    GetIsBestRaceGhostVisible               () const;
        void                    SetIsBestRaceGhostVisible               ( bool value );

        uint                    GetLapCount                             () const;
        void                    SetLapCount                             ( uint value );

        class CGameMobil*       GetLocalPlayerMobil                     () const;
        void                    SetLocalPlayerMobil                     ( class CGameMobil* value );

        uint                    GetNbPlayers                            () const;
        void                    SetNbPlayers                            ( uint value );

        uint                    GetNbRespawns                           () const;
        void                    SetNbRespawns                           ( uint value );

        float                   GetOutroDuration                        () const;
        void                    SetOutroDuration                        ( float value );

        List < nodptr<class CGameCtnGhost> >& GetRaceGhosts                           () const;
        void                    SetRaceGhosts                           ( List < nodptr<class CGameCtnGhost> >& value );

        class CGameCtnReplayRecord* GetValidateAReplay                      () const;
        void                    SetValidateAReplay                      ( class CGameCtnReplayRecord* value );

        void                    LocalPlayerReset                        ();
        void                    OnPlayerPositionSend                    ();
        void                    ResetForParam                           ();
