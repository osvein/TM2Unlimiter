        enum { CLASSID = 0x03040000 };

        static CGameControlCameraMaster* CreateInstance ();

        uint                    GetCurrentCam                           () const;
        void                    SetCurrentCam                           ( uint value );

        Id                      GetDefaultCameraId                      () const;
        void                    SetDefaultCameraId                      ( Id value );

        class CGameControlCameraEffectGroup* GetGlobalEffects                        () const;
        void                    SetGlobalEffects                        ( class CGameControlCameraEffectGroup* value );

        bool                    GetIsSwitching                          () const;
        void                    SetIsSwitching                          ( bool value );

        List < nodptr<class CGameControlCamera> >& GetManagedCams                          () const;
        void                    SetManagedCams                          ( List < nodptr<class CGameControlCamera> >& value );

