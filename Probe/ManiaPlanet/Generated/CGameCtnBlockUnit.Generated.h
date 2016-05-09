        enum { CLASSID = 0x03058000 };

        static CGameCtnBlockUnit* CreateInstance ();

        uint                    GetAcceptPylons                         () const;
        void                    SetAcceptPylons                         ( uint value );

        class CGameCtnBlock*    GetBlock                                () const;
        void                    SetBlock                                ( class CGameCtnBlock* value );

        class CGameCtnBlockUnitInfo* GetBlockUnitModel                       () const;
        void                    SetBlockUnitModel                       ( class CGameCtnBlockUnitInfo* value );

        uint3                   GetOffset                               () const;
        void                    SetOffset                               ( uint3 value );

        uint                    GetPlacePylons                          () const;
        void                    SetPlacePylons                          ( uint value );

