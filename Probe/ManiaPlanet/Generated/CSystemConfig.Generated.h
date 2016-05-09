        enum { CLASSID = 0x0B005000 };

        static CSystemConfig*   CreateInstance ();

        enum eAdvertising_Enabled
        {
            ADVERTISING_ENABLED_DISABLED,
            ADVERTISING_ENABLED_CONFIGURABLE,
            ADVERTISING_ENABLED_FORCED
        };
        static std::wstring     Advertising_EnabledToString             ( eAdvertising_Enabled value );
        static eAdvertising_Enabled ParseAdvertising_Enabled                ( const std::wstring& wstrName );

        enum eAudioAcceleration_Dx9
        {
            AUDIOACCELERATION_DX9_AUDIO_AUTO,
            AUDIOACCELERATION_DX9_AUDIO_HARDWAREONLY,
            AUDIOACCELERATION_DX9_AUDIO_SOFTWAREONLY
        };
        static std::wstring     AudioAcceleration_Dx9ToString           ( eAudioAcceleration_Dx9 value );
        static eAudioAcceleration_Dx9 ParseAudioAcceleration_Dx9              ( const std::wstring& wstrName );

        enum eAudioGlobalQuality
        {
            AUDIOGLOBALQUALITY_AUDIOQUALITY_LOW,
            AUDIOGLOBALQUALITY_AUDIOQUALITY_NORMAL,
            AUDIOGLOBALQUALITY_AUDIOQUALITY_HIGH
        };
        static std::wstring     AudioGlobalQualityToString              ( eAudioGlobalQuality value );
        static eAudioGlobalQuality ParseAudioGlobalQuality                 ( const std::wstring& wstrName );

        enum eAudioQuality3d_Dx9
        {
            AUDIOQUALITY3D_DX9_AUDIO_NOHRTF,
            AUDIOQUALITY3D_DX9_AUDIO_HRTFLIGHT,
            AUDIOQUALITY3D_DX9_AUDIO_HRTFFULL
        };
        static std::wstring     AudioQuality3d_Dx9ToString              ( eAudioQuality3d_Dx9 value );
        static eAudioQuality3d_Dx9 ParseAudioQuality3d_Dx9                 ( const std::wstring& wstrName );

        enum eAudioSpeakerConfig
        {
            AUDIOSPEAKERCONFIG_SPEAKER_USE_SYSTEM_CONFIG,
            AUDIOSPEAKERCONFIG_SPEAKER_MONO,
            AUDIOSPEAKERCONFIG_SPEAKER_HEADPHONE,
            AUDIOSPEAKERCONFIG_SPEAKER_STEREO_MIN,
            AUDIOSPEAKERCONFIG_SPEAKER_STEREO_NARROW,
            AUDIOSPEAKERCONFIG_SPEAKER_STEREO_WIDE,
            AUDIOSPEAKERCONFIG_SPEAKER_STEREO_MAX,
            AUDIOSPEAKERCONFIG_SPEAKER_QUAD,
            AUDIOSPEAKERCONFIG_SPEAKER_SURROUND,
            AUDIOSPEAKERCONFIG_SPEAKER_5_1,
            AUDIOSPEAKERCONFIG_SPEAKER_7_1,
            AUDIOSPEAKERCONFIG_SPEAKER_NO_SPEAKERS
        };
        static std::wstring     AudioSpeakerConfigToString              ( eAudioSpeakerConfig value );
        static eAudioSpeakerConfig ParseAudioSpeakerConfig                 ( const std::wstring& wstrName );

        enum eNetworkSpeed
        {
            NETWORKSPEED_NETWORKSPEED_CUSTOM,
            NETWORKSPEED_NETWORKSPEED_MODEM_56KB,
            NETWORKSPEED_NETWORKSPEED_DSL_2MB,
            NETWORKSPEED_NETWORKSPEED_DSL_8MB,
            NETWORKSPEED_NETWORKSPEED_DSL_20MB,
            NETWORKSPEED_NETWORKSPEED_FIBER_100MB
        };
        static std::wstring     NetworkSpeedToString                    ( eNetworkSpeed value );
        static eNetworkSpeed    ParseNetworkSpeed                       ( const std::wstring& wstrName );

        enum ePlayerInfoDisplayType
        {
            PLAYERINFODISPLAYTYPE_NAME,
            PLAYERINFODISPLAYTYPE_AVATAR,
            PLAYERINFODISPLAYTYPE_AVATAR_AND_NAME
        };
        static std::wstring     PlayerInfoDisplayTypeToString           ( ePlayerInfoDisplayType value );
        static ePlayerInfoDisplayType ParsePlayerInfoDisplayType              ( const std::wstring& wstrName );

        enum ePlayerOcclusion
        {
            PLAYEROCCLUSION_PLAYEROCCLUSION_NONE,
            PLAYEROCCLUSION_PLAYEROCCLUSION_ME,
            PLAYEROCCLUSION_PLAYEROCCLUSION_ALL
        };
        static std::wstring     PlayerOcclusionToString                 ( ePlayerOcclusion value );
        static ePlayerOcclusion ParsePlayerOcclusion                    ( const std::wstring& wstrName );

        enum ePlayerShadow
        {
            PLAYERSHADOW_PLAYERSHADOW_NONE,
            PLAYERSHADOW_PLAYERSHADOW_ME,
            PLAYERSHADOW_PLAYERSHADOW_ALL
        };
        static std::wstring     PlayerShadowToString                    ( ePlayerShadow value );
        static ePlayerShadow    ParsePlayerShadow                       ( const std::wstring& wstrName );

        enum eTmBackgroundQuality
        {
            TMBACKGROUNDQUALITY_BACKGROUNDQUALITY_LOW,
            TMBACKGROUNDQUALITY_BACKGROUNDQUALITY_MEDIUM,
            TMBACKGROUNDQUALITY_BACKGROUNDQUALITY_HIGH
        };
        static std::wstring     TmBackgroundQualityToString             ( eTmBackgroundQuality value );
        static eTmBackgroundQuality ParseTmBackgroundQuality                ( const std::wstring& wstrName );

        enum eTmCarParticlesQuality
        {
            TMCARPARTICLESQUALITY_CARPARTICLESQUALITY_ALL_LOW,
            TMCARPARTICLESQUALITY_CARPARTICLESQUALITY_ALL_MEDIUM,
            TMCARPARTICLESQUALITY_CARPARTICLESQUALITY_HIGH_MEDIUM_OPPONENTS,
            TMCARPARTICLESQUALITY_CARPARTICLESQUALITY_ALL_HIGH
        };
        static std::wstring     TmCarParticlesQualityToString           ( eTmCarParticlesQuality value );
        static eTmCarParticlesQuality ParseTmCarParticlesQuality              ( const std::wstring& wstrName );

        enum eTmCarQuality
        {
            TMCARQUALITY_CARQUALITY_ALL_LOW,
            TMCARQUALITY_CARQUALITY_MEDIUM_LOW_OPPONENTS,
            TMCARQUALITY_CARQUALITY_HIGH_MEDIUM_OPPONENTS,
            TMCARQUALITY_CARQUALITY_ALL_HIGH
        };
        static std::wstring     TmCarQualityToString                    ( eTmCarQuality value );
        static eTmCarQuality    ParseTmCarQuality                       ( const std::wstring& wstrName );

        enum eTmOpponents
        {
            TMOPPONENTS_OPPONENTS_ALWAYS_VISIBLE,
            TMOPPONENTS_OPPONENTS_HIDE_TOO_CLOSE
        };
        static std::wstring     TmOpponentsToString                     ( eTmOpponents value );
        static eTmOpponents     ParseTmOpponents                        ( const std::wstring& wstrName );

        enum eVsk3BoatQuality
        {
            VSK3BOATQUALITY_BOATQUALITY_ALL_LOW,
            VSK3BOATQUALITY_BOATQUALITY_LOW_OPPONENTS,
            VSK3BOATQUALITY_BOATQUALITY_ALL_HIGH
        };
        static std::wstring     Vsk3BoatQualityToString                 ( eVsk3BoatQuality value );
        static eVsk3BoatQuality ParseVsk3BoatQuality                    ( const std::wstring& wstrName );

        enum eVsk3SeaQuality
        {
            VSK3SEAQUALITY_SEAQUALITY_LOW,
            VSK3SEAQUALITY_SEAQUALITY_MEDIUM,
            VSK3SEAQUALITY_SEAQUALITY_HIGH,
            VSK3SEAQUALITY_SEAQUALITY_VERY_HIGH
        };
        static std::wstring     Vsk3SeaQualityToString                  ( eVsk3SeaQuality value );
        static eVsk3SeaQuality  ParseVsk3SeaQuality                     ( const std::wstring& wstrName );

        enum eVsk3Stem
        {
            VSK3STEM_TEAMMATES_NONE,
            VSK3STEM_TEAMMATES_MY_BOAT,
            VSK3STEM_TEAMMATES_ALL_BOATS
        };
        static std::wstring     Vsk3StemToString                        ( eVsk3Stem value );
        static eVsk3Stem        ParseVsk3Stem                           ( const std::wstring& wstrName );

        enum eVsk3TeamMate
        {
            VSK3TEAMMATE_TEAMMATES_NONE,
            VSK3TEAMMATE_TEAMMATES_MY_BOAT,
            VSK3TEAMMATE_TEAMMATES_ALL_BOATS
        };
        static std::wstring     Vsk3TeamMateToString                    ( eVsk3TeamMate value );
        static eVsk3TeamMate    ParseVsk3TeamMate                       ( const std::wstring& wstrName );

        bool                    GetAdvertising_DisabledByUser           () const;
        void                    SetAdvertising_DisabledByUser           ( bool value );

        eAdvertising_Enabled    GetAdvertising_Enabled                  () const;
        void                    SetAdvertising_Enabled                  ( eAdvertising_Enabled value );

        float                   GetAdvertising_TunningCoef              () const;
        void                    SetAdvertising_TunningCoef              ( float value );

        StringA                 GetAntiCheatServerUrl                   () const;
        void                    SetAntiCheatServerUrl                   ( StringA value );

        eAudioAcceleration_Dx9  GetAudioAcceleration_Dx9                () const;
        void                    SetAudioAcceleration_Dx9                ( eAudioAcceleration_Dx9 value );

        StringA                 GetAudioDevice_Oal                      () const;
        void                    SetAudioDevice_Oal                      ( StringA value );

        bool                    GetAudioDisableDoppler                  () const;
        void                    SetAudioDisableDoppler                  ( bool value );

        bool                    GetAudioEnabled                         () const;
        void                    SetAudioEnabled                         ( bool value );

        eAudioGlobalQuality     GetAudioGlobalQuality                   () const;
        void                    SetAudioGlobalQuality                   ( eAudioGlobalQuality value );

        float                   GetAudioMusicVolume                     () const;
        void                    SetAudioMusicVolume                     ( float value );

        eAudioQuality3d_Dx9     GetAudioQuality3d_Dx9                   () const;
        void                    SetAudioQuality3d_Dx9                   ( eAudioQuality3d_Dx9 value );

        bool                    GetAudioSoundHdr                        () const;
        void                    SetAudioSoundHdr                        ( bool value );

        float                   GetAudioSoundVolume                     () const;
        void                    SetAudioSoundVolume                     ( float value );

        eAudioSpeakerConfig     GetAudioSpeakerConfig                   () const;
        void                    SetAudioSpeakerConfig                   ( eAudioSpeakerConfig value );

        bool                    GetAudioUseEFX                          () const;
        void                    SetAudioUseEFX                          ( bool value );

        bool                    GetAudioUseHRTF                         () const;
        void                    SetAudioUseHRTF                         ( bool value );

        bool                    GetAutoUpdateFromLocator                () const;
        void                    SetAutoUpdateFromLocator                ( bool value );

        bool                    GetAutoUpdateFromLocatorAtInternetConnection() const;
        void                    SetAutoUpdateFromLocatorAtInternetConnection( bool value );

        StringA                 GetAutoUpdateLocatorDBUrl               () const;
        void                    SetAutoUpdateLocatorDBUrl               ( StringA value );

        StringA                 GetBlackListUrl                         () const;
        void                    SetBlackListUrl                         ( StringA value );

        bool                    GetDisableReplayRecording               () const;
        void                    SetDisableReplayRecording               ( bool value );

        class CSystemConfigDisplay* GetDisplay                              () const;
        void                    SetDisplay                              ( class CSystemConfigDisplay* value );

        class CSystemConfigDisplay* GetDisplaySafe                          () const;
        void                    SetDisplaySafe                          ( class CSystemConfigDisplay* value );

        bool                    GetEdDontConnect                        () const;
        void                    SetEdDontConnect                        ( bool value );

        bool                    GetEnableCrashLogUpload                 () const;
        void                    SetEnableCrashLogUpload                 ( bool value );

        bool                    GetEnableLocators                       () const;
        void                    SetEnableLocators                       ( bool value );

        bool                    GetFileTransferEnableAvatarDownload     () const;
        void                    SetFileTransferEnableAvatarDownload     ( bool value );

        bool                    GetFileTransferEnableAvatarLocators     () const;
        void                    SetFileTransferEnableAvatarLocators     ( bool value );

        bool                    GetFileTransferEnableAvatarUpload       () const;
        void                    SetFileTransferEnableAvatarUpload       ( bool value );

        bool                    GetFileTransferEnableDownload           () const;
        void                    SetFileTransferEnableDownload           ( bool value );

        bool                    GetFileTransferEnableMapDownload        () const;
        void                    SetFileTransferEnableMapDownload        ( bool value );

        bool                    GetFileTransferEnableMapLocators        () const;
        void                    SetFileTransferEnableMapLocators        ( bool value );

        bool                    GetFileTransferEnableMapModDownload     () const;
        void                    SetFileTransferEnableMapModDownload     ( bool value );

        bool                    GetFileTransferEnableMapModLocators     () const;
        void                    SetFileTransferEnableMapModLocators     ( bool value );

        bool                    GetFileTransferEnableMapModUpload       () const;
        void                    SetFileTransferEnableMapModUpload       ( bool value );

        bool                    GetFileTransferEnableMapSkinDownload    () const;
        void                    SetFileTransferEnableMapSkinDownload    ( bool value );

        bool                    GetFileTransferEnableMapSkinLocators    () const;
        void                    SetFileTransferEnableMapSkinLocators    ( bool value );

        bool                    GetFileTransferEnableMapSkinUpload      () const;
        void                    SetFileTransferEnableMapSkinUpload      ( bool value );

        bool                    GetFileTransferEnableMapUpload          () const;
        void                    SetFileTransferEnableMapUpload          ( bool value );

        bool                    GetFileTransferEnableTagSkinDownload    () const;
        void                    SetFileTransferEnableTagSkinDownload    ( bool value );

        bool                    GetFileTransferEnableTagSkinLocators    () const;
        void                    SetFileTransferEnableTagSkinLocators    ( bool value );

        bool                    GetFileTransferEnableTagSkinUpload      () const;
        void                    SetFileTransferEnableTagSkinUpload      ( bool value );

        bool                    GetFileTransferEnableUnknownTypeDownload() const;
        void                    SetFileTransferEnableUnknownTypeDownload( bool value );

        bool                    GetFileTransferEnableUnknownTypeLocators() const;
        void                    SetFileTransferEnableUnknownTypeLocators( bool value );

        bool                    GetFileTransferEnableUnknownTypeUpload  () const;
        void                    SetFileTransferEnableUnknownTypeUpload  ( bool value );

        bool                    GetFileTransferEnableUpload             () const;
        void                    SetFileTransferEnableUpload             ( bool value );

        bool                    GetFileTransferEnableVehicleSkinDownload() const;
        void                    SetFileTransferEnableVehicleSkinDownload( bool value );

        bool                    GetFileTransferEnableVehicleSkinLocators() const;
        void                    SetFileTransferEnableVehicleSkinLocators( bool value );

        bool                    GetFileTransferEnableVehicleSkinUpload  () const;
        void                    SetFileTransferEnableVehicleSkinUpload  ( bool value );

        uint                    GetFileTransferMaxCacheSize             () const;
        void                    SetFileTransferMaxCacheSize             ( uint value );

        bool                    GetInputsAlternateMethod                () const;
        void                    SetInputsAlternateMethod                ( bool value );

        bool                    GetInputsCaptureKeyboard                () const;
        void                    SetInputsCaptureKeyboard                ( bool value );

        bool                    GetInputsEnableRumble                   () const;
        void                    SetInputsEnableRumble                   ( bool value );

        bool                    GetInputsFreezeUnusedAxes               () const;
        void                    SetInputsFreezeUnusedAxes               ( bool value );

        bool                    GetIsIgnorePlayerSkins                  () const;
        void                    SetIsIgnorePlayerSkins                  ( bool value );

        bool                    GetIsSafeMode                           () const;
        void                    SetIsSafeMode                           ( bool value );

        bool                    GetIsSkipRollingDemo                    () const;
        void                    SetIsSkipRollingDemo                    ( bool value );

        uint                    GetNetworkClientPort                    () const;
        void                    SetNetworkClientPort                    ( uint value );

        uint                    GetNetworkDownloadRate                  () const;
        void                    SetNetworkDownloadRate                  ( uint value );

        StringA                 GetNetworkForceServerAddress            () const;
        void                    SetNetworkForceServerAddress            ( StringA value );

        bool                    GetNetworkForceUseLocalAddress          () const;
        void                    SetNetworkForceUseLocalAddress          ( bool value );

        StringA                 GetNetworkLastUsedMSAddress             () const;
        void                    SetNetworkLastUsedMSAddress             ( StringA value );

        StringA                 GetNetworkLastUsedMSPath                () const;
        void                    SetNetworkLastUsedMSPath                ( StringA value );

        uint                    GetNetworkP2PServerPort                 () const;
        void                    SetNetworkP2PServerPort                 ( uint value );

        StringA                 GetNetworkProxyLogin                    () const;
        void                    SetNetworkProxyLogin                    ( StringA value );

        StringA                 GetNetworkProxyPassword                 () const;
        void                    SetNetworkProxyPassword                 ( StringA value );

        uint                    GetNetworkServerBroadcastLength         () const;
        void                    SetNetworkServerBroadcastLength         ( uint value );

        uint                    GetNetworkServerPort                    () const;
        void                    SetNetworkServerPort                    ( uint value );

        eNetworkSpeed           GetNetworkSpeed                         () const;
        void                    SetNetworkSpeed                         ( eNetworkSpeed value );

        uint                    GetNetworkUploadRate                    () const;
        void                    SetNetworkUploadRate                    ( uint value );

        bool                    GetNetworkUseNatUPnP                    () const;
        void                    SetNetworkUseNatUPnP                    ( bool value );

        bool                    GetNetworkUseProxy                      () const;
        void                    SetNetworkUseProxy                      ( bool value );

        uint                    GetPlayerInfoDisplaySize                () const;
        void                    SetPlayerInfoDisplaySize                ( uint value );

        ePlayerInfoDisplayType  GetPlayerInfoDisplayType                () const;
        void                    SetPlayerInfoDisplayType                ( ePlayerInfoDisplayType value );

        ePlayerOcclusion        GetPlayerOcclusion                      () const;
        void                    SetPlayerOcclusion                      ( ePlayerOcclusion value );

        ePlayerShadow           GetPlayerShadow                         () const;
        void                    SetPlayerShadow                         ( ePlayerShadow value );

        bool                    GetProfileEnableMulti                   () const;
        void                    SetProfileEnableMulti                   ( bool value );

        StringA                 GetProfileName                          () const;
        void                    SetProfileName                          ( StringA value );

        eTmBackgroundQuality    GetTmBackgroundQuality                  () const;
        void                    SetTmBackgroundQuality                  ( eTmBackgroundQuality value );

        eTmCarParticlesQuality  GetTmCarParticlesQuality                () const;
        void                    SetTmCarParticlesQuality                ( eTmCarParticlesQuality value );

        eTmCarQuality           GetTmCarQuality                         () const;
        void                    SetTmCarQuality                         ( eTmCarQuality value );

        uint                    GetTmMaxOpponents                       () const;
        void                    SetTmMaxOpponents                       ( uint value );

        eTmOpponents            GetTmOpponents                          () const;
        void                    SetTmOpponents                          ( eTmOpponents value );

        eVsk3BoatQuality        GetVsk3BoatQuality                      () const;
        void                    SetVsk3BoatQuality                      ( eVsk3BoatQuality value );

        eVsk3SeaQuality         GetVsk3SeaQuality                       () const;
        void                    SetVsk3SeaQuality                       ( eVsk3SeaQuality value );

        eVsk3Stem               GetVsk3Stem                             () const;
        void                    SetVsk3Stem                             ( eVsk3Stem value );

        eVsk3TeamMate           GetVsk3TeamMate                         () const;
        void                    SetVsk3TeamMate                         ( eVsk3TeamMate value );

        void                    SetProfileNameUnassigned                ();
