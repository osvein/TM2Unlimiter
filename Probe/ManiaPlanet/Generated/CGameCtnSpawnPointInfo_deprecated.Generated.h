        enum { CLASSID = 0x030F8000 };

        static CGameCtnSpawnPointInfo_deprecated* CreateInstance ();

        Id                      GetAllowedId                            () const;
        void                    SetAllowedId                            ( Id value );

        uint                    GetBlockUnitIndex                       () const;
        void                    SetBlockUnitIndex                       ( uint value );

        Matrix43                GetLocation                             () const;
        void                    SetLocation                             ( Matrix43 value );

