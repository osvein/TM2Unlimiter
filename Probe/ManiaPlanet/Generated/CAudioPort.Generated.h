        enum { CLASSID = 0x10001000 };

        static CAudioPort*      CreateInstance ();

        enum eSettingQuality
        {
            SETTINGQUALITY_AUDIOQUALITY_LOW,
            SETTINGQUALITY_AUDIOQUALITY_NORMAL,
            SETTINGQUALITY_AUDIOQUALITY_HIGH
        };
        static std::wstring     SettingQualityToString                  ( eSettingQuality value );
        static eSettingQuality  ParseSettingQuality                     ( const std::wstring& wstrName );

        uint                    GetAnalyzerAudioLongestSlice            () const;
        void                    SetAnalyzerAudioLongestSlice            ( uint value );

        float                   GetAnalyzerAudioTimePerSec              () const;
        void                    SetAnalyzerAudioTimePerSec              ( float value );

        float                   GetAnalyzerAudioTimePerSecStream        () const;
        void                    SetAnalyzerAudioTimePerSecStream        ( float value );

        float                   GetAnalyzerAudioTimePerSecUpdate        () const;
        void                    SetAnalyzerAudioTimePerSecUpdate        ( float value );

        StringA                 GetAnalyzerEstimatedVolume              () const;
        void                    SetAnalyzerEstimatedVolume              ( StringA value );

        uint                    GetAnalyzerNbAutoDuckedSounds           () const;
        void                    SetAnalyzerNbAutoDuckedSounds           ( uint value );

        uint                    GetAnalyzerNbFadingSounds               () const;
        void                    SetAnalyzerNbFadingSounds               ( uint value );

        uint                    GetAnalyzerStreamBytesPerSec            () const;
        void                    SetAnalyzerStreamBytesPerSec            ( uint value );

        uint                    GetAnalyzerTotalKeepersMem              () const;
        void                    SetAnalyzerTotalKeepersMem              ( uint value );

        List < nodptr<class CAudioBufferKeeper> >& GetBufferKeepers                        () const;
        void                    SetBufferKeepers                        ( List < nodptr<class CAudioBufferKeeper> >& value );

        List < nodptr<class CPlugFileSnd> >& GetCapturedFileSnds                     () const;
        void                    SetCapturedFileSnds                     ( List < nodptr<class CPlugFileSnd> >& value );

        class CPlugAudioBalance* GetCurBalance                           () const;
        void                    SetCurBalance                           ( class CPlugAudioBalance* value );

        float                   GetCurSoundHdrCorrection                () const;
        void                    SetCurSoundHdrCorrection                ( float value );

        float                   GetCurSoundVolumeRms                    () const;
        void                    SetCurSoundVolumeRms                    ( float value );

        List < nodptr<class CHmsListener> >& GetHmsListeners                         () const;
        void                    SetHmsListeners                         ( List < nodptr<class CHmsListener> >& value );

        uint                    GetIsCapturing                          () const;
        void                    SetIsCapturing                          ( uint value );

        bool                    GetIsEnabled                            () const;
        void                    SetIsEnabled                            ( bool value );

        float                   GetMusicVolume                          () const;
        void                    SetMusicVolume                          ( float value );

        uint                    GetNbMaxSounds                          () const;
        void                    SetNbMaxSounds                          ( uint value );

        bool                    GetSettingDisableDoppler                () const;
        void                    SetSettingDisableDoppler                ( bool value );

        uint                    GetSettingMaxSimultaneousSounds         () const;
        void                    SetSettingMaxSimultaneousSounds         ( uint value );

        eSettingQuality         GetSettingQuality                       () const;
        void                    SetSettingQuality                       ( eSettingQuality value );

        float                   GetSettingSoundHdrFactor                () const;
        void                    SetSettingSoundHdrFactor                ( float value );

        uint                    GetSettingSoundsPerUpdate               () const;
        void                    SetSettingSoundsPerUpdate               ( uint value );

        uint                    GetSettingUpdatePeriod                  () const;
        void                    SetSettingUpdatePeriod                  ( uint value );

        float                   GetSoundVolume                          () const;
        void                    SetSoundVolume                          ( float value );

        List < nodptr<class CAudioSound> >& GetSounds                               () const;
        void                    SetSounds                               ( List < nodptr<class CAudioSound> >& value );

        void                    LoadExternalSoundParam                  ();
        void                    SaveExternalSoundParam                  ();
