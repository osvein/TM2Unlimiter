        enum { CLASSID = 0x0502C000 };

        static CFuncManagerCharacter* CreateInstance ();

        List < nodptr<class CMwNod> >& GetGroups                               () const;
        void                    SetGroups                               ( List < nodptr<class CMwNod> >& value );

