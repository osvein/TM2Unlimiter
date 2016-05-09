        enum { CLASSID = 0x0308C000 };

        static CGamePlayerProfile* CreateInstance ();

        class CGamePlayerProfileChunk_AccountSettings* GetAccountSettings                      () const;
        void                    SetAccountSettings                      ( class CGamePlayerProfileChunk_AccountSettings* value );

        List < nodptr<class CGamePlayerProfileChunk> >& GetChunks                               () const;
        void                    SetChunks                               ( List < nodptr<class CGamePlayerProfileChunk> >& value );

        List < nodptr<class CGamePlayerProfileChunk_Campaign> >& GetCustomCampaigns                      () const;
        void                    SetCustomCampaigns                      ( List < nodptr<class CGamePlayerProfileChunk_Campaign> >& value );

        StringW                 GetDisplayProfileName                   () const;
        void                    SetDisplayProfileName                   ( StringW value );

        class CGamePlayerProfileChunk_GameScores* GetGameScores                           () const;
        void                    SetGameScores                           ( class CGamePlayerProfileChunk_GameScores* value );

        class CGamePlayerProfileChunk_GameSettings* GetGameSettings                         () const;
        void                    SetGameSettings                         ( class CGamePlayerProfileChunk_GameSettings* value );

        class CGamePlayerProfileChunk_GameStats* GetGameStats                            () const;
        void                    SetGameStats                            ( class CGamePlayerProfileChunk_GameStats* value );

        List < nodptr<class CGamePlayerProfileChunk_InputBindingsConfig> >& GetInputBindingsConfigs                 () const;
        void                    SetInputBindingsConfigs                 ( List < nodptr<class CGamePlayerProfileChunk_InputBindingsConfig> >& value );

        class CGamePlayerProfileChunk_InterfaceSettings* GetInterfaceSettings                    () const;
        void                    SetInterfaceSettings                    ( class CGamePlayerProfileChunk_InterfaceSettings* value );

        List < nodptr<class CGamePlayerProfileChunk_PackagesInfos> >& GetPackagesInfosChunks                  () const;
        void                    SetPackagesInfosChunks                  ( List < nodptr<class CGamePlayerProfileChunk_PackagesInfos> >& value );

        StringA                 GetProfileName                          () const;
        void                    SetProfileName                          ( StringA value );

        class CScriptTraitsPersistent* GetScriptPersistentTraits_NoTitle       () const;
        void                    SetScriptPersistentTraits_NoTitle       ( class CScriptTraitsPersistent* value );

        uint                    GetTotalPlayTime                        () const;
        void                    SetTotalPlayTime                        ( uint value );

        class CGamePlayerProfileChunk_VehiclesSettings* GetVehiclesSettings                     () const;
        void                    SetVehiclesSettings                     ( class CGamePlayerProfileChunk_VehiclesSettings* value );

