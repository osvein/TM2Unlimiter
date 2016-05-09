        enum { CLASSID = 0x03135000 };

        static CGamePlaygroundUIConfigMgr* CreateInstance ();

        class CGamePlaygroundUIConfig* GetLocalPlayerConfig                    () const;
        void                    SetLocalPlayerConfig                    ( class CGamePlaygroundUIConfig* value );

        List < nodptr<class CGamePlaygroundUIConfig> >& GetUI                                   () const;
        void                    SetUI                                   ( List < nodptr<class CGamePlaygroundUIConfig> >& value );

        class CGamePlaygroundUIConfig* GetUIAll                                () const;
        void                    SetUIAll                                ( class CGamePlaygroundUIConfig* value );

        List < nodptr<class CGamePlaygroundUILayer> >& GetUILayers                             () const;
        void                    SetUILayers                             ( List < nodptr<class CGamePlaygroundUILayer> >& value );

        class CGamePlaygroundUIConfig* GetUI                                   ( class CGamePlayer* pPlayer );
        void                    ResetAll                                ();
        class CGamePlaygroundUILayer* UILayerCreate                           ();
        void                    UILayerDestroy                          ( class CGamePlaygroundUILayer* pLayer );
        void                    UILayerDestroyAll                       ();
