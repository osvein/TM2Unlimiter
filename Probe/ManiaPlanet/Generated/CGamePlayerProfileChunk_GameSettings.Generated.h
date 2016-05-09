        enum { CLASSID = 0x0312D000 };

        static CGamePlayerProfileChunk_GameSettings* CreateInstance ();

        bool                    GetAdvancedCreate                       () const;
        void                    SetAdvancedCreate                       ( bool value );

        bool                    GetAllowDownload                        () const;
        void                    SetAllowDownload                        ( bool value );

        bool                    GetAutoSaveReplayOnMulti                () const;
        void                    SetAutoSaveReplayOnMulti                ( bool value );

        bool                    GetDownloadOfficialRecordReplaysForGroup() const;
        void                    SetDownloadOfficialRecordReplaysForGroup( bool value );

        bool                    GetEnableAvatars                        () const;
        void                    SetEnableAvatars                        ( bool value );

        bool                    GetEnableChat                           () const;
        void                    SetEnableChat                           ( bool value );

        bool                    GetEnablePlayerSkinGeom                 () const;
        void                    SetEnablePlayerSkinGeom                 ( bool value );

        bool                    GetEnableUnlimitedHorns                 () const;
        void                    SetEnableUnlimitedHorns                 ( bool value );

        uint                    GetLadderMode                           () const;
        void                    SetLadderMode                           ( uint value );

        uint                    GetMaxPlayerCount                       () const;
        void                    SetMaxPlayerCount                       ( uint value );

        uint                    GetMaxSpectatorCount                    () const;
        void                    SetMaxSpectatorCount                    ( uint value );

        uint                    GetNetStateQuality                      () const;
        void                    SetNetStateQuality                      ( uint value );

        uint                    GetNetworkGameMode                      () const;
        void                    SetNetworkGameMode                      ( uint value );

        bool                    GetProposeSimpleEditor                  () const;
        void                    SetProposeSimpleEditor                  ( bool value );

        float                   GetRumbleIntensity                      () const;
        void                    SetRumbleIntensity                      ( float value );

        StringW                 GetServerComment                        () const;
        void                    SetServerComment                        ( StringW value );

        StringW                 GetServerName                           () const;
        void                    SetServerName                           ( StringW value );

        class CGameCtnMediaShootParams* GetShootParamsVideo                     () const;
        void                    SetShootParamsVideo                     ( class CGameCtnMediaShootParams* value );

        float                   GetStereoscopyAdvancedScreenDist        () const;
        void                    SetStereoscopyAdvancedScreenDist        ( float value );

        float                   GetStereoscopyStrength01                () const;
        void                    SetStereoscopyStrength01                ( float value );

        uint                    GetUnlockClickCount                     () const;
        void                    SetUnlockClickCount                     ( uint value );

        bool                    GetUnlockCreatedTrack                   () const;
        void                    SetUnlockCreatedTrack                   ( bool value );

        bool                    GetUnlockHadBuddy                       () const;
        void                    SetUnlockHadBuddy                       ( bool value );

        bool                    GetUnlockInvitedBuddy                   () const;
        void                    SetUnlockInvitedBuddy                   ( bool value );

        bool                    GetUnlockPlayedHotSeat                  () const;
        void                    SetUnlockPlayedHotSeat                  ( bool value );

        bool                    GetUnlockPlayedOnline                   () const;
        void                    SetUnlockPlayedOnline                   ( bool value );

        bool                    GetUnlockSentScore                      () const;
        void                    SetUnlockSentScore                      ( bool value );

        bool                    GetUnlockSponsoredBuddy                 () const;
        void                    SetUnlockSponsoredBuddy                 ( bool value );

        bool                    GetUnlockTalkedToFriend                 () const;
        void                    SetUnlockTalkedToFriend                 ( bool value );

