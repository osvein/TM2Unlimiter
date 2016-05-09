        enum { CLASSID = 0x0310C000 };

        static CGameCtnAnchorPoint* CreateInstance ();

        class CGameCtnBlock*    GetBlock                                () const;
        void                    SetBlock                                ( class CGameCtnBlock* value );

        Matrix43                GetLocationInBlock                      () const;
        void                    SetLocationInBlock                      ( Matrix43 value );

        Id                      GetTreeId                               () const;
        void                    SetTreeId                               ( Id value );

