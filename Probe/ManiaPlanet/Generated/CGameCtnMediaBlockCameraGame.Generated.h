        enum { CLASSID = 0x03084000 };

        static CGameCtnMediaBlockCameraGame* CreateInstance ();

        Id                      GetGameCamId                            () const;
        void                    SetGameCamId                            ( Id value );

        uint                    GetGhostId                              () const;
        void                    SetGhostId                              ( uint value );

