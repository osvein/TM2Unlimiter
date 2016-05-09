        enum { CLASSID = 0x0301E000 };

        static CGameCtnCatalog* CreateInstance ();

        List < nodptr<class CGameCtnChapter> >& GetChapters                             () const;
        void                    SetChapters                             ( List < nodptr<class CGameCtnChapter> >& value );

