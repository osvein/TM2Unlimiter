        enum { CLASSID = 0x030A4000 };

        static CGameCtnMediaBlockCameraEffectShake* CreateInstance ();

        class CGameControlCameraEffect* GetEffect                               () const;
        void                    SetEffect                               ( class CGameControlCameraEffect* value );

        uint                    GetKeyCache                             () const;
        void                    SetKeyCache                             ( uint value );

