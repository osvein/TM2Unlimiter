        enum { CLASSID = 0x03102000 };

        static CGameActorsManager* CreateInstance ();

        class CGameActorList*   GetActorList                            () const;
        void                    SetActorList                            ( class CGameActorList* value );

        class CGameScene*       GetScene                                () const;
        void                    SetScene                                ( class CGameScene* value );

