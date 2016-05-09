        enum { CLASSID = 0x0302D000 };

        static CGameResources*  CreateInstance ();

        class CPlugAudioBalance* GetAudioBalance_Base                    () const;
        void                    SetAudioBalance_Base                    ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_Editor                  () const;
        void                    SetAudioBalance_Editor                  ( class CPlugAudioBalance* value );

        class CPlugAudioBalance* GetAudioBalance_Menus                   () const;
        void                    SetAudioBalance_Menus                   ( class CPlugAudioBalance* value );

        Array < class CAudioSound* >& GetAudioSounds                          () const;
        void                    SetAudioSounds                          ( Array < class CAudioSound* >& value );

        class CGameMenu*        GetBasicDialogsFid                      () const;
        void                    SetBasicDialogsFid                      ( class CGameMenu* value );

        class CScene2d*         GetBulletinBoardFid                     () const;
        void                    SetBulletinBoardFid                     ( class CScene2d* value );

        class CPlugSolid*       GetBulletinBoardTabletFid               () const;
        void                    SetBulletinBoardTabletFid               ( class CPlugSolid* value );

        class CPlugFileSnd*     GetCreditsMusicFid                      () const;
        void                    SetCreditsMusicFid                      ( class CPlugFileSnd* value );

        class CPlugBitmap*      GetDefaultAvatarBitmapFid               () const;
        void                    SetDefaultAvatarBitmapFid               ( class CPlugBitmap* value );

        class CPlugBitmap*      GetDefaultLeagueLogoBitmapFid           () const;
        void                    SetDefaultLeagueLogoBitmapFid           ( class CPlugBitmap* value );

        class CPlugBitmap*      GetDefaultMTBlockBitmapFid              () const;
        void                    SetDefaultMTBlockBitmapFid              ( class CPlugBitmap* value );

        class CPlugSound*       GetDefaultMTBlockSoundFid               () const;
        void                    SetDefaultMTBlockSoundFid               ( class CPlugSound* value );

        class CPlugBitmap*      GetDefaultOnlineNewsIconBitmapFid       () const;
        void                    SetDefaultOnlineNewsIconBitmapFid       ( class CPlugBitmap* value );

        class CPlugFileTextScript* GetDefaultSkillScoreComputerFid         () const;
        void                    SetDefaultSkillScoreComputerFid         ( class CPlugFileTextScript* value );

        class CPlugBitmap*      GetDefaultTagBitmapFid                  () const;
        void                    SetDefaultTagBitmapFid                  ( class CPlugBitmap* value );

        class CPlugBitmap*      GetDefaultTeamLogoBitmapFid             () const;
        void                    SetDefaultTeamLogoBitmapFid             ( class CPlugBitmap* value );

        class CPlugBitmap*      GetDefaultTournamentLogoBitmapFid       () const;
        void                    SetDefaultTournamentLogoBitmapFid       ( class CPlugBitmap* value );

        class CGameCtnMediaClip* GetDefaultTransitionInClipFid           () const;
        void                    SetDefaultTransitionInClipFid           ( class CGameCtnMediaClip* value );

        class CGameCtnMediaClip* GetDefaultTransitionOutClipFid          () const;
        void                    SetDefaultTransitionOutClipFid          ( class CGameCtnMediaClip* value );

        class CGameMenu*        GetDialogsFid                           () const;
        void                    SetDialogsFid                           ( class CGameMenu* value );

        class CControlFrame*    GetEditorAnimInterfaceFid               () const;
        void                    SetEditorAnimInterfaceFid               ( class CControlFrame* value );

        class CPlugMaterial*    GetEditorModelDefaultMaterialFid        () const;
        void                    SetEditorModelDefaultMaterialFid        ( class CPlugMaterial* value );

        class CPlugBitmap*      GetEditorModelSpritesBitmapFid          () const;
        void                    SetEditorModelSpritesBitmapFid          ( class CPlugBitmap* value );

        class CMwNod*           GetEditorSpawnHelper                    () const;
        void                    SetEditorSpawnHelper                    ( class CMwNod* value );

        class CPlugFileSnd*     GetEmptyChallengeCustomMusicFid         () const;
        void                    SetEmptyChallengeCustomMusicFid         ( class CPlugFileSnd* value );

        class CSystemFidsFolder* GetFolderGlobalEnvBanners               () const;
        void                    SetFolderGlobalEnvBanners               ( class CSystemFidsFolder* value );

        class CGameControlCardManager* GetGeneralCardManager                   () const;
        void                    SetGeneralCardManager                   ( class CGameControlCardManager* value );

        class CSystemFidsFolder* GetHymnsFolder                          () const;
        void                    SetHymnsFolder                          ( class CSystemFidsFolder* value );

        class CPlugFileImg*     GetImageTurboRoulette                   () const;
        void                    SetImageTurboRoulette                   ( class CPlugFileImg* value );

        class CPlugShader*      GetInterfaceBg                          () const;
        void                    SetInterfaceBg                          ( class CPlugShader* value );

        class CScene2d*         GetInterfaceBlockEditorFid              () const;
        void                    SetInterfaceBlockEditorFid              ( class CScene2d* value );

        class CScene2d*         GetInterfaceEditorFid                   () const;
        void                    SetInterfaceEditorFid                   ( class CScene2d* value );

        class CScene2d*         GetInterfaceEditorSimpleFid             () const;
        void                    SetInterfaceEditorSimpleFid             ( class CScene2d* value );

        class CPlugFont*        GetInterfaceFont                        () const;
        void                    SetInterfaceFont                        ( class CPlugFont* value );

        class CScene2d*         GetInterfacePuzzleFid                   () const;
        void                    SetInterfacePuzzleFid                   ( class CScene2d* value );

        class CScene2d*         GetMediaTrackerInterfaceFid             () const;
        void                    SetMediaTrackerInterfaceFid             ( class CScene2d* value );

        class CSystemFidsFolder* GetMenuBackgroundsFolder                () const;
        void                    SetMenuBackgroundsFolder                ( class CSystemFidsFolder* value );

        class CGameMenu*        GetMenusFid                             () const;
        void                    SetMenusFid                             ( class CGameMenu* value );

        Array < class CPlugMusic* >& GetMusics                               () const;
        void                    SetMusics                               ( Array < class CPlugMusic* >& value );

        class CPlugShaderApply* GetOffZoneLayerShaderFid                () const;
        void                    SetOffZoneLayerShaderFid                ( class CPlugShaderApply* value );

        class CPlugShaderApply* GetOffZoneSurfaceShaderFid              () const;
        void                    SetOffZoneSurfaceShaderFid              ( class CPlugShaderApply* value );

        class CGameCtnPainterSetting* GetPainterSetting                       () const;
        void                    SetPainterSetting                       ( class CGameCtnPainterSetting* value );

        class CScene3d*         GetPodiumScene                          () const;
        void                    SetPodiumScene                          ( class CScene3d* value );

        class CScene2d*         GetProgressOverlayFid                   () const;
        void                    SetProgressOverlayFid                   ( class CScene2d* value );

        class CScene2d*         GetRaceInterfaceFid                     () const;
        void                    SetRaceInterfaceFid                     ( class CScene2d* value );

        class CScene2d*         GetRaceNetInterfaceFid                  () const;
        void                    SetRaceNetInterfaceFid                  ( class CScene2d* value );

        class CScene2d*         GetReplayInterfaceFid                   () const;
        void                    SetReplayInterfaceFid                   ( class CScene2d* value );

        class CSceneFxNod*      GetSceneFxNodRoot                       () const;
        void                    SetSceneFxNodRoot                       ( class CSceneFxNod* value );

        Array < class CPlugSound* >& GetSounds                               () const;
        void                    SetSounds                               ( Array < class CPlugSound* >& value );

        class CPlugSolid*       GetStationBronzeFid                     () const;
        void                    SetStationBronzeFid                     ( class CPlugSolid* value );

        class CGameSkin*        GetStationGameSkin                      () const;
        void                    SetStationGameSkin                      ( class CGameSkin* value );

        class CPlugSolid*       GetStationGoldFid                       () const;
        void                    SetStationGoldFid                       ( class CPlugSolid* value );

        class CControlFrame*    GetStationInfoCardFid                   () const;
        void                    SetStationInfoCardFid                   ( class CControlFrame* value );

        class CPlugSolid*       GetStationSilverFid                     () const;
        void                    SetStationSilverFid                     ( class CPlugSolid* value );

        class CScene2d*         GetStoryInterfaceFid                    () const;
        void                    SetStoryInterfaceFid                    ( class CScene2d* value );

        class CControlStyle*    GetStyleDefaultTitleLogos               () const;
        void                    SetStyleDefaultTitleLogos               ( class CControlStyle* value );

        class CControlStyleSheet* GetStyleSheetFid                        () const;
        void                    SetStyleSheetFid                        ( class CControlStyleSheet* value );

        class CGameMenu*        GetSystemDialogsFid                     () const;
        void                    SetSystemDialogsFid                     ( class CGameMenu* value );

        class CScene2d*         GetSystemOverlayFid                     () const;
        void                    SetSystemOverlayFid                     ( class CScene2d* value );

        class CSystemFidsFolder* GetTitleTemplateFolder                  () const;
        void                    SetTitleTemplateFolder                  ( class CSystemFidsFolder* value );

