        enum { CLASSID = 0x0303C000 };

        static CGameCtnDecorationTerrainModifier* CreateInstance ();

        Id                      GetIdName                               () const;
        void                    SetIdName                               ( Id value );

        class CSystemFidsFolder* GetRemapFolder                          () const;
        void                    SetRemapFolder                          ( class CSystemFidsFolder* value );

        class CGameSkin*        GetRemapping                            () const;
        void                    SetRemapping                            ( class CGameSkin* value );

