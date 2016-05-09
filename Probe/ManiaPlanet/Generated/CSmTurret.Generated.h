        enum { CLASSID = 0x2D021000 };

        static CSmTurret*       CreateInstance ();

        class CGameCtnObjectInfo* GetActorInfo                            () const;
        void                    SetActorInfo                            ( class CGameCtnObjectInfo* value );

        StringA                 GetModelName                            () const;
        void                    SetModelName                            ( StringA value );

