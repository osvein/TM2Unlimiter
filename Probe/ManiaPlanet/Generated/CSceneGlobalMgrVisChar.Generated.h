        enum { CLASSID = 0x0A090000 };

        static CSceneGlobalMgrVisChar* CreateInstance ();

        List < nodptr<class CMwNod> >& GetModelHandles                         () const;
        void                    SetModelHandles                         ( List < nodptr<class CMwNod> >& value );

