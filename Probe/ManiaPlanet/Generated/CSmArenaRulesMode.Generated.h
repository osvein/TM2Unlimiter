        enum { CLASSID = 0x2D01A000 };

        static CSmArenaRulesMode* CreateInstance ();

        List < nodptr<class CSmBase> >& GetBases                                () const;
        void                    SetBases                                ( List < nodptr<class CSmBase> >& value );

        List < nodptr<class CSmBlockPole> >& GetBlockPoles                           () const;
        void                    SetBlockPoles                           ( List < nodptr<class CSmBlockPole> >& value );

        List < nodptr<class CSmBlockSpawn> >& GetBlockSpawns                          () const;
        void                    SetBlockSpawns                          ( List < nodptr<class CSmBlockSpawn> >& value );

        List < nodptr<class CSmBlock> >& GetBlocks                               () const;
        void                    SetBlocks                               ( List < nodptr<class CSmBlock> >& value );

        uint                    GetClan1Score                           () const;
        void                    SetClan1Score                           ( uint value );

        uint                    GetClan2Score                           () const;
        void                    SetClan2Score                           ( uint value );

        Array < int >&          GetClanScores                           () const;
        void                    SetClanScores                           ( Array < int >& value );

        uint                    GetClansNbAlive                         () const;
        void                    SetClansNbAlive                         ( uint value );

        uint                    GetClansNbDead                          () const;
        void                    SetClansNbDead                          ( uint value );

        List < uint >&          GetClansNbPlayers                       () const;
        void                    SetClansNbPlayers                       ( List < uint >& value );

        List < uint >&          GetClansNbPlayersAlive                  () const;
        void                    SetClansNbPlayersAlive                  ( List < uint >& value );

        uint                    GetClansNbTotal                         () const;
        void                    SetClansNbTotal                         ( uint value );

        uint                    GetEndTime                              () const;
        void                    SetEndTime                              ( uint value );

        Id                      GetOffZoneCenterBlockId                 () const;
        void                    SetOffZoneCenterBlockId                 ( Id value );

        float                   GetOffZoneRadius                        () const;
        void                    SetOffZoneRadius                        ( float value );

        float                   GetOffZoneRadiusSpeed                   () const;
        void                    SetOffZoneRadiusSpeed                   ( float value );

        List < nodptr<class CSmArenaRulesEvent> >& GetPendingEvents                        () const;
        void                    SetPendingEvents                        ( List < nodptr<class CSmArenaRulesEvent> >& value );

        StringA                 GetPhyCharModelId                       () const;
        void                    SetPhyCharModelId                       ( StringA value );

        List < nodptr<class CSmPlayer> >& GetPlayers                              () const;
        void                    SetPlayers                              ( List < nodptr<class CSmPlayer> >& value );

        uint                    GetPlayersNbAlive                       () const;
        void                    SetPlayersNbAlive                       ( uint value );

        uint                    GetPlayersNbDead                        () const;
        void                    SetPlayersNbDead                        ( uint value );

        uint                    GetPlayersNbTotal                       () const;
        void                    SetPlayersNbTotal                       ( uint value );

        List < nodptr<class CSmArenaScore> >& GetScores                               () const;
        void                    SetScores                               ( List < nodptr<class CSmArenaScore> >& value );

        List < nodptr<class CSmPlayer> >& GetSpectators                           () const;
        void                    SetSpectators                           ( List < nodptr<class CSmPlayer> >& value );

        uint                    GetStartTime                            () const;
        void                    SetStartTime                            ( uint value );

        List < int >&           GetTriggeredSpawns                      () const;
        void                    SetTriggeredSpawns                      ( List < int >& value );

        bool                    GetUseClans                             () const;
        void                    SetUseClans                             ( bool value );

        bool                    GetUseForcedClans                       () const;
        void                    SetUseForcedClans                       ( bool value );

        bool                    GetUseInterractiveScreensIn3d           () const;
        void                    SetUseInterractiveScreensIn3d           ( bool value );

        bool                    GetUseLaserVsBullets                    () const;
        void                    SetUseLaserVsBullets                    ( bool value );

        bool                    GetUsePvPCollisions                     () const;
        void                    SetUsePvPCollisions                     ( bool value );

        bool                    GetUsePvPWeapons                        () const;
        void                    SetUsePvPWeapons                        ( bool value );

        void                    ComputeTriggeredSpawnsForPlayer         ( class CSmPlayer* pPlayer );
        void                    Discard                                 ( class CSmArenaRulesEvent* pEvent );
        int                     GetWeaponIndex                          ( uint weapon );
        void                    PassOn                                  ( class CSmArenaRulesEvent* pEvent );
        void                    ResetTriggersForPlayers                 ( class CSmPlayer* pPlayer );
        void                    SetNbFakePlayers                        ( int iNbClan1, int iNbClan2 );
        void                    SetPlayerAmmo                           ( class CSmPlayer* pPlayer, uint weapon, int iCount );
        void                    SetPlayerAmmoGainDelay                  ( class CSmPlayer* pPlayer, uint weapon, float fDelay );
        void                    SetPlayerAmmoMax                        ( class CSmPlayer* pPlayer, uint weapon, int iCount );
        void                    SetPlayerClan                           ( class CSmPlayer* pPlayer, int iClanNum );
        void                    SetPlayerWeapon                         ( class CSmPlayer* pPlayer, uint defaultWeapon, bool bAutoSwitchWeapon );
        void                    SpawnPlayer                             ( class CSmPlayer* pPlayer, int iClanNum, int iArmor, class CSmBlockSpawn* pBlockSpawn, int iActivationDate );
        void                    UnspawnPlayer                           ( class CSmPlayer* pPlayer );
