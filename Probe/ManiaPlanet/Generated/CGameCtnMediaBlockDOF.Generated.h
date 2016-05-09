        enum { CLASSID = 0x03126000 };

        static CGameCtnMediaBlockDOF* CreateInstance ();

        float                   GetFocusZ                               () const;
        void                    SetFocusZ                               ( float value );

        uint                    GetGhostId                              () const;
        void                    SetGhostId                              ( uint value );

        float                   GetLensSize                             () const;
        void                    SetLensSize                             ( float value );

