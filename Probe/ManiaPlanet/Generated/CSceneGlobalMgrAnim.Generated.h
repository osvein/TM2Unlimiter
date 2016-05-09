        enum { CLASSID = 0x0A095000 };

        static CSceneGlobalMgrAnim* CreateInstance ();

        List < nodptr<class CMwNod> >& GetSkelBinding                          () const;
        void                    SetSkelBinding                          ( List < nodptr<class CMwNod> >& value );

