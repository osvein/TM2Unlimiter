        enum { CLASSID = 0x03092000 };

        static CGameCtnGhost*   CreateInstance ();

        enum eVehicleCollection
        {

        };
        static std::wstring     VehicleCollectionToString               ( eVehicleCollection value );
        static eVehicleCollection ParseVehicleCollection                  ( const std::wstring& wstrName );

        uint                    GetEventsDuration                       () const;
        void                    SetEventsDuration                       ( uint value );

        StringW                 GetGhostAvatarName                      () const;
        void                    SetGhostAvatarName                      ( StringW value );

        StringA                 GetGhostLogin                           () const;
        void                    SetGhostLogin                           ( StringA value );

        StringW                 GetGhostNickname                        () const;
        void                    SetGhostNickname                        ( StringW value );

        color                   GetLightTrailColor                      () const;
        void                    SetLightTrailColor                      ( color value );

        uint                    GetNbRespawns                           () const;
        void                    SetNbRespawns                           ( uint value );

        Id                      GetPlayerMobilId                        () const;
        void                    SetPlayerMobilId                        ( Id value );

        uint                    GetRaceTime                             () const;
        void                    SetRaceTime                             ( uint value );

        uint                    GetStuntsScore                          () const;
        void                    SetStuntsScore                          ( uint value );

        uint                    GetValidate_CpuKind                     () const;
        void                    SetValidate_CpuKind                     ( uint value );

        uint                    GetValidate_ExeChecksum                 () const;
        void                    SetValidate_ExeChecksum                 ( uint value );

        uint                    GetValidate_OsKind                      () const;
        void                    SetValidate_OsKind                      ( uint value );

        StringA                 GetValidate_RaceSettings                () const;
        void                    SetValidate_RaceSettings                ( StringA value );

        StringA                 GetValidate_Version                     () const;
        void                    SetValidate_Version                     ( StringA value );

        Id                      GetVehicleAuthor                        () const;
        void                    SetVehicleAuthor                        ( Id value );

        eVehicleCollection      GetVehicleCollection                    () const;
        void                    SetVehicleCollection                    ( eVehicleCollection value );

        Id                      GetVehicleName                          () const;
        void                    SetVehicleName                          ( Id value );

        void                    StartRecord                             ();
        void                    StopRecord                              ();
