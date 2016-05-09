        enum { CLASSID = 0x2D011000 };

        static CSmItem*         CreateInstance ();

        class CGameCtnObjectInfo* GetActorInfo                            () const;
        void                    SetActorInfo                            ( class CGameCtnObjectInfo* value );

        bool                    GetIsAttachedToAnchor                   () const;
        void                    SetIsAttachedToAnchor                   ( bool value );

        bool                    GetIsAttachedToPlayer                   () const;
        void                    SetIsAttachedToPlayer                   ( bool value );

        bool                    GetIsDetached                           () const;
        void                    SetIsDetached                           ( bool value );

        bool                    GetIsUnspawned                          () const;
        void                    SetIsUnspawned                          ( bool value );

        StringA                 GetModelName                            () const;
        void                    SetModelName                            ( StringA value );

        Vec3D                   GetPosition                             () const;
        void                    SetPosition                             ( Vec3D value );

        bool                    GetStayInArena                          () const;
        void                    SetStayInArena                          ( bool value );

        float                   GetYaw                                  () const;
        void                    SetYaw                                  ( float value );

