        enum { CLASSID = 0x2402E000 };

        static CTrackManiaMenus* CreateInstance ();

        enum eMedal
        {
            MEDAL_NONE,
            MEDAL_FINISHED,
            MEDAL_BRONZE,
            MEDAL_SILVER,
            MEDAL_GOLD,
            MEDAL_AUTHOR
        };
        static std::wstring     MedalToString                           ( eMedal value );
        static eMedal           ParseMedal                              ( const std::wstring& wstrName );

        enum eNetworkGameMode
        {
            NETWORKGAMEMODE_GAMEMODE_SCRIPT,
            NETWORKGAMEMODE_GAMEMODE_ROUNDS,
            NETWORKGAMEMODE_GAMEMODE_TIME_ATTACK,
            NETWORKGAMEMODE_GAMEMODE_TEAM,
            NETWORKGAMEMODE_GAMEMODE_LAPS,
            NETWORKGAMEMODE_GAMEMODE_CUP,
            NETWORKGAMEMODE_GAMEMODE_STUNTS
        };
        static std::wstring     NetworkGameModeToString                 ( eNetworkGameMode value );
        static eNetworkGameMode ParseNetworkGameMode                    ( const std::wstring& wstrName );

        uint                    GetCampaignChallengeNumber              () const;
        void                    SetCampaignChallengeNumber              ( uint value );

        uint                    GetCatalogChapterTotalCoppers           () const;
        void                    SetCatalogChapterTotalCoppers           ( uint value );

        List < nodptr<class CGameCtnChallengeInfo> >& GetDialogChallengeInfos                 () const;
        void                    SetDialogChallengeInfos                 ( List < nodptr<class CGameCtnChallengeInfo> >& value );

        bool                    GetDialogChallengeResult_IsPaused       () const;
        void                    SetDialogChallengeResult_IsPaused       ( bool value );

        bool                    GetDialogChallengeResult_IsPlaying      () const;
        void                    SetDialogChallengeResult_IsPlaying      ( bool value );

        StringW                 GetDialogLaunchScores_CurrentPath       () const;
        void                    SetDialogLaunchScores_CurrentPath       ( StringW value );

        bool                    GetDialogLowFpsWarn_NeverAskAgain       () const;
        void                    SetDialogLowFpsWarn_NeverAskAgain       ( bool value );

        StringW                 GetGhostFileName                        () const;
        void                    SetGhostFileName                        ( StringW value );

        StringW                 GetGhostFileNameExt                     () const;
        void                    SetGhostFileNameExt                     ( StringW value );

        uint                    GetLastPage                             () const;
        void                    SetLastPage                             ( uint value );

        uint                    GetLastRecord                           () const;
        void                    SetLastRecord                           ( uint value );

        uint                    GetLastScore                            () const;
        void                    SetLastScore                            ( uint value );

        eMedal                  GetMedal                                () const;
        void                    SetMedal                                ( eMedal value );

        uint                    GetMedalsCount                          () const;
        void                    SetMedalsCount                          ( uint value );

        uint                    GetMenuCampaignChallenges_Level         () const;
        void                    SetMenuCampaignChallenges_Level         ( uint value );

        StringW                 GetMenuCampaignChallenges_Location      () const;
        void                    SetMenuCampaignChallenges_Location      ( StringW value );

        class CPlugBitmap*      GetMenuCampaignChallenges_ZoneLogoBitmap() const;
        void                    SetMenuCampaignChallenges_ZoneLogoBitmap( class CPlugBitmap* value );

        uint                    GetMenuChoosePlaylist_PlaylistsCount    () const;
        void                    SetMenuChoosePlaylist_PlaylistsCount    ( uint value );

        bool                    GetMenuMultiPlayerNetworkCreate_AcceptReferee() const;
        void                    SetMenuMultiPlayerNetworkCreate_AcceptReferee( bool value );

        StringW                 GetMptp_Score                           () const;
        void                    SetMptp_Score                           ( StringW value );

        eNetworkGameMode        GetNetworkGameMode                      () const;
        void                    SetNetworkGameMode                      ( eNetworkGameMode value );

        StringW                 GetNetworkGameModeName                  () const;
        void                    SetNetworkGameModeName                  ( StringW value );

        class CGameCtnChallenge* GetSelectedChallenge                    () const;
        void                    SetSelectedChallenge                    ( class CGameCtnChallenge* value );

        StringW                 GetTestComment                          () const;
        void                    SetTestComment                          ( StringW value );

        bool                    GetTestDifficulty0                      () const;
        void                    SetTestDifficulty0                      ( bool value );

        bool                    GetTestDifficulty1                      () const;
        void                    SetTestDifficulty1                      ( bool value );

        bool                    GetTestDifficulty2                      () const;
        void                    SetTestDifficulty2                      ( bool value );

        bool                    GetTestDifficulty3                      () const;
        void                    SetTestDifficulty3                      ( bool value );

        bool                    GetTestDifficulty4                      () const;
        void                    SetTestDifficulty4                      ( bool value );

        bool                    GetTestQuality0                         () const;
        void                    SetTestQuality0                         ( bool value );

        bool                    GetTestQuality1                         () const;
        void                    SetTestQuality1                         ( bool value );

        bool                    GetTestQuality2                         () const;
        void                    SetTestQuality2                         ( bool value );

        bool                    GetTestQuality3                         () const;
        void                    SetTestQuality3                         ( bool value );

        bool                    GetTestQuality4                         () const;
        void                    SetTestQuality4                         ( bool value );

        void                    DialogChallengeResult_OnChooseOpponents ();
        void                    DialogChallengeResult_OnCreateServer    ();
        void                    DialogChallengeResult_OnEdit            ();
        void                    DialogChallengeResult_OnNext            ();
        void                    DialogChallengeResult_OnNextMap         ();
        void                    DialogChallengeResult_OnQuit            ();
        void                    DialogChallengeResult_OnRetry           ();
        void                    DialogChallengeResult_OnRetryOfficial   ();
        void                    DialogChallengeResult_OnRewind          ();
        void                    DialogChallengeResult_OnSaveReplay      ();
        void                    DialogChallengeResult_OnSendScore       ();
        void                    DialogChooseNbGhosts                    ();
        void                    DialogChooseNbGhosts_On4                ();
        void                    DialogChooseNbGhosts_On7                ();
        void                    DialogCreateGhost                       ();
        void                    DialogCreateGhost_OnQuit                ();
        void                    DialogCreateGhost_OnReallyQuit          ();
        void                    DialogCreateGhost_OnRetry               ();
        void                    DialogCreateGhost_OnUse                 ();
        void                    DialogCreateStuntsGhost                 ();
        void                    DialogCreateStuntsGhost_OnQuit          ();
        void                    DialogGetNewChallenge_OnBrowse          ();
        void                    DialogGetNewChallenge_OnCancel          ();
        void                    DialogGetNewChallenge_OnDownload        ();
        void                    DialogGroupCampaignAddNewChallenge_OnCancel();
        void                    DialogGroupCampaignAddNewChallenge_OnSlot1();
        void                    DialogGroupCampaignAddNewChallenge_OnSlot2();
        void                    DialogGroupCampaignAddNewChallenge_OnSlot3();
        void                    DialogGroupCampaignAddNewChallenge_OnSlot4();
        void                    DialogGroupCampaignAddNewChallenge_OnSlot5();
        void                    DialogHotSeatInGameMenu_OnGiveUp        ();
        void                    DialogHotSeatInGameMenu_OnQuit          ();
        void                    DialogHotSeatInGameMenu_OnResume        ();
        void                    DialogHotSeatResult_OnNext              ();
        void                    DialogHotSeatResult_OnQuit              ();
        void                    DialogHotSeatResult_OnRevenge           ();
        void                    DialogLaunchScores_OnClickCard          ();
        void                    DialogLaunchScores_OnClickUp            ();
        void                    DialogLaunchScores_OnOk                 ();
        void                    DialogLaunchScores_UpdateParams         ();
        void                    DialogLowFpsWarn_OnCancel               ();
        void                    DialogLowFpsWarn_OnOk                   ();
        void                    DialogNewUnlock_OnOk                    ();
        void                    DialogNextGhostOpponent_OnCancel        ();
        void                    DialogNextGhostOpponent_OnKeepTraining  ();
        void                    DialogNextGhostOpponent_OnOk            ();
        void                    DialogNextGhostOpponent_OnPlayOfficial  ();
        void                    DialogNextGhostOpponent_OnSelectAnotherMap();
        void                    DialogQuickChooseGhostOpponents         ();
        void                    DialogQuitEditor                        ();
        void                    DialogQuitEditor_OnDelete               ();
        void                    DialogQuitEditor_OnQuit                 ();
        void                    DialogQuitEditor_OnUpload               ();
        void                    DialogQuitRace                          ();
        void                    DialogQuitRace_OnEdit                   ();
        void                    DialogQuitRace_OnInputSettings          ();
        void                    DialogQuitRace_OnNextMap                ();
        void                    DialogQuitRace_OnOfficial               ();
        void                    DialogQuitRace_OnOfficialCustom         ();
        void                    DialogQuitRace_OnQuit                   ();
        void                    DialogQuitRace_OnRestart                ();
        void                    DialogQuitRace_OnRestartMap             ();
        void                    DialogQuitRace_OnResume                 ();
        void                    DialogQuitRace_OnSelectOpponents        ();
        void                    DialogQuitRace_OnStereoscopySettings    ();
        void                    DialogQuitRace_OnTrackRankings          ();
        void                    DialogQuitRace_OnTrackRankingsCustom    ();
        void                    DialogSendScore_OnCopyToClipboard       ();
        void                    DialogSendScore_OnExportGhost           ();
        void                    DialogSendScore_OnOk                    ();
        void                    DialogTestReport                        ();
        void                    DialogTestReport_OnCancel               ();
        void                    DialogTestReport_OnOk                   ();
        void                    DialogUseGhost                          ();
        void                    DialogUseGhost_OnNo                     ();
        void                    DialogUseGhost_OnYes                    ();
        void                    Dialog_OnCancel                         ();
        void                    Dialog_OnValidate                       ();
        void                    MenuCampaignChallenges_Coop             ();
        void                    MenuCampaignChallenges_OnBack           ();
        void                    MenuCampaignChallenges_OnChallengeCardRemoved();
        void                    MenuCampaignChallenges_OnChallengeCardRemovedConfirmed();
        void                    MenuCampaignChallenges_OnChallengeCardSelected();
        void                    MenuCampaignChallenges_OnChallengeGridNextPage();
        void                    MenuCampaignChallenges_OnChallengeGridPrevPage();
        void                    MenuCampaignChallenges_OnFriendUnlockNo ();
        void                    MenuCampaignChallenges_OnFriendUnlockYes();
        void                    MenuCampaignChallenges_OnToggleLadder   ();
        void                    MenuCampaignChallenges_Solo             ();
        void                    MenuCampaignCoop_OnBack                 ();
        void                    MenuChooseChallenge_OnDownloadReplay    ();
        void                    MenuChooseChallenge_OnSaveSettings      ();
        void                    MenuChooseChallenge_OnSaveSettings_DoSave();
        void                    MenuChooseChallenge_OnSaveSettings_OnYes();
        void                    MenuChoosePlaylistHotseat               ();
        void                    MenuChoosePlaylistNetwork               ();
        void                    MenuChoosePlaylist_Clean                ();
        void                    MenuChoosePlaylist_Init                 ();
        void                    MenuChoosePlaylist_OnBack               ();
        void                    MenuChoosePlaylist_OnCustom             ();
        void                    MenuChoosePlaylist_OnDownloadedTracks   ();
        void                    MenuChoosePlaylist_OnMyTracks           ();
        void                    MenuChoosePlaylist_OnOfficialTracks     ();
        void                    MenuChoosePlaylist_OnPlaylistSelected   ();
        void                    MenuChoosePlaylist_OnRefresh            ();
        void                    MenuGhostEditor                         ();
        void                    MenuMultiLocal_OnBrowseChallenge        ();
        void                    MenuMultiLocal_OnBrowseReplay           ();
        void                    MenuMultiPlayerNetworkCreate_ChooseScriptName();
        void                    MenuMultiPlayerNetworkCreate_OpenDialogScriptName_Yes();
        void                    MenuMultiPlayer_OnInternet              ();
        void                    MenuMultiPlayer_OnLan                   ();
        void                    MenuPlayChallenge_Solo                  ();
        void                    MenuPlayChallenge_Solo_Challenges       ();
        void                    MenuPlayChallenge_Solo_DownloadedTracks ();
        void                    MenuPlayChallenge_Solo_MyTracks         ();
        void                    MenuReplayEditor                        ();
        void                    MenuStatistics                          ();
        void                    MenuStatistics_OnBack                   ();
        void                    OnChooseAvatar1                         ();
        void                    OnChooseAvatar2                         ();
        void                    OnChooseAvatar3                         ();
        void                    OnChooseAvatar4                         ();
        void                    OnChooseAvatar5                         ();
        void                    OnChooseAvatar6                         ();
        void                    OnChooseAvatar7                         ();
        void                    OnChooseAvatar8                         ();
        void                    OnChooseProfile1                        ();
        void                    OnChooseProfile2                        ();
        void                    OnChooseProfile3                        ();
        void                    OnChooseProfile4                        ();
        void                    OnChooseProfile5                        ();
        void                    OnChooseProfile6                        ();
        void                    OnChooseProfile7                        ();
        void                    OnChooseProfile8                        ();
        void                    ShowDialogs                             ();
        void                    ShowMenus                               ();
