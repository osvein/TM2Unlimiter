        enum { CLASSID = 0x0301A000 };

        static CGameCtnCollector* CreateInstance ();

        enum eCollectionId
        {

        };
        static std::wstring     CollectionIdToString                    ( eCollectionId value );
        static eCollectionId    ParseCollectionId                       ( const std::wstring& wstrName );

        uint                    GetAmountAvailableCurrent               () const;
        void                    SetAmountAvailableCurrent               ( uint value );

        uint                    GetAmountAvailableMax                   () const;
        void                    SetAmountAvailableMax                   ( uint value );

        Id                      GetAuthor                               () const;
        void                    SetAuthor                               ( Id value );

        uint                    GetCatalogPosition                      () const;
        void                    SetCatalogPosition                      ( uint value );

        eCollectionId           GetCollectionId                         () const;
        void                    SetCollectionId                         ( eCollectionId value );

        StringA                 GetDefaultSkinName                      () const;
        void                    SetDefaultSkinName                      ( StringA value );

        StringW                 GetDescription                          () const;
        void                    SetDescription                          ( StringW value );

        class CPlugFileImg*     GetIconFid                              () const;
        void                    SetIconFid                              ( class CPlugFileImg* value );

        uint                    GetIconQuarterRotationY                 () const;
        void                    SetIconQuarterRotationY                 ( uint value );

        bool                    GetIconUseAutoRender                    () const;
        void                    SetIconUseAutoRender                    ( bool value );

        bool                    GetIsInternal                           () const;
        void                    SetIsInternal                           ( bool value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        StringA                 GetPageName                             () const;
        void                    SetPageName                             ( StringA value );

