        enum { CLASSID = 0x03112000 };

        static CGameCtnEditorCommonInterface* CreateInstance ();

        StringA                 GetAllocated                            () const;
        void                    SetAllocated                            ( StringA value );

        class CGameCtnArticleNodeDirectory* GetBlockIconsRoot                       () const;
        void                    SetBlockIconsRoot                       ( class CGameCtnArticleNodeDirectory* value );

        StringW                 GetCurrentToolTip                       () const;
        void                    SetCurrentToolTip                       ( StringW value );

        class CGameCtnArticleNodeDirectory* GetDecalIconsRoot                       () const;
        void                    SetDecalIconsRoot                       ( class CGameCtnArticleNodeDirectory* value );

        class CPlugBitmap*      GetEditSnapCamera_BitmapSnap            () const;
        void                    SetEditSnapCamera_BitmapSnap            ( class CPlugBitmap* value );

        class CGameCtnEditorCommon* GetEditor                               () const;
        void                    SetEditor                               ( class CGameCtnEditorCommon* value );

        class CScene2d*         GetInterfaceScene                       () const;
        void                    SetInterfaceScene                       ( class CScene2d* value );

        class CGameCtnArticleNodeDirectory* GetMacroBlockIconsRoot                  () const;
        void                    SetMacroBlockIconsRoot                  ( class CGameCtnArticleNodeDirectory* value );

        class CGameCtnArticleNodeDirectory* GetMacroDecalIconsRoot                  () const;
        void                    SetMacroDecalIconsRoot                  ( class CGameCtnArticleNodeDirectory* value );

        class CGameCtnArticleNodeDirectory* GetObjectIconsRoot                      () const;
        void                    SetObjectIconsRoot                      ( class CGameCtnArticleNodeDirectory* value );

        class CGameCtnArticleNodeDirectory* GetPluginsIconsRoot                     () const;
        void                    SetPluginsIconsRoot                     ( class CGameCtnArticleNodeDirectory* value );

        class CGameCtnArticleNodeDirectory* GetTerraformIconsRoot                   () const;
        void                    SetTerraformIconsRoot                   ( class CGameCtnArticleNodeDirectory* value );

        class CGameCtnArticleNodeDirectory* GetTrafficObjectIconsRoot               () const;
        void                    SetTrafficObjectIconsRoot               ( class CGameCtnArticleNodeDirectory* value );

        StringW                 Getm_LastMacroBlockSelected             () const;
        void                    Setm_LastMacroBlockSelected             ( StringW value );

        void                    EditSnapCamera_OnCancel                 ();
        void                    EditSnapCamera_OnOk                     ();
        void                    ToggleBlockRotation                     ();
