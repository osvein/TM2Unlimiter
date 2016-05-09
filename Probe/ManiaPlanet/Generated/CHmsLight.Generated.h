        enum { CLASSID = 0x0600C000 };

        static CHmsLight*       CreateInstance ();

        enum eUpdateType
        {
            UPDATETYPE_STATIC,
            UPDATETYPE_DYNAMIC
        };
        static std::wstring     UpdateTypeToString                      ( eUpdateType value );
        static eUpdateType      ParseUpdateType                         ( const std::wstring& wstrName );

        class CPlugBitmap*      GetBitmapFlare                          () const;
        void                    SetBitmapFlare                          ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapProjector                      () const;
        void                    SetBitmapProjector                      ( class CPlugBitmap* value );

        class CPlugBitmap*      GetBitmapSprite                         () const;
        void                    SetBitmapSprite                         ( class CPlugBitmap* value );

        List < nodptr<class CHmsCorpusLight> >& GetCorpusLights                         () const;
        void                    SetCorpusLights                         ( List < nodptr<class CHmsCorpusLight> >& value );

        bool                    GetForceShadowGroup                     () const;
        void                    SetForceShadowGroup                     ( bool value );

        uint                    GetForceShadowGroupIndex                () const;
        void                    SetForceShadowGroupIndex                ( uint value );

        class CHmsItem*         GetItemContainer                        () const;
        void                    SetItemContainer                        ( class CHmsItem* value );

        class GxLight*          GetMainGxLight                          () const;
        void                    SetMainGxLight                          ( class GxLight* value );

        bool                    GetNeverSkipShadow                      () const;
        void                    SetNeverSkipShadow                      ( bool value );

        eUpdateType             GetUpdateType                           () const;
        void                    SetUpdateType                           ( eUpdateType value );

