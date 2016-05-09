        enum { CLASSID = 0x0A073000 };

        static CScenePhy*       CreateInstance ();

        class CSceneMgrBulletPhy* GetMgrBulletPhy                         () const;
        void                    SetMgrBulletPhy                         ( class CSceneMgrBulletPhy* value );

        class _0A046000*        GetMgrCharPhy                           () const;
        void                    SetMgrCharPhy                           ( class _0A046000* value );

        class CHmsCollZone*     GetMgrCollision                         () const;
        void                    SetMgrCollision                         ( class CHmsCollZone* value );

        class CHmsDynaZone*     GetMgrDynamics                          () const;
        void                    SetMgrDynamics                          ( class CHmsDynaZone* value );

        class CSceneMgrTrafficPhy* GetMgrTrafficPhy                        () const;
        void                    SetMgrTrafficPhy                        ( class CSceneMgrTrafficPhy* value );

        class CSceneMgrVehiclePhy* GetMgrVehiclePhy                        () const;
        void                    SetMgrVehiclePhy                        ( class CSceneMgrVehiclePhy* value );

