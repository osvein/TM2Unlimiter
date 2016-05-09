        enum { CLASSID = 0x0301D000 };

        static CGameCtnChapter* CreateInstance ();

        List < nodptr<class CGameCtnArticle> >& GetArticles                             () const;
        void                    SetArticles                             ( List < nodptr<class CGameCtnArticle> >& value );

        class CSystemFidFile*   GetCollectionFid                        () const;
        void                    SetCollectionFid                        ( class CSystemFidFile* value );

        class CSystemFidFile*   GetIcon                                 () const;
        void                    SetIcon                                 ( class CSystemFidFile* value );

        StringW                 GetLongDesc                             () const;
        void                    SetLongDesc                             ( StringW value );

        Vec2D                   GetMapCoordDesc                         () const;
        void                    SetMapCoordDesc                         ( Vec2D value );

        Vec2D                   GetMapCoordElem                         () const;
        void                    SetMapCoordElem                         ( Vec2D value );

        Vec2D                   GetMapCoordIcon                         () const;
        void                    SetMapCoordIcon                         ( Vec2D value );

        bool                    GetUnlocked                             () const;
        void                    SetUnlocked                             ( bool value );

