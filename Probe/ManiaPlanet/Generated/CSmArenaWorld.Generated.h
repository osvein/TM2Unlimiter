        enum { CLASSID = 0x2D002000 };

        static CSmArenaWorld*   CreateInstance ();

        uint                    GetDefaultWeaponModelIndex_Normal       () const;
        void                    SetDefaultWeaponModelIndex_Normal       ( uint value );

        uint                    GetDefaultWeaponModelIndex_TechLaser    () const;
        void                    SetDefaultWeaponModelIndex_TechLaser    ( uint value );

        uint                    GetDefaultWeaponModelIndex_Underground  () const;
        void                    SetDefaultWeaponModelIndex_Underground  ( uint value );

