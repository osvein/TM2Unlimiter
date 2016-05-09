        enum { CLASSID = 0x030A0000 };

        static CGameCtnMediaBlockCameraOrbital* CreateInstance ();

        Matrix43                GetBaseLocation                         () const;
        void                    SetBaseLocation                         ( Matrix43 value );

