        enum { CLASSID = 0x0301F000 };

        static CGameCtnArticle* CreateInstance ();

        enum eCollectionId
        {

        };
        static std::wstring     CollectionIdToString                    ( eCollectionId value );
        static eCollectionId    ParseCollectionId                       ( const std::wstring& wstrName );

        StringA                 GetAmountString                         () const;
        void                    SetAmountString                         ( StringA value );

        class CPlugBitmap*      GetBitmapIcon                           () const;
        void                    SetBitmapIcon                           ( class CPlugBitmap* value );

        eCollectionId           GetCollectionId                         () const;
        void                    SetCollectionId                         ( eCollectionId value );

        class CSystemFidFile*   GetCollectorFid                         () const;
        void                    SetCollectorFid                         ( class CSystemFidFile* value );

        uint                    GetCurrentSkin                          () const;
        void                    SetCurrentSkin                          ( uint value );

        class CGameSkin*        GetGameSkin                             () const;
        void                    SetGameSkin                             ( class CGameSkin* value );

        Id                      GetIdentAuthor                          () const;
        void                    SetIdentAuthor                          ( Id value );

        Id                      GetIdentId                              () const;
        void                    SetIdentId                              ( Id value );

        bool                    GetIsAvailableForLoadedTile             () const;
        void                    SetIsAvailableForLoadedTile             ( bool value );

        bool                    GetIsLoaded                             () const;
        void                    SetIsLoaded                             ( bool value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        uint                    GetNbAvailableCurrent                   () const;
        void                    SetNbAvailableCurrent                   ( uint value );

        uint                    GetNbAvailableMax                       () const;
        void                    SetNbAvailableMax                       ( uint value );

        StringA                 GetPageName                             () const;
        void                    SetPageName                             ( StringA value );

        StringA                 GetShortcutString                       () const;
        void                    SetShortcutString                       ( StringA value );

        List < nodptr<class CSystemPackDesc> >& GetSkinPackDescs                        () const;
        void                    SetSkinPackDescs                        ( List < nodptr<class CSystemPackDesc> >& value );

        void                    Preload                                 ();
        void                    Purge                                   ();
        void                    RefreshBitmap                           ();
