        enum { CLASSID = 0x0301B000 };

        static CGameCtnCollectorList* CreateInstance ();

        List < Id >&            GetBlockStockIds                        () const;
        void                    SetBlockStockIds                        ( List < Id >& value );

        List < uint >&          GetBlockStockNbAvailables               () const;
        void                    SetBlockStockNbAvailables               ( List < uint >& value );

        uint                    GetBob                                  () const;
        void                    SetBob                                  ( uint value );

