        enum { CLASSID = 0x030C9000 };

        static CGameCtnMenus*   CreateInstance ();

        enum eChallengeDifficulty
        {
            CHALLENGEDIFFICULTY_WHITE,
            CHALLENGEDIFFICULTY_GREEN,
            CHALLENGEDIFFICULTY_BLUE,
            CHALLENGEDIFFICULTY_RED,
            CHALLENGEDIFFICULTY_BLACK,
            CHALLENGEDIFFICULTY_CUSTOM
        };
        static std::wstring     ChallengeDifficultyToString             ( eChallengeDifficulty value );
        static eChallengeDifficulty ParseChallengeDifficulty                ( const std::wstring& wstrName );

        enum eDialogGraphicSettings_DisplayRatio
        {
            DIALOGGRAPHICSETTINGS_DISPLAYRATIO_NONE,
            DIALOGGRAPHICSETTINGS_DISPLAYRATIO_5_4,
            DIALOGGRAPHICSETTINGS_DISPLAYRATIO_4_3,
            DIALOGGRAPHICSETTINGS_DISPLAYRATIO_16_10,
            DIALOGGRAPHICSETTINGS_DISPLAYRATIO_16_9
        };
        static std::wstring     DialogGraphicSettings_DisplayRatioToString ( eDialogGraphicSettings_DisplayRatio value );
        static eDialogGraphicSettings_DisplayRatio ParseDialogGraphicSettings_DisplayRatio ( const std::wstring& wstrName );

        enum eDialogStereoscopySettings_Mode
        {
            DIALOGSTEREOSCOPYSETTINGS_MODE_ANAGLYPH,
            DIALOGSTEREOSCOPYSETTINGS_MODE_LEFT_RIGHT_0,
            DIALOGSTEREOSCOPYSETTINGS_MODE_LEFT_RIGHT_1,
            DIALOGSTEREOSCOPYSETTINGS_MODE_LINEEVEN_ODD,
            DIALOGSTEREOSCOPYSETTINGS_MODE_LINEODD_EVEN
        };
        static std::wstring     DialogStereoscopySettings_ModeToString  ( eDialogStereoscopySettings_Mode value );
        static eDialogStereoscopySettings_Mode ParseDialogStereoscopySettings_Mode     ( const std::wstring& wstrName );

        enum eHotSeatGameMode
        {
            HOTSEATGAMEMODE_HOTSEAT_TIME,
            HOTSEATGAMEMODE_HOTSEAT_TRIES
        };
        static std::wstring     HotSeatGameModeToString                 ( eHotSeatGameMode value );
        static eHotSeatGameMode ParseHotSeatGameMode                    ( const std::wstring& wstrName );

        eChallengeDifficulty    GetChallengeDifficulty                  () const;
        void                    SetChallengeDifficulty                  ( eChallengeDifficulty value );

        uint                    GetChallengeType_NbLaps                 () const;
        void                    SetChallengeType_NbLaps                 ( uint value );

        List < nodptr<class CControlListItem> >& GetConfirmFiles                         () const;
        void                    SetConfirmFiles                         ( List < nodptr<class CControlListItem> >& value );

        StringA                 GetConvertAccount_Key                   () const;
        void                    SetConvertAccount_Key                   ( StringA value );

        uint                    GetCreateObjectives_BronzeTime          () const;
        void                    SetCreateObjectives_BronzeTime          ( uint value );

        uint                    GetCreateObjectives_GoldTime            () const;
        void                    SetCreateObjectives_GoldTime            ( uint value );

        uint                    GetCreateObjectives_SilverTime          () const;
        void                    SetCreateObjectives_SilverTime          ( uint value );

        class CGameCtnChallenge* GetCurGameChallenge                     () const;
        void                    SetCurGameChallenge                     ( class CGameCtnChallenge* value );

        List < nodptr<class CControlListItem> >& GetDataInfos                            () const;
        void                    SetDataInfos                            ( List < nodptr<class CControlListItem> >& value );

        StringA                 GetDialogAddOrInviteBuddy_EMail         () const;
        void                    SetDialogAddOrInviteBuddy_EMail         ( StringA value );

        bool                    GetDialogAddOrInviteBuddy_InviteToJoinAGroup() const;
        void                    SetDialogAddOrInviteBuddy_InviteToJoinAGroup( bool value );

        StringA                 GetDialogAddOrInviteBuddy_Login         () const;
        void                    SetDialogAddOrInviteBuddy_Login         ( StringA value );

        class CGameLeague*      GetDialogAddOrInviteBuddy_SelectedGroup () const;
        void                    SetDialogAddOrInviteBuddy_SelectedGroup ( class CGameLeague* value );

        List < nodptr<class CControlListItem> >& GetDialogChangeTeam_Players1            () const;
        void                    SetDialogChangeTeam_Players1            ( List < nodptr<class CControlListItem> >& value );

        List < nodptr<class CControlListItem> >& GetDialogChangeTeam_Players2            () const;
        void                    SetDialogChangeTeam_Players2            ( List < nodptr<class CControlListItem> >& value );

        StringW                 GetDialogChooseLeague_CurrentPath       () const;
        void                    SetDialogChooseLeague_CurrentPath       ( StringW value );

        StringW                 GetDialogChooseLeague_DisplayableCurrentPath() const;
        void                    SetDialogChooseLeague_DisplayableCurrentPath( StringW value );

        class CGameCtnArticle*  GetDialogChooseSkin_Article             () const;
        void                    SetDialogChooseSkin_Article             ( class CGameCtnArticle* value );

        StringW                 GetDialogChooseSkin_Name                () const;
        void                    SetDialogChooseSkin_Name                ( StringW value );

        bool                    GetDialogChooseSkin_SaveAsDds           () const;
        void                    SetDialogChooseSkin_SaveAsDds           ( bool value );

        uint                    GetDialogChooseSkin_SelectIndex         () const;
        void                    SetDialogChooseSkin_SelectIndex         ( uint value );

        List < nodptr<class CControlListItem> >& GetDialogChooseSkin_SkinsItem           () const;
        void                    SetDialogChooseSkin_SkinsItem           ( List < nodptr<class CControlListItem> >& value );

        bool                    GetDialogComputeShadowsQuality_CheckSaveBounces() const;
        void                    SetDialogComputeShadowsQuality_CheckSaveBounces( bool value );

        bool                    GetDialogConnect_RememberOnlinePassword () const;
        void                    SetDialogConnect_RememberOnlinePassword ( bool value );

        class CScenePhyCharSpecialProperty* GetDialogEditBlockSpecialProperty_Property() const;
        void                    SetDialogEditBlockSpecialProperty_Property( class CScenePhyCharSpecialProperty* value );

        StringA                 GetDialogEditCardEventsDeck_DeckIdName  () const;
        void                    SetDialogEditCardEventsDeck_DeckIdName  ( StringA value );

        StringW                 GetDialogEditScript_TempSearchText      () const;
        void                    SetDialogEditScript_TempSearchText      ( StringW value );

        StringW                 GetDialogEditScript_TempText            () const;
        void                    SetDialogEditScript_TempText            ( StringW value );

        bool                    GetDialogEula_Validated                 () const;
        void                    SetDialogEula_Validated                 ( bool value );

        uint                    GetDialogGraphicSettings_Antialias      () const;
        void                    SetDialogGraphicSettings_Antialias      ( uint value );

        uint                    GetDialogGraphicSettings_Bloom          () const;
        void                    SetDialogGraphicSettings_Bloom          ( uint value );

        uint                    GetDialogGraphicSettings_CarReflect     () const;
        void                    SetDialogGraphicSettings_CarReflect     ( uint value );

        uint                    GetDialogGraphicSettings_DisplayMode    () const;
        void                    SetDialogGraphicSettings_DisplayMode    ( uint value );

        eDialogGraphicSettings_DisplayRatio GetDialogGraphicSettings_DisplayRatio   () const;
        void                    SetDialogGraphicSettings_DisplayRatio   ( eDialogGraphicSettings_DisplayRatio value );

        uint                    GetDialogGraphicSettings_DisplaySync    () const;
        void                    SetDialogGraphicSettings_DisplaySync    ( uint value );

        uint                    GetDialogGraphicSettings_Filter         () const;
        void                    SetDialogGraphicSettings_Filter         ( uint value );

        float                   GetDialogGraphicSettings_FogScale       () const;
        void                    SetDialogGraphicSettings_FogScale       ( float value );

        uint                    GetDialogGraphicSettings_GpuSync        () const;
        void                    SetDialogGraphicSettings_GpuSync        ( uint value );

        uint                    GetDialogGraphicSettings_MotionBlur     () const;
        void                    SetDialogGraphicSettings_MotionBlur     ( uint value );

        float                   GetDialogGraphicSettings_MotionBlurIntens() const;
        void                    SetDialogGraphicSettings_MotionBlurIntens( float value );

        StringA                 GetDialogGraphicSettings_Resolution     () const;
        void                    SetDialogGraphicSettings_Resolution     ( StringA value );

        uint                    GetDialogGraphicSettings_SSAO           () const;
        void                    SetDialogGraphicSettings_SSAO           ( uint value );

        uint                    GetDialogGraphicSettings_TripleBuffer   () const;
        void                    SetDialogGraphicSettings_TripleBuffer   ( uint value );

        uint                    GetDialogGraphicSettings_WaterReflect   () const;
        void                    SetDialogGraphicSettings_WaterReflect   ( uint value );

        bool                    GetDialogGraphicSettings_WindowBorder   () const;
        void                    SetDialogGraphicSettings_WindowBorder   ( bool value );

        uint                    GetDialogGraphicSettings_WindowSizeX    () const;
        void                    SetDialogGraphicSettings_WindowSizeX    ( uint value );

        uint                    GetDialogGraphicSettings_WindowSizeY    () const;
        void                    SetDialogGraphicSettings_WindowSizeY    ( uint value );

        float                   GetDialogInputSettings_AnalogDeadZone   () const;
        void                    SetDialogInputSettings_AnalogDeadZone   ( float value );

        float                   GetDialogInputSettings_AnalogSensitivity() const;
        void                    SetDialogInputSettings_AnalogSensitivity( float value );

        bool                    GetDialogInputSettings_MouseAccel       () const;
        void                    SetDialogInputSettings_MouseAccel       ( bool value );

        float                   GetDialogInputSettings_MouseAccelQuantity() const;
        void                    SetDialogInputSettings_MouseAccelQuantity( float value );

        bool                    GetDialogInputSettings_MouseLookInvertY () const;
        void                    SetDialogInputSettings_MouseLookInvertY ( bool value );

        float                   GetDialogInputSettings_MouseScaleY      () const;
        void                    SetDialogInputSettings_MouseScaleY      ( float value );

        float                   GetDialogInputSettings_MouseSensitivity () const;
        void                    SetDialogInputSettings_MouseSensitivity ( float value );

        float                   GetDialogInputSettings_RumbleIntensity  () const;
        void                    SetDialogInputSettings_RumbleIntensity  ( float value );

        bool                    GetDialogInterfaceSettings_AllyCustomColor() const;
        void                    SetDialogInterfaceSettings_AllyCustomColor( bool value );

        bool                    GetDialogInterfaceSettings_CrosshairCustomColor() const;
        void                    SetDialogInterfaceSettings_CrosshairCustomColor( bool value );

        StringW                 GetDialogInterfaceSettings_CrosshairName() const;
        void                    SetDialogInterfaceSettings_CrosshairName( StringW value );

        float                   GetDialogInterfaceSettings_CrosshairOpacity() const;
        void                    SetDialogInterfaceSettings_CrosshairOpacity( float value );

        float                   GetDialogInterfaceSettings_CrosshairSaturation() const;
        void                    SetDialogInterfaceSettings_CrosshairSaturation( float value );

        bool                    GetDialogInterfaceSettings_OppoCustomColor() const;
        void                    SetDialogInterfaceSettings_OppoCustomColor( bool value );

        List < nodptr<class CMwNod> >& GetDialogList_Nods                      () const;
        void                    SetDialogList_Nods                      ( List < nodptr<class CMwNod> >& value );

        StringA                 GetDialogManageGroup_Login              () const;
        void                    SetDialogManageGroup_Login              ( StringA value );

        StringW                 GetDialogManageGroup_Name               () const;
        void                    SetDialogManageGroup_Name               ( StringW value );

        StringA                 GetDialogManageGroup_Pass               () const;
        void                    SetDialogManageGroup_Pass               ( StringA value );

        StringA                 GetDialogManageGroup_PassConfirm        () const;
        void                    SetDialogManageGroup_PassConfirm        ( StringA value );

        bool                    GetDialogOnlineAccountPersonnal_ReceiveNews() const;
        void                    SetDialogOnlineAccountPersonnal_ReceiveNews( bool value );

        bool                    GetDialogOnlineAccount_ChooseLogin1     () const;
        void                    SetDialogOnlineAccount_ChooseLogin1     ( bool value );

        bool                    GetDialogOnlineAccount_ChooseLogin2     () const;
        void                    SetDialogOnlineAccount_ChooseLogin2     ( bool value );

        bool                    GetDialogOnlineAccount_ChooseLogin3     () const;
        void                    SetDialogOnlineAccount_ChooseLogin3     ( bool value );

        bool                    GetDialogOnlineAccount_RememberOnlinePassword() const;
        void                    SetDialogOnlineAccount_RememberOnlinePassword( bool value );

        class CGameLeague*      GetDialogOnlineAccount_SubscriptionLeague() const;
        void                    SetDialogOnlineAccount_SubscriptionLeague( class CGameLeague* value );

        class CScene2d*         GetDialogPlayerProfile_VehicleOverlayScene() const;
        void                    SetDialogPlayerProfile_VehicleOverlayScene( class CScene2d* value );

        List < nodptr<class CControlListItem> >& GetDialogPlayers                        () const;
        void                    SetDialogPlayers                        ( List < nodptr<class CControlListItem> >& value );

        Array < StringW >&      GetDialogRefereeStatus_Message          () const;
        void                    SetDialogRefereeStatus_Message          ( Array < StringW >& value );

        StringW                 GetDialogRemoteBrowser_ToFind           () const;
        void                    SetDialogRemoteBrowser_ToFind           ( StringW value );

        StringA                 GetDialogSelectCardEventsDeck_DeckName  () const;
        void                    SetDialogSelectCardEventsDeck_DeckName  ( StringA value );

        float                   GetDialogStereoscopySettings_ColorFactor() const;
        void                    SetDialogStereoscopySettings_ColorFactor( float value );

        float                   GetDialogStereoscopySettings_DisplaySize_cm() const;
        void                    SetDialogStereoscopySettings_DisplaySize_cm( float value );

        float                   GetDialogStereoscopySettings_DisplaySize_inch() const;
        void                    SetDialogStereoscopySettings_DisplaySize_inch( float value );

        bool                    GetDialogStereoscopySettings_HeadTrack  () const;
        void                    SetDialogStereoscopySettings_HeadTrack  ( bool value );

        eDialogStereoscopySettings_Mode GetDialogStereoscopySettings_Mode       () const;
        void                    SetDialogStereoscopySettings_Mode       ( eDialogStereoscopySettings_Mode value );

        float                   GetDialogStereoscopySettings_ScreenDist () const;
        void                    SetDialogStereoscopySettings_ScreenDist ( float value );

        float                   GetDialogStereoscopySettings_Strength   () const;
        void                    SetDialogStereoscopySettings_Strength   ( float value );

        uint                    GetDialogStereoscopySettings_StrengthPercent() const;
        void                    SetDialogStereoscopySettings_StrengthPercent( uint value );

        float                   GetDialogUpdateFiles_CurrentProgress    () const;
        void                    SetDialogUpdateFiles_CurrentProgress    ( float value );

        float                   GetDialogUpdateFiles_OverallProgress    () const;
        void                    SetDialogUpdateFiles_OverallProgress    ( float value );

        uint                    GetDialogViewReplay_ReplayTime          () const;
        void                    SetDialogViewReplay_ReplayTime          ( uint value );

        class CGameMenu*        GetDialogs                              () const;
        void                    SetDialogs                              ( class CGameMenu* value );

        List < nodptr<class CGameCtnChapter> >& GetEnvironmentChapters                  () const;
        void                    SetEnvironmentChapters                  ( List < nodptr<class CGameCtnChapter> >& value );

        StringW                 GetHierarchyPath                        () const;
        void                    SetHierarchyPath                        ( StringW value );

        eHotSeatGameMode        GetHotSeatGameMode                      () const;
        void                    SetHotSeatGameMode                      ( eHotSeatGameMode value );

        uint                    GetHotSeatTime                          () const;
        void                    SetHotSeatTime                          ( uint value );

        uint                    GetHotSeatTries                         () const;
        void                    SetHotSeatTries                         ( uint value );

        StringA                 GetImportAccount_Login                  () const;
        void                    SetImportAccount_Login                  ( StringA value );

        StringA                 GetImportAccount_Pass                   () const;
        void                    SetImportAccount_Pass                   ( StringA value );

        bool                    GetImportAccount_UseFreeAccountLogin    () const;
        void                    SetImportAccount_UseFreeAccountLogin    ( bool value );

        List < nodptr<class CControlListItem> >& GetInputsList_Actions                   () const;
        void                    SetInputsList_Actions                   ( List < nodptr<class CControlListItem> >& value );

        int                     GetLastShiftX                           () const;
        void                    SetLastShiftX                           ( int value );

        int                     GetLastShiftZ                           () const;
        void                    SetLastShiftZ                           ( int value );

        StringW                 GetLastString                           () const;
        void                    SetLastString                           ( StringW value );

        StringW                 GetLastString2                          () const;
        void                    SetLastString2                          ( StringW value );

        StringA                 GetLastString3                          () const;
        void                    SetLastString3                          ( StringA value );

        uint                    GetMenuChooseChallenge_ChallengesCount  () const;
        void                    SetMenuChooseChallenge_ChallengesCount  ( uint value );

        StringW                 GetMenuChooseChallenge_FilterString     () const;
        void                    SetMenuChooseChallenge_FilterString     ( StringW value );

        bool                    GetMenuChooseChallenge_Flatten          () const;
        void                    SetMenuChooseChallenge_Flatten          ( bool value );

        StringW                 GetMenuInternetLeague_CurrentLeagueDescription() const;
        void                    SetMenuInternetLeague_CurrentLeagueDescription( StringW value );

        StringW                 GetMenuInternetLeague_CurrentLeagueName () const;
        void                    SetMenuInternetLeague_CurrentLeagueName ( StringW value );

        StringW                 GetMenuInternetLeague_Today             () const;
        void                    SetMenuInternetLeague_Today             ( StringW value );

        StringW                 GetMenuInternet_LadderCurrentLeagueName () const;
        void                    SetMenuInternet_LadderCurrentLeagueName ( StringW value );

        StringW                 GetMenuInternet_Path                    () const;
        void                    SetMenuInternet_Path                    ( StringW value );

        List < bool >&          GetMenuMultiLocal_SetUsedPlayersCount   () const;
        void                    SetMenuMultiLocal_SetUsedPlayersCount   ( List < bool >& value );

        class CGameCtnNetServerInfo* GetMenuMultiPlayerNetworkCreate_ServerInfo() const;
        void                    SetMenuMultiPlayerNetworkCreate_ServerInfo( class CGameCtnNetServerInfo* value );

        uint                    GetMenuMultiPlayerNetworkLan_PlayersCount() const;
        void                    SetMenuMultiPlayerNetworkLan_PlayersCount( uint value );

        uint                    GetMenuMultiPlayerNetworkLan_ServersCount() const;
        void                    SetMenuMultiPlayerNetworkLan_ServersCount( uint value );

        class CGameAvatar*      GetMenuProfile_Avatar                   () const;
        void                    SetMenuProfile_Avatar                   ( class CGameAvatar* value );

        uint                    GetMenuProfile_GroupsCount              () const;
        void                    SetMenuProfile_GroupsCount              ( uint value );

        StringW                 GetMenuProfile_HornName                 () const;
        void                    SetMenuProfile_HornName                 ( StringW value );

        uint                    GetMenuProfile_TagsAdmin_CurTag         () const;
        void                    SetMenuProfile_TagsAdmin_CurTag         ( uint value );

        bool                    GetMenuProfile_TagsAdmin_CurTagIsAvailableForConsultation() const;
        void                    SetMenuProfile_TagsAdmin_CurTagIsAvailableForConsultation( bool value );

        uint                    GetMenuProfile_TagsAdmin_TagCount       () const;
        void                    SetMenuProfile_TagsAdmin_TagCount       ( uint value );

        StringW                 GetMenuReplay_CurPath                   () const;
        void                    SetMenuReplay_CurPath                   ( StringW value );

        bool                    GetMenuReplay_Flatten                   () const;
        void                    SetMenuReplay_Flatten                   ( bool value );

        uint                    GetMenuReplay_ReplaysCount              () const;
        void                    SetMenuReplay_ReplaysCount              ( uint value );

        bool                    GetMenuSoloLadderBoth_ShowSkillPointsOrElseMedals() const;
        void                    SetMenuSoloLadderBoth_ShowSkillPointsOrElseMedals( bool value );

        uint                    GetMenuSplitScreenMode_CompetitionPoints() const;
        void                    SetMenuSplitScreenMode_CompetitionPoints( uint value );

        uint                    GetMenuSplitScreenMode_PartyTime        () const;
        void                    SetMenuSplitScreenMode_PartyTime        ( uint value );

        uint                    GetMenuSplitScreenMode_TeamTime         () const;
        void                    SetMenuSplitScreenMode_TeamTime         ( uint value );

        class CGameLeague*      GetMenu_GroupToManage                   () const;
        void                    SetMenu_GroupToManage                   ( class CGameLeague* value );

        class CGameMenu*        GetMenus                                () const;
        void                    SetMenus                                ( class CGameMenu* value );

        class CPlugBitmap*      GetModBitmap                            () const;
        void                    SetModBitmap                            ( class CPlugBitmap* value );

        bool                    GetNeverAskAgain                        () const;
        void                    SetNeverAskAgain                        ( bool value );

        bool                    GetOnlineAccount_AcceptNews             () const;
        void                    SetOnlineAccount_AcceptNews             ( bool value );

        uint                    GetOnlineAccount_Age                    () const;
        void                    SetOnlineAccount_Age                    ( uint value );

        StringA                 GetOnlineAccount_EMail                  () const;
        void                    SetOnlineAccount_EMail                  ( StringA value );

        StringA                 GetOnlineAccount_EMailConfirm           () const;
        void                    SetOnlineAccount_EMailConfirm           ( StringA value );

        StringA                 GetOnlineAccount_Key                    () const;
        void                    SetOnlineAccount_Key                    ( StringA value );

        StringA                 GetOnlineAccount_Login                  () const;
        void                    SetOnlineAccount_Login                  ( StringA value );

        class CGameLeague*      GetOnlineAccount_NewLeague              () const;
        void                    SetOnlineAccount_NewLeague              ( class CGameLeague* value );

        StringW                 GetOnlineAccount_NickName               () const;
        void                    SetOnlineAccount_NickName               ( StringW value );

        StringA                 GetOnlineAccount_Pass                   () const;
        void                    SetOnlineAccount_Pass                   ( StringA value );

        StringA                 GetOnlineAccount_PassConfirm            () const;
        void                    SetOnlineAccount_PassConfirm            ( StringA value );

        StringA                 GetOnlineAccount_PassNew                () const;
        void                    SetOnlineAccount_PassNew                ( StringA value );

        StringW                 GetOnlineAccount_Path                   () const;
        void                    SetOnlineAccount_Path                   ( StringW value );

        class CGameCtnPainter*  GetPainter                              () const;
        void                    SetPainter                              ( class CGameCtnPainter* value );

        StringA                 GetPasswordString                       () const;
        void                    SetPasswordString                       ( StringA value );

        StringA                 GetPasswordString2                      () const;
        void                    SetPasswordString2                      ( StringA value );

        StringA                 GetPasswordString3                      () const;
        void                    SetPasswordString3                      ( StringA value );

        float                   GetRankingScrollDelay                   () const;
        void                    SetRankingScrollDelay                   ( float value );

        float                   GetRankingScrollSpeed                   () const;
        void                    SetRankingScrollSpeed                   ( float value );

        List < nodptr<class CGameCtnReplayRecordInfo> >& GetReplayDirsList                       () const;
        void                    SetReplayDirsList                       ( List < nodptr<class CGameCtnReplayRecordInfo> >& value );

        List < nodptr<class CGameCtnReplayRecordInfo> >& GetReplayInfos                          () const;
        void                    SetReplayInfos                          ( List < nodptr<class CGameCtnReplayRecordInfo> >& value );

        List < nodptr<class CGameCtnReplayRecordInfo> >& GetReplayList                           () const;
        void                    SetReplayList                           ( List < nodptr<class CGameCtnReplayRecordInfo> >& value );

        bool                    GetSelectAll                            () const;
        void                    SetSelectAll                            ( bool value );

        StringW                 GetSelectedAvatarName                   () const;
        void                    SetSelectedAvatarName                   ( StringW value );

        class CGameCtnChallengeInfo* GetSelectedChallengeInfo                () const;
        void                    SetSelectedChallengeInfo                ( class CGameCtnChallengeInfo* value );

        StringA                 GetSelectedName                         () const;
        void                    SetSelectedName                         ( StringA value );

        StringW                 GetSelectedNickname                     () const;
        void                    SetSelectedNickname                     ( StringW value );

        bool                    GetSplitScreen_2Players                 () const;
        void                    SetSplitScreen_2Players                 ( bool value );

        bool                    GetSplitScreen_3Players                 () const;
        void                    SetSplitScreen_3Players                 ( bool value );

        bool                    GetSplitScreen_4Players                 () const;
        void                    SetSplitScreen_4Players                 ( bool value );

        bool                    GetSplitScreen_ScoreLeft                () const;
        void                    SetSplitScreen_ScoreLeft                ( bool value );

        bool                    GetSplitScreen_ScoreMiddle              () const;
        void                    SetSplitScreen_ScoreMiddle              ( bool value );

        bool                    GetSplitScreen_ScoreRight               () const;
        void                    SetSplitScreen_ScoreRight               ( bool value );

        bool                    GetSplitScreen_SplitHorizontal          () const;
        void                    SetSplitScreen_SplitHorizontal          ( bool value );

        bool                    GetSplitScreen_SplitVertical            () const;
        void                    SetSplitScreen_SplitVertical            ( bool value );

        class CGameMenu*        GetSystemDialogs                        () const;
        void                    SetSystemDialogs                        ( class CGameMenu* value );

        StringA                 GetTempEMail                            () const;
        void                    SetTempEMail                            ( StringA value );

        StringA                 GetTempLogin                            () const;
        void                    SetTempLogin                            ( StringA value );

        StringA                 GetTempPassword                         () const;
        void                    SetTempPassword                         ( StringA value );

        void                    DialogAddOrInviteBuddy_OnAdd            ();
        void                    DialogAddOrInviteBuddy_OnCancel         ();
        void                    DialogAddOrInviteBuddy_OnMail           ();
        void                    DialogAskIncreaseCacheSize_OnNever      ();
        void                    DialogAskIncreaseCacheSize_OnNo         ();
        void                    DialogAskIncreaseCacheSize_OnYes        ();
        void                    DialogAskPassword                       ();
        void                    DialogAskPassword_OnCancel              ();
        void                    DialogAskPassword_OnOk                  ();
        void                    DialogBuyManiaPlanetStations_OnCancel   ();
        void                    DialogBuyManiaPlanetStations_OnEnterKey ();
        void                    DialogBuyManiaPlanetStations_OnPay      ();
        void                    DialogBuyTitlePackages_OnBuyKey         ();
        void                    DialogBuyTitlePackages_OnCancel         ();
        void                    DialogBuyTitlePackages_OnEnterKey       ();
        void                    DialogBuyTitlePackages_OnPay            ();
        void                    DialogCardGrid_OnCancel                 ();
        void                    DialogCardGrid_OnOk                     ();
        void                    DialogCardGrid_OnRefresh                ();
        void                    DialogChangeTeam                        ();
        void                    DialogChangeTeam_OnCancel               ();
        void                    DialogChangeTeam_OnJoinTeam1            ();
        void                    DialogChangeTeam_OnJoinTeam2            ();
        void                    DialogChooseAvatar_OnAddAvatar          ();
        void                    DialogChooseAvatar_OnCancel             ();
        void                    DialogChooseEnvironmentFilter_OnEnvironmentChosen();
        void                    DialogChooseEnvironment_OnCancel        ();
        void                    DialogChooseGameModeFilter_OnGameModeChoosen();
        void                    DialogChooseInputDevice_OnCancel        ();
        void                    DialogChooseInputDevice_OnCardSelected  ();
        void                    DialogChooseInputDevice_OnSet           ();
        void                    DialogChooseLeague                      ();
        void                    DialogChooseLeague_Clean                ();
        void                    DialogChooseLeague_OnCancel             ();
        void                    DialogChooseLeague_OnOk                 ();
        void                    DialogChooseLeague_OnSelect             ();
        void                    DialogChooseLeague_UpdateThisLevel      ();
        void                    DialogChooseMapTypeForEditorSimple_OnMapTypeChosen();
        void                    DialogChoosePackDesc_DrawCurPage        ();
        void                    DialogChoosePackDesc_OnAddItem          ();
        void                    DialogChoosePackDesc_OnNextPage         ();
        void                    DialogChoosePackDesc_OnPrevPage         ();
        void                    DialogChooseProfile_OnAdd               ();
        void                    DialogChooseProfile_OnCancel            ();
        void                    DialogChooseProfile_OnSelect            ();
        void                    DialogComputeShadowsQuality_Default     ();
        void                    DialogComputeShadowsQuality_Fast        ();
        void                    DialogComputeShadowsQuality_High        ();
        void                    DialogComputeShadowsQuality_Ultra       ();
        void                    DialogComputeShadowsQuality_VeryFast    ();
        void                    DialogConfirmOfficialRecord_OnKeepTraining();
        void                    DialogConfirmOfficialRecord_OnPlayOfficial();
        void                    DialogConfirmOfficial_OnCancel          ();
        void                    DialogConfirmOfficial_OnOk              ();
        void                    DialogConnect_OnCancel                  ();
        void                    DialogConnect_OnConnect                 ();
        void                    DialogConnect_OnForgotPassword          ();
        void                    DialogConnect_OnRememberPassword        ();
        void                    DialogConvertAccount_OnCancel           ();
        void                    DialogConvertAccount_OnConvert          ();
        void                    DialogCreateObjectives                  ();
        void                    DialogCreateObjectives_OnValidate       ();
        void                    DialogCreateProfile_OnAvatar            ();
        void                    DialogCreateProfile_OnCancel            ();
        void                    DialogCreateProfile_OnOk                ();
        void                    DialogCredits_NonBlocking               ();
        void                    DialogDisplayChallengeCard              ();
        void                    DialogDisplayChallengeCard_OnOk         ();
        void                    DialogEditBlockSpecialProperty_OnCancel ();
        void                    DialogEditBlockSpecialProperty_OnCustom ();
        void                    DialogEditBlockSpecialProperty_OnDefault();
        void                    DialogEditBlockSpecialProperty_OnOk     ();
        void                    DialogEditCardEventsDeck_OnAdd          ();
        void                    DialogEditCardEventsDeck_OnAvailableCardEventSelect();
        void                    DialogEditCardEventsDeck_OnCurrentCardEventSelect();
        void                    DialogEditCardEventsDeck_OnOk           ();
        void                    DialogEditCardEventsDeck_OnRemove       ();
        void                    DialogEditCutScenes_OnEndRaceEdit       ();
        void                    DialogEditCutScenes_OnEndRaceRemove     ();
        void                    DialogEditCutScenes_OnGamePlayEdit      ();
        void                    DialogEditCutScenes_OnGamePlayRemove    ();
        void                    DialogEditCutScenes_OnInGameEdit        ();
        void                    DialogEditCutScenes_OnInGameRemove      ();
        void                    DialogEditCutScenes_OnIntroEdit         ();
        void                    DialogEditCutScenes_OnIntroRemove       ();
        void                    DialogEditCutScenes_OnPodiumEdit        ();
        void                    DialogEditCutScenes_OnPodiumRemove      ();
        void                    DialogEditCutScenes_OnRecordMediaTrackerGhost();
        void                    DialogEditScriptSettings_Ok             ();
        void                    DialogEditScriptSettings_Reset          ();
        void                    DialogEditScript_Cancel                 ();
        void                    DialogEditScript_Compile                ();
        void                    DialogEditScript_Find                   ();
        void                    DialogEditScript_Find_Ok                ();
        void                    DialogEditScript_Ok                     ();
        void                    DialogEditScript_Save                   ();
        void                    DialogEditScript_Save_Done              ();
        void                    DialogEditScript_ToggleIncludes         ();
        void                    DialogEditorAdditionalMenu              ();
        void                    DialogEditorAdditionalMenu_OnChallengeType();
        void                    DialogEditorAdditionalMenu_OnChooseCustomMusic();
        void                    DialogEditorAdditionalMenu_OnComputeShadows();
        void                    DialogEditorAdditionalMenu_OnEditComments();
        void                    DialogEditorAdditionalMenu_OnEditSnapCamera();
        void                    DialogEditorAdditionalMenu_OnObjectives ();
        void                    DialogEditorAdditionalMenu_OnPlayMap    ();
        void                    DialogEditorAdditionalMenu_OnReturn     ();
        void                    DialogEditorAdditionalMenu_OnSetDifficulty();
        void                    DialogEditorAdditionalMenu_OnSetPassword();
        void                    DialogEditorHelp                        ();
        void                    DialogEditorHelp_OnHelpers              ();
        void                    DialogEditorHelp_OnOk                   ();
        void                    DialogEditorMenu                        ();
        void                    DialogEditorMenu_OnReturn               ();
        void                    DialogEditorMenu_OnSaveAllBlocks        ();
        void                    DialogEditorMenu_OnShootCollectorIcons  ();
        void                    DialogEditorSelectDecal_OnBack          ();
        void                    DialogEditorSelectDecal_OnDensity1      ();
        void                    DialogEditorSelectDecal_OnDensity2      ();
        void                    DialogEditorSelectDecal_OnDensity3      ();
        void                    DialogEditorSelectDecal_OnOk            ();
        void                    DialogEditorSelectDecal_OnSolidVariant1 ();
        void                    DialogEditorSelectDecal_OnSolidVariant10();
        void                    DialogEditorSelectDecal_OnSolidVariant2 ();
        void                    DialogEditorSelectDecal_OnSolidVariant3 ();
        void                    DialogEditorSelectDecal_OnSolidVariant4 ();
        void                    DialogEditorSelectDecal_OnSolidVariant5 ();
        void                    DialogEditorSelectDecal_OnSolidVariant6 ();
        void                    DialogEditorSelectDecal_OnSolidVariant7 ();
        void                    DialogEditorSelectDecal_OnSolidVariant8 ();
        void                    DialogEditorSelectDecal_OnSolidVariant9 ();
        void                    DialogEditorSelectDecal_OnType1         ();
        void                    DialogEditorSelectDecal_OnType2         ();
        void                    DialogEditorSelectDecal_OnType3         ();
        void                    DialogEditorSelectDecal_OnType4         ();
        void                    DialogEditorSelectDecal_OnType5         ();
        void                    DialogEditorSelectDecal_OnType6         ();
        void                    DialogEditorSelectDecal_OnVariant1      ();
        void                    DialogEditorSelectDecal_OnVariant10     ();
        void                    DialogEditorSelectDecal_OnVariant2      ();
        void                    DialogEditorSelectDecal_OnVariant3      ();
        void                    DialogEditorSelectDecal_OnVariant4      ();
        void                    DialogEditorSelectDecal_OnVariant5      ();
        void                    DialogEditorSelectDecal_OnVariant6      ();
        void                    DialogEditorSelectDecal_OnVariant7      ();
        void                    DialogEditorSelectDecal_OnVariant8      ();
        void                    DialogEditorSelectDecal_OnVariant9      ();
        void                    DialogEditorShiftTrack_OnApply          ();
        void                    DialogEditorShiftTrack_OnCancel         ();
        void                    DialogEditorShiftTrack_OnDown           ();
        void                    DialogEditorShiftTrack_OnLeft           ();
        void                    DialogEditorShiftTrack_OnRight          ();
        void                    DialogEditorShiftTrack_OnUp             ();
        void                    DialogEndRaceSummary_OnReplay           ();
        void                    DialogEula_OnCancel                     ();
        void                    DialogEula_OnOk                         ();
        void                    DialogEventNonBlocking_OnAdd            ();
        void                    DialogEventNonBlocking_OnCancel         ();
        void                    DialogEventNonBlocking_OnNextPage       ();
        void                    DialogEventNonBlocking_OnOk             ();
        void                    DialogEventNonBlocking_OnPrevPage       ();
        void                    DialogEventNonBlocking_OnRemove         ();
        void                    DialogEventNonBlocking_OnSelect         ();
        void                    DialogGainMedalMoney_OnOk               ();
        void                    DialogGraphicSettings_OnAdvanced        ();
        void                    DialogGraphicSettings_OnApply           ();
        void                    DialogGraphicSettings_OnCancel          ();
        void                    DialogImportAccount_OnCancel            ();
        void                    DialogImportAccount_OnImport            ();
        void                    DialogInGameMenu_Abuse                  ();
        void                    DialogInGameMenu_AutoTeamBalance        ();
        void                    DialogInGameMenu_Ban                    ();
        void                    DialogInGameMenu_Buddy                  ();
        void                    DialogInGameMenu_Kick                   ();
        void                    DialogInGameMenu_ModeSettings           ();
        void                    DialogInGameMenu_Next                   ();
        void                    DialogInGameMenu_OfficialMode           ();
        void                    DialogInGameMenu_OnAdvanced             ();
        void                    DialogInGameMenu_OnBecomeReferee        ();
        void                    DialogInGameMenu_OnCancel               ();
        void                    DialogInGameMenu_OnChangeTeam           ();
        void                    DialogInGameMenu_OnInputSettings        ();
        void                    DialogInGameMenu_OnInterfaceSettings    ();
        void                    DialogInGameMenu_OnPlayerProfile        ();
        void                    DialogInGameMenu_OnQuit                 ();
        void                    DialogInGameMenu_OnResume               ();
        void                    DialogInGameMenu_OnRetire               ();
        void                    DialogInGameMenu_OnSaveChallenge        ();
        void                    DialogInGameMenu_OnSavePrevReplay       ();
        void                    DialogInGameMenu_OnSaveReplay           ();
        void                    DialogInGameMenu_OnSoloOfficialMode     ();
        void                    DialogInGameMenu_OnStereoscopySettings  ();
        void                    DialogInGameMenu_OnTrackRankings        ();
        void                    DialogInGameMenu_OnValidateBest         ();
        void                    DialogInGameMenu_OnVote                 ();
        void                    DialogInGameMenu_Restart                ();
        void                    DialogInGameMenu_Spectator              ();
        void                    DialogInGameMenu_SwitchFavourite        ();
        void                    DialogInputSettingsBindings_OnCancel    ();
        void                    DialogInputSettingsBindings_OnOk        ();
        void                    DialogInputSettingsBindings_OnPlayerInputs();
        void                    DialogInputSettingsBindings_OnResetToDefaults();
        void                    DialogInputSettingsBindings_OnStandardInputs();
        void                    DialogInputSettings_OnApplyAll          ();
        void                    DialogInputSettings_OnButtonEditBindings();
        void                    DialogInputSettings_OnQuit              ();
        void                    DialogInterfaceSettings_OnCrosshairNameSelect();
        void                    DialogInterfaceSettings_OnCrosshairNameSelect_Yes();
        void                    DialogInterfaceSettings_OnCrosshairNameUseDefault();
        void                    DialogInterfaceSettings_OnOk            ();
        void                    DialogInviteToGroup_Add                 ();
        void                    DialogInviteToGroup_Cancel              ();
        void                    DialogLadderRankingsOld_OnBack          ();
        void                    DialogLadderRankingsOld_OnOk            ();
        void                    DialogLadderRankingsOld_OnSelectItem    ();
        void                    DialogLadderRankingsOld_OnShowCurrentPlayersRankings();
        void                    DialogLadderRankings_OnBack             ();
        void                    DialogLadderRankings_OnOk               ();
        void                    DialogLadderRankings_OnRankingSelected  ();
        void                    DialogLadderRankings_OnShowCurrentPlayersRankings();
        void                    DialogMailAccount_OnCancel              ();
        void                    DialogMailAccount_OnOk                  ();
        void                    DialogManageGroup_Create                ();
        void                    DialogManageGroup_Invite                ();
        void                    DialogManageGroup_SetDefault            ();
        void                    DialogManageGroup_Unsubscribe           ();
        void                    DialogManageGroup_ViewPlayers           ();
        void                    DialogManiaCodeActionsList_Cancel       ();
        void                    DialogManiaCodeActionsList_Ok           ();
        void                    DialogMessenger_Clean                   ();
        void                    DialogMessenger_NotifyNewMessages       ();
        void                    DialogMessenger_OnNewMessage            ();
        void                    DialogMessenger_OnQuit                  ();
        void                    DialogMessenger_OnRemove                ();
        void                    DialogMessenger_OnRemoveAll             ();
        void                    DialogMessenger_OnReply                 ();
        void                    DialogMessenger_OnSave                  ();
        void                    DialogMessenger_OnSend                  ();
        void                    DialogMessenger_OnSendAll               ();
        void                    DialogMessenger_OnShowInbox             ();
        void                    DialogMessenger_OnShowOutbox            ();
        void                    DialogMessenger_Update                  ();
        void                    DialogMessenger_UpdateButtons           ();
        void                    DialogOnlineAccountError_OnCancel       ();
        void                    DialogOnlineAccountError_OnMailAccount  ();
        void                    DialogOnlineAccountError_OnOk           ();
        void                    DialogOnlineAccountInfo_OnCopyToClipboard();
        void                    DialogOnlineAccountPersonnal_OnCancel   ();
        void                    DialogOnlineAccountPersonnal_OnOk       ();
        void                    DialogOnlineAccountPersonnal_OnReceiveNews();
        void                    DialogOnlineAccount_OnCancel            ();
        void                    DialogOnlineAccount_OnCheckLogin        ();
        void                    DialogOnlineAccount_OnOk                ();
        void                    DialogOnlineAccount_OnRememberPassword  ();
        void                    DialogPlayerProfile_Abuse               ();
        void                    DialogPlayerProfile_Ban                 ();
        void                    DialogPlayerProfile_Buddy               ();
        void                    DialogPlayerProfile_Kick                ();
        void                    DialogPlayerProfile_OnHorn              ();
        void                    DialogPlayerProfile_OnNextPlayer        ();
        void                    DialogPlayerProfile_OnOk                ();
        void                    DialogPlayerProfile_OnPrevPlayer        ();
        void                    DialogPlayerProfile_Validate            ();
        void                    DialogRefereeStatus_OnCancel            ();
        void                    DialogRegisterAccountChoice_CreateNewAccount();
        void                    DialogRegisterAccountChoice_Offline     ();
        void                    DialogRegisterAccountChoice_UseExistingAccount();
        void                    DialogRemoteBrowser_OnClose             ();
        void                    DialogRemoteBrowser_OnFind              ();
        void                    DialogReplayLoaded_OnCancel             ();
        void                    DialogReplayLoaded_OnPlayAgainst        ();
        void                    DialogReplayLoaded_OnWatch              ();
        void                    DialogSelectCardEventsDeck_OnAdd        ();
        void                    DialogSelectCardEventsDeck_OnAddCheckName();
        void                    DialogSelectCardEventsDeck_OnDeckSelected();
        void                    DialogSelectCardEventsDeck_OnEdit       ();
        void                    DialogSelectCardEventsDeck_OnOk         ();
        void                    DialogSelectCardEventsDeck_OnRemove     ();
        void                    DialogSelectCardEventsDeck_OnRemoveYes  ();
        void                    DialogSelectCardEventsDeck_OnRename     ();
        void                    DialogSelectCardEventsDeck_OnRenameCheckName();
        void                    DialogSelectGroup_Cancel                ();
        void                    DialogSelectGroup_CreateNew             ();
        void                    DialogSelectGroup_OnSelect              ();
        void                    DialogSetChallengeType                  ();
        void                    DialogSetChallengeType_OnOk             ();
        void                    DialogSetChallengeType_ShowPickStyle    ();
        void                    DialogSetChallengeType_ShowPickType     ();
        void                    DialogSetChallengeType_StylePicked      ();
        void                    DialogSetChallengeType_TypePicked       ();
        void                    DialogSetDifficulty                     ();
        void                    DialogSetDifficulty_OnOk                ();
        void                    DialogSetInputDevice_OnOk               ();
        void                    DialogStereoscopySettings_DefaultValues ();
        void                    DialogStereoscopySettings_Disable       ();
        void                    DialogStereoscopySettings_Enable        ();
        void                    DialogStereoscopySettings_OnQuit        ();
        void                    DialogUpdateFiles_Abort                 ();
        void                    DialogViewPlayersInGroup_Ok             ();
        void                    DialogViewReplay_OnBack                 ();
        void                    DialogViewReplay_OnBench                ();
        void                    DialogViewReplay_OnEdit                 ();
        void                    DialogViewReplay_OnExportChallengeAndReplay();
        void                    DialogViewReplay_OnExportToValidate     ();
        void                    DialogViewReplay_OnPlay                 ();
        void                    DialogViewReplay_OnShootVideo           ();
        void                    DialogViewReplay_OnValidate             ();
        void                    DialogViewReplay_OnView                 ();
        void                    DialogVote_OnCancel                     ();
        void                    DialogVote_OnVoteNo                     ();
        void                    DialogVote_OnVoteYes                    ();
        void                    Dialog_OnCancel                         ();
        void                    Dialog_OnJoinAsSpectator                ();
        void                    Dialog_OnValidate                       ();
        void                    InputsList_ResetToDefaults_OnYes        ();
        void                    MenuChallengeSlots                      ();
        void                    MenuChallengeSlots_OnSlot1              ();
        void                    MenuChallengeSlots_OnSlot2              ();
        void                    MenuChallengeSlots_OnSlot3              ();
        void                    MenuChallengeSlots_OnSlot4              ();
        void                    MenuChallengeSlots_OnSlot5              ();
        void                    MenuChooseChallenge_OnBack              ();
        void                    MenuChooseChallenge_OnChallengeRemoved  ();
        void                    MenuChooseChallenge_OnChallengeRemovedConfirmed();
        void                    MenuChooseChallenge_OnChangeLeague      ();
        void                    MenuChooseChallenge_OnOk                ();
        void                    MenuChooseChallenge_OnOpenInExplorer    ();
        void                    MenuChooseChallenge_OnPathUp            ();
        void                    MenuChooseChallenge_OnRefresh           ();
        void                    MenuChooseChallenge_OnSelect            ();
        void                    MenuChooseChallenge_SelectOrUnselectAll ();
        void                    MenuConfigureInputs                     ();
        void                    MenuConfigureInputs_OnBack              ();
        void                    MenuConfigureInputs_OnPlayerInputs      ();
        void                    MenuConfigureInputs_OnSplitScreenInputs ();
        void                    MenuConfigureInputs_OnStandardInputs    ();
        void                    MenuConfigureInputs_SetDefaults         ();
        void                    MenuCreateChallenge                     ();
        void                    MenuCreateChallenge_OnAdvanced          ();
        void                    MenuCreateChallenge_OnSimple            ();
        void                    MenuEditors                             ();
        void                    MenuEditors_OnLoadChallenge             ();
        void                    MenuEditors_OnLoadChallenge_OnAdvanced  ();
        void                    MenuEditors_OnLoadChallenge_OnSimple    ();
        void                    MenuHotSeatCreate                       ();
        void                    MenuHotSeatCreate_LoadSettings          ();
        void                    MenuHotSeatCreate_OnBack                ();
        void                    MenuHotSeatCreate_OnOk                  ();
        void                    MenuHotSeatCreate_Start                 ();
        void                    MenuInternetLeague_BrowsePlayers        ();
        void                    MenuInternetLeague_BrowseServers        ();
        void                    MenuInternetLeague_OnAll                ();
        void                    MenuInternetLeague_OnBack               ();
        void                    MenuInternetLeague_OnChangeBuddyState   ();
        void                    MenuInternetLeague_OnCreate             ();
        void                    MenuInternetLeague_OnFavorites          ();
        void                    MenuInternetLeague_OnFilterEnvironment  ();
        void                    MenuInternetLeague_OnFilterGameMode     ();
        void                    MenuInternetLeague_OnHierarchyItemSelected();
        void                    MenuInternetLeague_OnHierarchyUp        ();
        void                    MenuInternetLeague_OnLadderHierarchyUp  ();
        void                    MenuInternetLeague_OnPlayerSelected     ();
        void                    MenuInternetLeague_OnRankings           ();
        void                    MenuInternetLeague_OnRefresh            ();
        void                    MenuInternetLeague_OnRefreshSimple      ();
        void                    MenuInternetLeague_OnServerSelected     ();
        void                    MenuInternetLeague_SwitchLeaguesPlayersLadder();
        void                    MenuInternetLeague_SwitchServersPlayers ();
        void                    MenuLoadSimpleChallenge_OnAdvanced      ();
        void                    MenuLoadSimpleChallenge_OnSimple        ();
        void                    MenuMain                                ();
        void                    MenuMain_OnQuit                         ();
        void                    MenuMultiLocal                          ();
        void                    MenuMultiLocal_OnBack                   ();
        void                    MenuMultiLocal_OnConfigureInputs        ();
        void                    MenuMultiLocal_OnOk                     ();
        void                    MenuMultiPlayerNetworkCreate            ();
        void                    MenuMultiPlayerNetworkCreate_OnAdvanced ();
        void                    MenuMultiPlayerNetworkCreate_OnBack     ();
        void                    MenuMultiPlayerNetworkCreate_OnLoadSettings();
        void                    MenuMultiPlayerNetworkCreate_OnLoadSettings_OnYes();
        void                    MenuMultiPlayerNetworkCreate_OnStart    ();
        void                    MenuMultiPlayerNetworkLan_OnBack        ();
        void                    MenuMultiPlayerNetworkLan_OnCreate      ();
        void                    MenuMultiPlayerNetworkLan_OnRefresh     ();
        void                    MenuMultiPlayerNetworkLan_OnSel         ();
        void                    MenuPaintVehicle                        ();
        void                    MenuPaintVehicle_OnBack                 ();
        void                    MenuPaintVehicle_OnBackConfirm          ();
        void                    MenuPlayChallenge_Edit                  ();
        void                    MenuPlayerPage_OnBack                   ();
        void                    MenuProfile                             ();
        void                    MenuProfileAdvanced                     ();
        void                    MenuProfile_Launch                      ();
        void                    MenuProfile_OnAddGroup                  ();
        void                    MenuProfile_OnChangeHorn                ();
        void                    MenuProfile_OnChangePass                ();
        void                    MenuProfile_OnChangeZone                ();
        void                    MenuProfile_OnCheckModifications        ();
        void                    MenuProfile_OnChooseAvatar              ();
        void                    MenuProfile_OnConvertAccount            ();
        void                    MenuProfile_OnDisconnectAccount         ();
        void                    MenuProfile_OnDisconnectAccountConfirmed();
        void                    MenuProfile_OnGroupSelected             ();
        void                    MenuProfile_OnReceiveNews               ();
        void                    MenuProfile_RemoveGroup                 ();
        void                    MenuReplay_FilterAndRedraw              ();
        void                    MenuReplay_OnBack                       ();
        void                    MenuReplay_OnOk                         ();
        void                    MenuReplay_OnOpenInExplorer             ();
        void                    MenuReplay_OnPathUp                     ();
        void                    MenuReplay_OnRefresh                    ();
        void                    MenuReplay_OnRollingDemo                ();
        void                    MenuReplay_OnSelectAll                  ();
        void                    MenuReplay_OnSelectDir                  ();
        void                    MenuReplay_OnSelectReplay               ();
        void                    MenuSplitScreenControlsAndPlayers_OnBack();
        void                    MenuSplitScreenControlsAndPlayers_OnOk  ();
        void                    MenuSplitScreenControls_OnScreen1       ();
        void                    MenuSplitScreenControls_OnScreen2       ();
        void                    MenuSplitScreenControls_OnScreen3       ();
        void                    MenuSplitScreenControls_OnScreen4       ();
        void                    MenuSplitScreenControls_Start           ();
        void                    MenuSplitScreenMode_OnBack              ();
        void                    MenuSplitScreenMode_OnCompetition       ();
        void                    MenuSplitScreenMode_OnOk                ();
        void                    MenuSplitScreenMode_OnParty             ();
        void                    MenuSplitScreenMode_OnTeam              ();
