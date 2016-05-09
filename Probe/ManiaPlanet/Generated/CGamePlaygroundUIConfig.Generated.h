        enum { CLASSID = 0x03103000 };

        static CGamePlaygroundUIConfig* CreateInstance ();

        enum eAlliesLabelsShowGauges
        {
            ALLIESLABELSSHOWGAUGES_NONE,
            ALLIESLABELSSHOWGAUGES_NORMAL,
            ALLIESLABELSSHOWGAUGES_MANUAL,
            ALLIESLABELSSHOWGAUGES_FORCEDHIDDEN,
            ALLIESLABELSSHOWGAUGES_FORCEDVISIBLE
        };
        static std::wstring     AlliesLabelsShowGaugesToString          ( eAlliesLabelsShowGauges value );
        static eAlliesLabelsShowGauges ParseAlliesLabelsShowGauges             ( const std::wstring& wstrName );

        enum eAlliesLabelsVisibility
        {
            ALLIESLABELSVISIBILITY_NONE,
            ALLIESLABELSVISIBILITY_NEVER,
            ALLIESLABELSVISIBILITY_ALWAYS,
            ALLIESLABELSVISIBILITY_WHENINFRUSTUM,
            ALLIESLABELSVISIBILITY_WHENVISIBLE,
            ALLIESLABELSVISIBILITY_WHENINMIDDLEOFSCREEN
        };
        static std::wstring     AlliesLabelsVisibilityToString          ( eAlliesLabelsVisibility value );
        static eAlliesLabelsVisibility ParseAlliesLabelsVisibility             ( const std::wstring& wstrName );

        enum eBigMessageAvatarVariant
        {
            BIGMESSAGEAVATARVARIANT_DEFAULT,
            BIGMESSAGEAVATARVARIANT_SAD,
            BIGMESSAGEAVATARVARIANT_HAPPY
        };
        static std::wstring     BigMessageAvatarVariantToString         ( eBigMessageAvatarVariant value );
        static eBigMessageAvatarVariant ParseBigMessageAvatarVariant            ( const std::wstring& wstrName );

        enum eBigMessageSound
        {
            BIGMESSAGESOUND_DEFAULT,
            BIGMESSAGESOUND_SILENCE,
            BIGMESSAGESOUND_STARTMATCH,
            BIGMESSAGESOUND_ENDMATCH,
            BIGMESSAGESOUND_STARTROUND,
            BIGMESSAGESOUND_ENDROUND,
            BIGMESSAGESOUND_PHASECHANGE,
            BIGMESSAGESOUND_TIEBREAKPOINT,
            BIGMESSAGESOUND_TIEPOINT,
            BIGMESSAGESOUND_VICTORYPOINT,
            BIGMESSAGESOUND_CAPTURE,
            BIGMESSAGESOUND_TIMEOUT,
            BIGMESSAGESOUND_NOTICE,
            BIGMESSAGESOUND_WARNING,
            BIGMESSAGESOUND_PLAYERELIMINATED,
            BIGMESSAGESOUND_PLAYERHIT,
            BIGMESSAGESOUND_CHECKPOINT,
            BIGMESSAGESOUND_FINISH,
            BIGMESSAGESOUND_CUSTOM1,
            BIGMESSAGESOUND_CUSTOM2,
            BIGMESSAGESOUND_CUSTOM3,
            BIGMESSAGESOUND_CUSTOM4
        };
        static std::wstring     BigMessageSoundToString                 ( eBigMessageSound value );
        static eBigMessageSound ParseBigMessageSound                    ( const std::wstring& wstrName );

        enum eEnemiesLabelsShowGauges
        {
            ENEMIESLABELSSHOWGAUGES_NONE,
            ENEMIESLABELSSHOWGAUGES_NORMAL,
            ENEMIESLABELSSHOWGAUGES_MANUAL,
            ENEMIESLABELSSHOWGAUGES_FORCEDHIDDEN,
            ENEMIESLABELSSHOWGAUGES_FORCEDVISIBLE
        };
        static std::wstring     EnemiesLabelsShowGaugesToString         ( eEnemiesLabelsShowGauges value );
        static eEnemiesLabelsShowGauges ParseEnemiesLabelsShowGauges            ( const std::wstring& wstrName );

        enum eEnemiesLabelsVisibility
        {
            ENEMIESLABELSVISIBILITY_NONE,
            ENEMIESLABELSVISIBILITY_NEVER,
            ENEMIESLABELSVISIBILITY_ALWAYS,
            ENEMIESLABELSVISIBILITY_WHENINFRUSTUM,
            ENEMIESLABELSVISIBILITY_WHENVISIBLE,
            ENEMIESLABELSVISIBILITY_WHENINMIDDLEOFSCREEN
        };
        static std::wstring     EnemiesLabelsVisibilityToString         ( eEnemiesLabelsVisibility value );
        static eEnemiesLabelsVisibility ParseEnemiesLabelsVisibility            ( const std::wstring& wstrName );

        enum eNoticesFilter_LevelToShowAsBigMessage
        {
            NOTICESFILTER_LEVELTOSHOWASBIGMESSAGE_DEFAULT,
            NOTICESFILTER_LEVELTOSHOWASBIGMESSAGE_PLAYERINFO,
            NOTICESFILTER_LEVELTOSHOWASBIGMESSAGE_PLAYERWARNING,
            NOTICESFILTER_LEVELTOSHOWASBIGMESSAGE_MAPINFO,
            NOTICESFILTER_LEVELTOSHOWASBIGMESSAGE_MAPWARNING,
            NOTICESFILTER_LEVELTOSHOWASBIGMESSAGE_MATCHINFO,
            NOTICESFILTER_LEVELTOSHOWASBIGMESSAGE_MATCHWARNING
        };
        static std::wstring     NoticesFilter_LevelToShowAsBigMessageToString ( eNoticesFilter_LevelToShowAsBigMessage value );
        static eNoticesFilter_LevelToShowAsBigMessage ParseNoticesFilter_LevelToShowAsBigMessage ( const std::wstring& wstrName );

        enum eScoreTableVisibility
        {
            SCORETABLEVISIBILITY_NONE,
            SCORETABLEVISIBILITY_NORMAL,
            SCORETABLEVISIBILITY_MANUAL,
            SCORETABLEVISIBILITY_FORCEDHIDDEN,
            SCORETABLEVISIBILITY_FORCEDVISIBLE
        };
        static std::wstring     ScoreTableVisibilityToString            ( eScoreTableVisibility value );
        static eScoreTableVisibility ParseScoreTableVisibility               ( const std::wstring& wstrName );

        enum eSmallScoreTableVisibility
        {
            SMALLSCORETABLEVISIBILITY_NONE,
            SMALLSCORETABLEVISIBILITY_NORMAL,
            SMALLSCORETABLEVISIBILITY_MANUAL,
            SMALLSCORETABLEVISIBILITY_FORCEDHIDDEN,
            SMALLSCORETABLEVISIBILITY_FORCEDVISIBLE
        };
        static std::wstring     SmallScoreTableVisibilityToString       ( eSmallScoreTableVisibility value );
        static eSmallScoreTableVisibility ParseSmallScoreTableVisibility          ( const std::wstring& wstrName );

        enum eUISequence
        {
            UISEQUENCE_NONE,
            UISEQUENCE_PLAYING,
            UISEQUENCE_INTRO,
            UISEQUENCE_OUTRO,
            UISEQUENCE_PODIUM,
            UISEQUENCE_CUSTOMMTCLIP,
            UISEQUENCE_ENDROUND,
            UISEQUENCE_PLAYERSPRESENTATION
        };
        static std::wstring     UISequenceToString                      ( eUISequence value );
        static eUISequence      ParseUISequence                         ( const std::wstring& wstrName );

        enum eUIStatus
        {
            UISTATUS_NONE,
            UISTATUS_NORMAL,
            UISTATUS_WARNING,
            UISTATUS_ERROR,
            UISTATUS_OFFICIAL
        };
        static std::wstring     UIStatusToString                        ( eUIStatus value );
        static eUIStatus        ParseUIStatus                           ( const std::wstring& wstrName );

        eAlliesLabelsShowGauges GetAlliesLabelsShowGauges               () const;
        void                    SetAlliesLabelsShowGauges               ( eAlliesLabelsShowGauges value );

        eAlliesLabelsVisibility GetAlliesLabelsVisibility               () const;
        void                    SetAlliesLabelsVisibility               ( eAlliesLabelsVisibility value );

        bool                    GetAltMenuNoCustomScores                () const;
        void                    SetAltMenuNoCustomScores                ( bool value );

        bool                    GetAltMenuNoDefaultScores               () const;
        void                    SetAltMenuNoDefaultScores               ( bool value );

        StringW                 GetBigMessage                           () const;
        void                    SetBigMessage                           ( StringW value );

        StringA                 GetBigMessageAvatarLogin                () const;
        void                    SetBigMessageAvatarLogin                ( StringA value );

        eBigMessageAvatarVariant GetBigMessageAvatarVariant              () const;
        void                    SetBigMessageAvatarVariant              ( eBigMessageAvatarVariant value );

        eBigMessageSound        GetBigMessageSound                      () const;
        void                    SetBigMessageSound                      ( eBigMessageSound value );

        uint                    GetBigMessageSoundVariant               () const;
        void                    SetBigMessageSoundVariant               ( uint value );

        int                     GetCountdownEndTime                     () const;
        void                    SetCountdownEndTime                     ( int value );

        eEnemiesLabelsShowGauges GetEnemiesLabelsShowGauges              () const;
        void                    SetEnemiesLabelsShowGauges              ( eEnemiesLabelsShowGauges value );

        eEnemiesLabelsVisibility GetEnemiesLabelsVisibility              () const;
        void                    SetEnemiesLabelsVisibility              ( eEnemiesLabelsVisibility value );

        bool                    GetForceSpectator                       () const;
        void                    SetForceSpectator                       ( bool value );

        uint                    GetGaugeClan                            () const;
        void                    SetGaugeClan                            ( uint value );

        StringW                 GetGaugeMessage                         () const;
        void                    SetGaugeMessage                         ( StringW value );

        float                   GetGaugeRatio                           () const;
        void                    SetGaugeRatio                           ( float value );

        StringA                 GetHud3dMarkers                         () const;
        void                    SetHud3dMarkers                         ( StringA value );

        StringW                 GetManialinkPage                        () const;
        void                    SetManialinkPage                        ( StringW value );

        bool                    GetNoticesFilter_HideMapInfo            () const;
        void                    SetNoticesFilter_HideMapInfo            ( bool value );

        bool                    GetNoticesFilter_HideMapWarning         () const;
        void                    SetNoticesFilter_HideMapWarning         ( bool value );

        bool                    GetNoticesFilter_HideMatchInfo          () const;
        void                    SetNoticesFilter_HideMatchInfo          ( bool value );

        bool                    GetNoticesFilter_HideMatchWarning       () const;
        void                    SetNoticesFilter_HideMatchWarning       ( bool value );

        bool                    GetNoticesFilter_HidePlayerInfo         () const;
        void                    SetNoticesFilter_HidePlayerInfo         ( bool value );

        bool                    GetNoticesFilter_HidePlayerInfoIfNotMe  () const;
        void                    SetNoticesFilter_HidePlayerInfoIfNotMe  ( bool value );

        bool                    GetNoticesFilter_HidePlayerWarning      () const;
        void                    SetNoticesFilter_HidePlayerWarning      ( bool value );

        bool                    GetNoticesFilter_HidePlayerWarningIfNotMe() const;
        void                    SetNoticesFilter_HidePlayerWarningIfNotMe( bool value );

        eNoticesFilter_LevelToShowAsBigMessage GetNoticesFilter_LevelToShowAsBigMessage() const;
        void                    SetNoticesFilter_LevelToShowAsBigMessage( eNoticesFilter_LevelToShowAsBigMessage value );

        bool                    GetOverlayHideAll                       () const;
        void                    SetOverlayHideAll                       ( bool value );

        bool                    GetOverlayHideChat                      () const;
        void                    SetOverlayHideChat                      ( bool value );

        bool                    GetOverlayHideCheckPointList            () const;
        void                    SetOverlayHideCheckPointList            ( bool value );

        bool                    GetOverlayHideMapInfo                   () const;
        void                    SetOverlayHideMapInfo                   ( bool value );

        bool                    GetOverlayHideNotices                   () const;
        void                    SetOverlayHideNotices                   ( bool value );

        bool                    GetOverlayHideOpponentsInfo             () const;
        void                    SetOverlayHideOpponentsInfo             ( bool value );

        bool                    GetOverlayHideRoundScores               () const;
        void                    SetOverlayHideRoundScores               ( bool value );

        bool                    GetOverlayScoreSummary                  () const;
        void                    SetOverlayScoreSummary                  ( bool value );

        float                   GetScoreSummary_Gauge1                  () const;
        void                    SetScoreSummary_Gauge1                  ( float value );

        float                   GetScoreSummary_Gauge2                  () const;
        void                    SetScoreSummary_Gauge2                  ( float value );

        int                     GetScoreSummary_MatchPoints1            () const;
        void                    SetScoreSummary_MatchPoints1            ( int value );

        int                     GetScoreSummary_MatchPoints2            () const;
        void                    SetScoreSummary_MatchPoints2            ( int value );

        Id                      GetScoreSummary_Player1                 () const;
        void                    SetScoreSummary_Player1                 ( Id value );

        Id                      GetScoreSummary_Player2                 () const;
        void                    SetScoreSummary_Player2                 ( Id value );

        int                     GetScoreSummary_Points1                 () const;
        void                    SetScoreSummary_Points1                 ( int value );

        int                     GetScoreSummary_Points2                 () const;
        void                    SetScoreSummary_Points2                 ( int value );

        StringA                 GetScoreTable                           () const;
        void                    SetScoreTable                           ( StringA value );

        bool                    GetScoreTableOnlyManialink              () const;
        void                    SetScoreTableOnlyManialink              ( bool value );

        eScoreTableVisibility   GetScoreTableVisibility                 () const;
        void                    SetScoreTableVisibility                 ( eScoreTableVisibility value );

        bool                    GetScreenIn3dHideScoreSummary           () const;
        void                    SetScreenIn3dHideScoreSummary           ( bool value );

        bool                    GetScreenIn3dHideVersus                 () const;
        void                    SetScreenIn3dHideVersus                 ( bool value );

        StringA                 GetSmallScoreTable                      () const;
        void                    SetSmallScoreTable                      ( StringA value );

        eSmallScoreTableVisibility GetSmallScoreTableVisibility            () const;
        void                    SetSmallScoreTableVisibility            ( eSmallScoreTableVisibility value );

        Id                      GetSpectatorAutoTarget                  () const;
        void                    SetSpectatorAutoTarget                  ( Id value );

        float                   GetSpectatorCamAutoLatitude             () const;
        void                    SetSpectatorCamAutoLatitude             ( float value );

        float                   GetSpectatorCamAutoLongitude            () const;
        void                    SetSpectatorCamAutoLongitude            ( float value );

        float                   GetSpectatorCamAutoRadius               () const;
        void                    SetSpectatorCamAutoRadius               ( float value );

        uint                    GetSpectatorForceCameraType             () const;
        void                    SetSpectatorForceCameraType             ( uint value );

        int                     GetSpectatorForcedClan                  () const;
        void                    SetSpectatorForcedClan                  ( int value );

        Id                      GetSpectatorForcedTarget                () const;
        void                    SetSpectatorForcedTarget                ( Id value );

        StringW                 GetStatusMessage                        () const;
        void                    SetStatusMessage                        ( StringW value );

        List < nodptr<class CGamePlaygroundUILayer> >& GetUILayers                             () const;
        void                    SetUILayers                             ( List < nodptr<class CGamePlaygroundUILayer> >& value );

        eUISequence             GetUISequence                           () const;
        void                    SetUISequence                           ( eUISequence value );

        bool                    GetUISequenceIsCompleted                () const;
        void                    SetUISequenceIsCompleted                ( bool value );

        StringW                 GetUISequence_CustomMTClip              () const;
        void                    SetUISequence_CustomMTClip              ( StringW value );

        eUIStatus               GetUIStatus                             () const;
        void                    SetUIStatus                             ( eUIStatus value );

        void                    ClearLayerManialinkAction               ( class CGamePlaygroundUILayer* pLayer );
        StringW                 GetLayerManialinkAction                 ( class CGamePlaygroundUILayer* pLayer );
        void                    SendChat                                ( StringW wstrText );
        void                    SendNotice                              ( StringW wstrText, uint level, class CGamePlayerInfo* pAvatar, uint avatarVariant, uint sound, int iSoundVariant );
