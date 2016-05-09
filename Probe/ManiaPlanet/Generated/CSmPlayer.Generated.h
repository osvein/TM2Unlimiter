        enum { CLASSID = 0x2D008000 };

        static CSmPlayer*       CreateInstance ();

        enum eSpawnStatus
        {
            SPAWNSTATUS_NOTSPAWNED,
            SPAWNSTATUS_SPAWNING,
            SPAWNSTATUS_SPAWNED
        };
        static std::wstring     SpawnStatusToString                     ( eSpawnStatus value );
        static eSpawnStatus     ParseSpawnStatus                        ( const std::wstring& wstrName );

        Vec3D                   GetAimDirection                         () const;
        void                    SetAimDirection                         ( Vec3D value );

        float                   GetAimPitch                             () const;
        void                    SetAimPitch                             ( float value );

        float                   GetAimYaw                               () const;
        void                    SetAimYaw                               ( float value );

        float                   GetAmmoGain                             () const;
        void                    SetAmmoGain                             ( float value );

        float                   GetAmmoPower                            () const;
        void                    SetAmmoPower                            ( float value );

        uint                    GetArmor                                () const;
        void                    SetArmor                                ( uint value );

        uint                    GetArmorGain                            () const;
        void                    SetArmorGain                            ( uint value );

        uint                    GetArmorMax                             () const;
        void                    SetArmorMax                             ( uint value );

        float                   GetArmorPower                           () const;
        void                    SetArmorPower                           ( float value );

        bool                    GetAutoSwitchWeapon                     () const;
        void                    SetAutoSwitchWeapon                     ( bool value );

        class CSmBlockPole*     GetBlockPole                            () const;
        void                    SetBlockPole                            ( class CSmBlockPole* value );

        float                   GetBotAgressivity                       () const;
        void                    SetBotAgressivity                       ( float value );

        int                     GetBotAgressivityDoublingTime           () const;
        void                    SetBotAgressivityDoublingTime           ( int value );

        int                     GetBotPathOffset                        () const;
        void                    SetBotPathOffset                        ( int value );

        float                   GetBotPathSpeedCoef                     () const;
        void                    SetBotPathSpeedCoef                     ( float value );

        int                     GetCurrentClan                          () const;
        void                    SetCurrentClan                          ( int value );

        uint                    GetEdTeam                               () const;
        void                    SetEdTeam                               ( uint value );

        int                     GetEndTime                              () const;
        void                    SetEndTime                              ( int value );

        bool                    GetIsCapturing                          () const;
        void                    SetIsCapturing                          ( bool value );

        bool                    GetIsFakePlayer                         () const;
        void                    SetIsFakePlayer                         ( bool value );

        bool                    GetIsHighlighted                        () const;
        void                    SetIsHighlighted                        ( bool value );

        bool                    GetIsInOffZone                          () const;
        void                    SetIsInOffZone                          ( bool value );

        bool                    GetIsTouchingGround                     () const;
        void                    SetIsTouchingGround                     ( bool value );

        bool                    GetIsUnderground                        () const;
        void                    SetIsUnderground                        ( bool value );

        StringA                 GetLogin                                () const;
        void                    SetLogin                                ( StringA value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        Vec3D                   GetPosition                             () const;
        void                    SetPosition                             ( Vec3D value );

        int                     GetRequestedClan                        () const;
        void                    SetRequestedClan                        ( int value );

        bool                    GetRequestsSpectate                     () const;
        void                    SetRequestsSpectate                     ( bool value );

        class CSmArenaScore*    GetScore                                () const;
        void                    SetScore                                ( class CSmArenaScore* value );

        int                     GetSoloScore                            () const;
        void                    SetSoloScore                            ( int value );

        int                     GetSoloTime                             () const;
        void                    SetSoloTime                             ( int value );

        int                     GetSpawnIndex                           () const;
        void                    SetSpawnIndex                           ( int value );

        eSpawnStatus            GetSpawnStatus                          () const;
        void                    SetSpawnStatus                          ( eSpawnStatus value );

        bool                    GetSpeaking                             () const;
        void                    SetSpeaking                             ( bool value );

        uint                    GetStamina                              () const;
        void                    SetStamina                              ( uint value );

        float                   GetStaminaGain                          () const;
        void                    SetStaminaGain                          ( float value );

        float                   GetStaminaMax                           () const;
        void                    SetStaminaMax                           ( float value );

        float                   GetStaminaPower                         () const;
        void                    SetStaminaPower                         ( float value );

        int                     GetStartTime                            () const;
        void                    SetStartTime                            ( int value );

