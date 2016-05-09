        enum { CLASSID = 0x03001000 };

        static CGameManiaTitle* CreateInstance ();

        class CGameCtnChallenge* GetAnimEditor_DefaultChallengeFid       () const;
        void                    SetAnimEditor_DefaultChallengeFid       ( class CGameCtnChallenge* value );

        StringA                 GetBaseTitleId                          () const;
        void                    SetBaseTitleId                          ( StringA value );

        List < nodptr<class CGameCtnCollection> >& GetCollectionFids                       () const;
        void                    SetCollectionFids                       ( List < nodptr<class CGameCtnCollection> >& value );

        StringA                 GetCollectionGroup                      () const;
        void                    SetCollectionGroup                      ( StringA value );

        StringW                 GetDesc                                 () const;
        void                    SetDesc                                 ( StringW value );

        class CPlugFileText*    GetEditorMapTypeFid                     () const;
        void                    SetEditorMapTypeFid                     ( class CPlugFileText* value );

        List < nodptr<class CGameCtnChallenge> >& GetEditorSimpleChallengeFids            () const;
        void                    SetEditorSimpleChallengeFids            ( List < nodptr<class CGameCtnChallenge> >& value );

        bool                    GetInternalAllowLegacyNonScriptModes    () const;
        void                    SetInternalAllowLegacyNonScriptModes    ( bool value );

        bool                    GetInternalAllowSMExperimental          () const;
        void                    SetInternalAllowSMExperimental          ( bool value );

        class CPlugFileImg*     GetLogosFid                             () const;
        void                    SetLogosFid                             ( class CPlugFileImg* value );

        class CPlugFileImg*     GetMenuBgFid                            () const;
        void                    SetMenuBgFid                            ( class CPlugFileImg* value );

        class CSystemFidsFolder* GetMenuBgFolder                         () const;
        void                    SetMenuBgFolder                         ( class CSystemFidsFolder* value );

        class CGameCtnReplayRecord* GetMenuBgReplayFid                      () const;
        void                    SetMenuBgReplayFid                      ( class CGameCtnReplayRecord* value );

        color                   GetMenuColor                            () const;
        void                    SetMenuColor                            ( color value );

        class CPlugFileImg*     GetMenuHeaderFid                        () const;
        void                    SetMenuHeaderFid                        ( class CPlugFileImg* value );

        StringA                 GetMenuMainManialinkUrl                 () const;
        void                    SetMenuMainManialinkUrl                 ( StringA value );

        class CPlugFileSnd*     GetMenuMusicFid                         () const;
        void                    SetMenuMusicFid                         ( class CPlugFileSnd* value );

        class CPlugFileFidContainer* GetModFid                               () const;
        void                    SetModFid                               ( class CPlugFileFidContainer* value );

        List < nodptr<class CPlugFileSnd> >& GetMusicFids                            () const;
        void                    SetMusicFids                            ( List < nodptr<class CPlugFileSnd> >& value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        class CPlugFileText*    GetNetModeFid                           () const;
        void                    SetNetModeFid                           ( class CPlugFileText* value );

        class CPlugFileText*    GetNetPlaylistFid                       () const;
        void                    SetNetPlaylistFid                       ( class CPlugFileText* value );

        class CGameSkinnedNod*  GetSkinnedBoxCase                       () const;
        void                    SetSkinnedBoxCase                       ( class CGameSkinnedNod* value );

        class CGameSkinnedNod*  GetSkinnedLogosStyle                    () const;
        void                    SetSkinnedLogosStyle                    ( class CGameSkinnedNod* value );

        class CGameSkinnedNod*  GetSkinnedStyleSheet                    () const;
        void                    SetSkinnedStyleSheet                    ( class CGameSkinnedNod* value );

        class CGameCtnCampaign* GetSoloCampaignFid                      () const;
        void                    SetSoloCampaignFid                      ( class CGameCtnCampaign* value );

        int                     GetSoloCampaignMedals                   () const;
        void                    SetSoloCampaignMedals                   ( int value );

        class CPlugFileText*    GetSoloModeFid                          () const;
        void                    SetSoloModeFid                          ( class CPlugFileText* value );

        class CPlugFileText*    GetSoloPlaylistFid                      () const;
        void                    SetSoloPlaylistFid                      ( class CPlugFileText* value );

        int                     GetSortIndex                            () const;
        void                    SetSortIndex                            ( int value );

        class CPlugFileText*    GetSplitScreenModeFid                   () const;
        void                    SetSplitScreenModeFid                   ( class CPlugFileText* value );

        class CPlugFileText*    GetSplitScreenPlaylistFid               () const;
        void                    SetSplitScreenPlaylistFid               ( class CPlugFileText* value );

        class CGameManiaTitleCore* GetTitleCoreFid                         () const;
        void                    SetTitleCoreFid                         ( class CGameManiaTitleCore* value );

        StringA                 GetTitleId                              () const;
        void                    SetTitleId                              ( StringA value );

        StringA                 GetUrl                                  () const;
        void                    SetUrl                                  ( StringA value );

        Id                      GetVehicleIdentAuthor                   () const;
        void                    SetVehicleIdentAuthor                   ( Id value );

        Id                      GetVehicleIdentCollection               () const;
        void                    SetVehicleIdentCollection               ( Id value );

        Id                      GetVehicleIdentId                       () const;
        void                    SetVehicleIdentId                       ( Id value );

