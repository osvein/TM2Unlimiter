        enum { CLASSID = 0x03035000 };

        static CGameVskObjectInfo* CreateInstance ();

        class CMwNod*           GetAltMobil                             () const;
        void                    SetAltMobil                             ( class CMwNod* value );

        class CMwNod*           GetHelper                               () const;
        void                    SetHelper                               ( class CMwNod* value );

        class CMwNod*           GetMobil                                () const;
        void                    SetMobil                                ( class CMwNod* value );

        List < nodptr<class CMwNod> >& GetProperties                           () const;
        void                    SetProperties                           ( List < nodptr<class CMwNod> >& value );

