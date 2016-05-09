        enum { CLASSID = 0x030FC000 };

        static CGameActor*      CreateInstance ();

        class CGameCtnObjectInfo* GetActorInfo                            () const;
        void                    SetActorInfo                            ( class CGameCtnObjectInfo* value );

        class CGameAttributes*  GetAttributes                           () const;
        void                    SetAttributes                           ( class CGameAttributes* value );

        uint                    GetCoordX                               () const;
        void                    SetCoordX                               ( uint value );

        uint                    GetCoordY                               () const;
        void                    SetCoordY                               ( uint value );

        uint                    GetCoordZ                               () const;
        void                    SetCoordZ                               ( uint value );

        uint                    GetDir                                  () const;
        void                    SetDir                                  ( uint value );

        class CGameMobil*       GetMobil                                () const;
        void                    SetMobil                                ( class CGameMobil* value );

