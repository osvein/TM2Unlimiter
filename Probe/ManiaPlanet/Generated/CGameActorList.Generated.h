        enum { CLASSID = 0x0310B000 };

        static CGameActorList*  CreateInstance ();

        List < nodptr<class CGameActor> >& GetActors                               () const;
        void                    SetActors                               ( List < nodptr<class CGameActor> >& value );

