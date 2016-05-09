        enum { CLASSID = 0x0308B000 };

        static CGamePlayerCameraSet* CreateInstance ();

        class CGameControlCameraMaster* GetCamsMaster                           () const;
        void                    SetCamsMaster                           ( class CGameControlCameraMaster* value );

        uint                    GetSwitchDuration                       () const;
        void                    SetSwitchDuration                       ( uint value );

