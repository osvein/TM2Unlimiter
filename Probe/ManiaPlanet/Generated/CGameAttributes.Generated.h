        enum { CLASSID = 0x030FE000 };

        static CGameAttributes* CreateInstance ();

        List < nodptr<class CGameAttribute> >& GetAttributes                           () const;
        void                    SetAttributes                           ( List < nodptr<class CGameAttribute> >& value );

        bool                    HasAttribute                            ( StringA strName );
