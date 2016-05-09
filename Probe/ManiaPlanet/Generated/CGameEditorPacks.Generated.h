        enum { CLASSID = 0x03167000 };

        static CGameEditorPacks* CreateInstance ();

        StringW                 GetContents_Contents                    () const;
        void                    SetContents_Contents                    ( StringW value );

        StringW                 GetContents_IncludedContents            () const;
        void                    SetContents_IncludedContents            ( StringW value );

        StringW                 GetPackInfo_Comment                     () const;
        void                    SetPackInfo_Comment                     ( StringW value );

        bool                    GetPackInfo_IsCreditedPack              () const;
        void                    SetPackInfo_IsCreditedPack              ( bool value );

        bool                    GetPackInfo_IsTitlePack                 () const;
        void                    SetPackInfo_IsTitlePack                 ( bool value );

        StringW                 GetPackInfo_PackName                    () const;
        void                    SetPackInfo_PackName                    ( StringW value );

        uint                    GetPackInfo_Price                       () const;
        void                    SetPackInfo_Price                       ( uint value );

        uint                    GetPackInfo_PriceIncluded               () const;
        void                    SetPackInfo_PriceIncluded               ( uint value );

        uint                    GetPackInfo_PriceTotal                  () const;
        void                    SetPackInfo_PriceTotal                  ( uint value );

        StringA                 GetPackInfo_Url                         () const;
        void                    SetPackInfo_Url                         ( StringA value );

        StringW                 GetTitleEditor_MapType                  () const;
        void                    SetTitleEditor_MapType                  ( StringW value );

        color                   GetTitleMenu_Color                      () const;
        void                    SetTitleMenu_Color                      ( color value );

        StringA                 GetTitleMenu_ManialinkName              () const;
        void                    SetTitleMenu_ManialinkName              ( StringA value );

        StringW                 GetTitleMenu_MusicName                  () const;
        void                    SetTitleMenu_MusicName                  ( StringW value );

        StringW                 GetTitleMenu_ReplayName                 () const;
        void                    SetTitleMenu_ReplayName                 ( StringW value );

        StringW                 GetTitleNet_Mode                        () const;
        void                    SetTitleNet_Mode                        ( StringW value );

        StringW                 GetTitleNet_PlaylistFileName            () const;
        void                    SetTitleNet_PlaylistFileName            ( StringW value );

        StringW                 GetTitleSolo_CampaignName               () const;
        void                    SetTitleSolo_CampaignName               ( StringW value );

        int                     GetTitleSolo_Medals                     () const;
        void                    SetTitleSolo_Medals                     ( int value );

        StringW                 GetTitleSolo_Mode                       () const;
        void                    SetTitleSolo_Mode                       ( StringW value );

        StringW                 GetTitleSolo_PlaylistFileName           () const;
        void                    SetTitleSolo_PlaylistFileName           ( StringW value );

        StringW                 GetTitle_BaseTitle                      () const;
        void                    SetTitle_BaseTitle                      ( StringW value );

        StringA                 GetTitle_CollectionGroup                () const;
        void                    SetTitle_CollectionGroup                ( StringA value );

        StringW                 GetTitle_Mod                            () const;
        void                    SetTitle_Mod                            ( StringW value );

        StringW                 GetTitle_MusicFolder                    () const;
        void                    SetTitle_MusicFolder                    ( StringW value );

        int                     GetTitle_SortOrder                      () const;
        void                    SetTitle_SortOrder                      ( int value );

        void                    Contents_OnAdd                          ();
        void                    Contents_OnClear                        ();
        void                    OpenDialogChooseFolder_Yes              ();
        void                    OpenDialogChooseName_Yes                ();
        void                    PackInfo_EditContents                   ();
        void                    PackInfo_EditTitle                      ();
        void                    PackInfo_EditTitle_OnOk                 ();
        void                    TitleEditor_ChooseMapType               ();
        void                    TitleEditor_ClearMapType                ();
        void                    TitleMenu_ChooseManialinkName           ();
        void                    TitleMenu_ChooseMusicName               ();
        void                    TitleMenu_ChooseReplayName              ();
        void                    TitleMenu_ClearManialinkName            ();
        void                    TitleMenu_ClearMusicName                ();
        void                    TitleMenu_ClearReplayName               ();
        void                    TitleNet_ChooseMode                     ();
        void                    TitleNet_ChoosePlaylistFileName         ();
        void                    TitleNet_ClearMode                      ();
        void                    TitleNet_ClearPlaylistFileName          ();
        void                    TitleSolo_ChooseCampaignName            ();
        void                    TitleSolo_ChooseMode                    ();
        void                    TitleSolo_ChoosePlaylistFileName        ();
        void                    TitleSolo_ClearCampaignName             ();
        void                    TitleSolo_ClearMode                     ();
        void                    TitleSolo_ClearPlaylistFileName         ();
        void                    Title_ChooseBaseTitle                   ();
        void                    Title_ChooseMod                         ();
        void                    Title_ChooseMusicFolder                 ();
        void                    Title_ClearMod                          ();
        void                    Title_ClearMusicFolder                  ();
        void                    Title_OnButtonPreview                   ();
        void                    Title_OnOpenInExplorer                  ();
        void                    Title_Test                              ();
