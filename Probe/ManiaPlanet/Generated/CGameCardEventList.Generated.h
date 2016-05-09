        enum { CLASSID = 0x0310A000 };

        static CGameCardEventList* CreateInstance ();

        List < nodptr<class CGameCardEvent> >& GetList                                 () const;
        void                    SetList                                 ( List < nodptr<class CGameCardEvent> >& value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

