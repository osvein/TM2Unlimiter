        enum { CLASSID = 0x0B009000 };

        static CSystemFids*     CreateInstance ();

        List < nodptr<class CSystemFid> >& GetLeaves                               () const;
        void                    SetLeaves                               ( List < nodptr<class CSystemFid> >& value );

        List < nodptr<class CSystemFids> >& GetTrees                                () const;
        void                    SetTrees                                ( List < nodptr<class CSystemFids> >& value );

