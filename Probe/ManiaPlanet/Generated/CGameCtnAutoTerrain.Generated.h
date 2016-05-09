        enum { CLASSID = 0x03120000 };

        static CGameCtnAutoTerrain* CreateInstance ();

        class CGameCtnZoneGenealogy* GetGenealogy                            () const;
        void                    SetGenealogy                            ( class CGameCtnZoneGenealogy* value );

        int                     GetOffsetX                              () const;
        void                    SetOffsetX                              ( int value );

        int                     GetOffsetY                              () const;
        void                    SetOffsetY                              ( int value );

        int                     GetOffsetZ                              () const;
        void                    SetOffsetZ                              ( int value );

