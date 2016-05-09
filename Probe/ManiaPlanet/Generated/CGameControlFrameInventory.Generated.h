        enum { CLASSID = 0x030F1000 };

        static CGameControlFrameInventory* CreateInstance ();

        List < nodptr<class CGameControlCardGeneric> >& GetFreeCards                            () const;
        void                    SetFreeCards                            ( List < nodptr<class CGameControlCardGeneric> >& value );

        class CGameControlGridCard* GetGridCards                            () const;
        void                    SetGridCards                            ( class CGameControlGridCard* value );

        void                    InitItems                               ();
