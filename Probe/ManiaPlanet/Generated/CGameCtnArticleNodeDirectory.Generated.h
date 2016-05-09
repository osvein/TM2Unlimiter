        enum { CLASSID = 0x03116000 };

        static CGameCtnArticleNodeDirectory* CreateInstance ();

        List < nodptr<class CGameCtnArticleNode> >& GetChildNodes                           () const;
        void                    SetChildNodes                           ( List < nodptr<class CGameCtnArticleNode> >& value );

        void                    CreateNewDirectory                      ();
