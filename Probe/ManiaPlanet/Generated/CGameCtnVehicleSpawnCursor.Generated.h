        enum { CLASSID = 0x03155000 };

        static CGameCtnVehicleSpawnCursor* CreateInstance ();

        class CSceneMobil*      GetHelperMobil                          () const;
        void                    SetHelperMobil                          ( class CSceneMobil* value );

        class CSceneMobil*      GetObjectMobil                          () const;
        void                    SetObjectMobil                          ( class CSceneMobil* value );

        class CSceneMobil*      GetVehicleMobil                         () const;
        void                    SetVehicleMobil                         ( class CSceneMobil* value );

